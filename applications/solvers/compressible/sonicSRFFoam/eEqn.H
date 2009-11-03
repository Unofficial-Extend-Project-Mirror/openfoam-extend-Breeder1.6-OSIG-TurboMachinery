{
    fvScalarMatrix eEqn
    (
        fvm::ddt(rho, e)
      + fvm::div(phi, e)
      - fvm::laplacian(turbulence->alphaEff(), e)
    );

    srfZones.addCentrifugal(eEqn);

    solve(eEqn == - p*fvc::div(phi/fvc::interpolate(rho)));

    thermo.correct();
}

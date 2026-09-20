// _WCRSideloadShareFixShouldInstall @ 0150a94c

byte _WCRSideloadShareFixShouldInstall(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _WCRSideloadShareFixIsShareExtensionProcess();
  bVar1 = (byte)param_1;
  if ((param_1 & 1) == 0) {
    _WCRSideloadShareFixIsNotificationServiceProcess();
    bVar1 = (byte)param_1;
    if ((param_1 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar4 = (ulong)puVar3 & 0xffffffff;
      if (((ulong)puVar3 & 1) == 0) {
        return 0;
      }
      _WCRSideloadShareFixPreferredHostLinked();
      bVar1 = (byte)uVar4;
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      _WCRSideloadShareFixCloudAllowed();
      return bVar1 & 1;
    }
  }
  FUN_0150aa38();
  return bVar1 & 1;
}


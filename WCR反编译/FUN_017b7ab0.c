// FUN_017b7ab0 @ 017b7ab0

void FUN_017b7ab0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      pcVar3 = "WCPluginsMgr";
      _objc_getClass();
      if (pcVar3 != (char *)0x0) {
        local_28 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        local_30 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_34 = 1;
        }
        else if ((DAT_028e4240 & 1) == 0) {
          FUN_017b58bc();
          _objc_retainAutoreleasedReturnValue();
          local_40 = pcVar3;
          FUN_017b5ac4();
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_registerControllerWithTitle_vers_026a83d0,local_40,pcVar3,
                     &cf_WCRefineRootViewController);
          DAT_028e4240 = 1;
          _objc_storeStrong(&local_48);
          _objc_storeStrong(&local_40,0);
          local_34 = 0;
        }
        else {
          local_34 = 1;
        }
        _objc_storeStrong(&local_30,0);
      }
    }
  }
  return;
}


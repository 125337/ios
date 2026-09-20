// FUN_007edabc @ 007edabc

void FUN_007edabc(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    local_11 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxActualRedeemedCount_026a8568);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setThemeBoxActualRedeemedCount__026a8570,puVar1 + 1);
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeBoxClownModeEnabled_026a8578);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setThemeBoxRedeemedCount__026a8580,puVar1 + 1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveConfig_0269e5d0);
    _objc_storeStrong(&local_20,0);
  }
  return;
}


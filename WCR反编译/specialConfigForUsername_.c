// specialConfigForUsername: @ 010d9fac

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::specialConfigForUsername_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_nameplateSpecialUserEnabled_026ae830);
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_nameplateSpecialUserPaused__026ae860,local_30);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_nameplateSpecialUserConfigForUse_026ae868,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar2;
      }
      else {
        local_18 = (undefined *)0x0;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


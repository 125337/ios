// simulateActionTitle @ 01955d60

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationSettingsViewController::simulateActionTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineFakeLocationEngine_026ceb80;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationMoveRunning_026ac668);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasRoute_026ac648);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_f_P_jb;
      goto LAB_01955eac;
    }
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasRoute_026ac648);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf____jb;
  }
LAB_01955eac:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


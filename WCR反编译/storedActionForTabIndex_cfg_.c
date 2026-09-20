// storedActionForTabIndex:cfg: @ 019b643c

/* Function Stack Size: 0x20 bytes */

ID WCRefineFloatingTabBarButtonActionViewController::storedActionForTabIndex_cfg_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraTapAction0_026a19d0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_30 == 1) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraTapAction1_026a19d8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_30 == 2) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraTapAction2_026a19e0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_30 == 3) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraTapAction3_026a19e8);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


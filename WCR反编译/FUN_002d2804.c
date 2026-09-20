// FUN_002d2804 @ 002d2804

void FUN_002d2804(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
  cfstringStruct *local_78;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (local_20 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_floatingTabBarExtraButtonIcon0_026a1bb8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_20 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_floatingTabBarExtraButtonIcon1_026a1bc0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_20 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_floatingTabBarExtraButtonIcon2_026a1bc8);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (local_20 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_floatingTabBarExtraButtonIcon3_026a1bd0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


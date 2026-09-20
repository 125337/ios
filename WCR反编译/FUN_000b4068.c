// FUN_000b4068 @ 000b4068

void FUN_000b4068(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (local_20 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bottomBarLongPressAction0_0269e390);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_20 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bottomBarLongPressAction1_0269e398);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_20 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bottomBarLongPressAction2_0269e3a0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_20 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bottomBarLongPressAction3_0269e3a8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


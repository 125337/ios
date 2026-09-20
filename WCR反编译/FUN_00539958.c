// FUN_00539958 @ 00539958

void FUN_00539958(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b0;
  long local_38;
  ulong local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (local_38 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    local_18 = &DAT_028cb278;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dcf8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar1 = DAT_028cb270;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(pcVar1);
    uVar2 = local_30;
    pcVar3 = DAT_028cb270;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb270,PTR_s_dateFormat_026a4c48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb270,PTR_s_setDateFormat__0269d1c8,local_30);
    }
    pcVar3 = DAT_028cb270;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb270,PTR_s_stringFromDate__0269d1d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_sync_exit(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}


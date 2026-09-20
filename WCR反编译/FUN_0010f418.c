// FUN_0010f418 @ 0010f418

void FUN_0010f418(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00114764(local_20,&cf_template);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = local_20;
    FUN_00114764(local_20,&cf_plain);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_28;
  FUN_00114cf4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_<sysmsg);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_<link);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar1;
        goto LAB_0010f660;
      }
    }
  }
  uVar1 = local_40[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
LAB_0010f660:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


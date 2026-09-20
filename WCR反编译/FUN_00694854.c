// FUN_00694854 @ 00694854

void FUN_00694854(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_88;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_00694194();
  if ((uVar1 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_00693578();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_HTTPBody_026a64f0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar1;
    if (uVar1 == 0) {
      local_88 = local_20;
    }
    FUN_0068c480();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_88;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_38 != 0) {
      FUN_0068cf24(local_38,2);
    }
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


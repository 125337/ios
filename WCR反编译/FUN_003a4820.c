// FUN_003a4820 @ 003a4820

void FUN_003a4820(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_40;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_003cccac(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_nativePassthrough_026a2e00);
  if ((uVar1 & 1) == 0) {
    local_40 = local_28;
  }
  else {
    local_40 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_40);
  return;
}


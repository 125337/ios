// FUN_003a48f4 @ 003a48f4

void FUN_003a48f4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_003cd094(local_18,local_20);
  pcVar1 = &cf_h_N_;
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_h_N_g;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}


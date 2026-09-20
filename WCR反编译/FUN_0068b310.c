// FUN_0068b310 @ 0068b310

void FUN_0068b310(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  byte local_31;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  local_30 = param_1;
  local_28 = param_3;
  FUN_00689588(local_20,param_3);
  local_31 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_0068a42c();
    if ((uVar2 & 1) != 0) {
      local_31 = 1;
    }
  }
  bVar1 = (local_31 & 1) == 0;
  if (bVar1) {
    local_80 = &cf_modify;
    FUN_0068a554(&cf_modify,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  else {
    local_80 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_80;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_31 & 1) != 0) {
    FUN_00680df8(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_00689ab4(local_31 & 1,local_50[0],*(undefined8 *)(param_1 + 0x28));
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_20,0);
  return;
}


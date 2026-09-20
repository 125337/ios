// FUN_004c0eb8 @ 004c0eb8

void FUN_004c0eb8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint local_5c;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028cac19);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_004c17f8();
    _objc_retainAutoreleasedReturnValue();
    local_5c = 0;
    local_38[0] = uVar1;
    if (uVar1 != 0) {
      _objc_getAssociatedObject(uVar1,&DAT_028cac19);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5c = (uint)uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_5c & 1) == 0) {
      (*DAT_028cac10)(local_18,local_20);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}


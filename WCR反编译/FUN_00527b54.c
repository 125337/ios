// FUN_00527b54 @ 00527b54

void FUN_00527b54(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_7c;
  byte local_29;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1;
  FUN_00527d50();
  local_29 = (byte)lVar1;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_object_0269ddb0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = 1;
    if ((uVar3 & 1) == 0) {
      local_7c = 1;
      FUN_00527d50();
    }
    local_29 = local_7c & 1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_29 & 1) == 0) {
    FUN_005279f0();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_storeStrong(&local_20,0);
  return;
}


// FUN_00040ac4 @ 00040ac4

void FUN_00040ac4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *local_a0;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  FUN_0004069c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_30 = uVar2;
  FUN_000370d0();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  uVar2 = local_30;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_4c = 1;
  }
  else {
    uVar2 = local_48[0];
    FUN_000412c0(local_48[0],local_28);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_a0 = &local_30;
    }
    else {
      local_a0 = &local_58;
    }
    uVar2 = *local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_4c = 1;
    local_18 = uVar2;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


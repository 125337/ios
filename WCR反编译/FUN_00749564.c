// FUN_00749564 @ 00749564

void FUN_00749564(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_00748910(local_18,0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) || (uVar2 = local_28, FUN_0074b910(), uVar1 = local_28, (uVar2 & 1) != 0)) {
      local_1c = 1;
    }
    else {
      uVar2 = local_18;
      FUN_0074bd08();
      FUN_0074d2d0(uVar1,uVar2 & 0xffffffff);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}


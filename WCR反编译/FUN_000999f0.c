// FUN_000999f0 @ 000999f0

byte FUN_000999f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatroom_0269e248),
       (uVar1 & 1) == 0)) {
      uVar1 = local_20;
      FUN_00099bd0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_00099ed4();
      local_11 = (byte)uVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


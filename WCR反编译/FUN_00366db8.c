// FUN_00366db8 @ 00366db8

byte FUN_00366db8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  do {
    if (local_28 == 0) {
      local_2c = 2;
LAB_00366e74:
      _objc_storeStrong(&local_28,0);
      local_2c = local_2c + -2;
      if (local_2c == 0) {
        local_2c = 1;
        local_11 = 0;
      }
      _objc_storeStrong(local_2c,&local_20,0);
      return local_11 & 1;
    }
    uVar1 = local_28;
    FUN_003b2b98();
    if ((uVar1 & 1) != 0) {
      local_11 = 1;
      local_2c = 1;
      goto LAB_00366e74;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}


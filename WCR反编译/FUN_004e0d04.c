// FUN_004e0d04 @ 004e0d04

byte FUN_004e0d04(undefined8 param_1)

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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDragging_0269ddf8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDecelerating_0269e888);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_panGestureRecognizer_0269dd98);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (uVar2 == 1) {
          uVar1 = local_20;
          FUN_004e145c(0);
          local_11 = (byte)uVar1 & 1;
        }
        else if (uVar2 == 2) {
          uVar1 = local_20;
          FUN_004e145c(0);
          local_11 = (byte)uVar1 & 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      uVar1 = local_20;
      FUN_004e145c();
      local_11 = (byte)uVar1 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


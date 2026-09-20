// FUN_00f61474 @ 00f61474

byte FUN_00f61474(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      FUN_00f62ba8(lVar1,local_28);
    }
    uVar2 = local_20;
    FUN_00f62d80();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_00f62788(local_20,local_28);
      local_11 = (byte)uVar2 & 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


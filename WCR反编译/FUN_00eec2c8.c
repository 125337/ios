// FUN_00eec2c8 @ 00eec2c8

byte FUN_00eec2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
  }
  else {
    lVar1 = local_28;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,lVar1);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,lVar1,local_30);
      local_11 = (byte)uVar2 & 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


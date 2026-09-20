// FUN_01793db0 @ 01793db0

byte FUN_01793db0(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (((local_20 == 0) ||
      (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar1 == 0)) || (param_3 == (undefined1 *)0x0)) {
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
      (*(code *)PTR__objc_msgSend_02578628)(local_20,lVar1);
      *param_3 = (char)uVar2;
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}


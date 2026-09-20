// FUN_0014d80c @ 0014d80c

byte FUN_0014d80c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_78;
  ulong local_60;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0014d558();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_inputMode_0269f4a8);
    if ((uVar1 & 1) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_inputMode_0269f4a8);
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_positionMode_0269f4b0);
    if ((uVar1 & 1) == 0) {
      local_78 = 0;
    }
    else {
      local_78 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_positionMode_0269f4b0);
    }
    local_11 = local_60 == 2 || local_78 == 2;
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


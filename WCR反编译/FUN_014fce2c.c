// FUN_014fce2c @ 014fce2c

byte FUN_014fce2c(undefined8 param_1)

{
  ulong uVar1;
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
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isMyContact_0269ef80);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isMyContact_0269ef80);
      local_11 = (byte)uVar1 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


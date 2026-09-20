// FUN_00055cb0 @ 00055cb0

byte FUN_00055cb0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isRawVideo_0269da68);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiRawFileLength_0269da70);
      local_11 = (int)uVar1 != 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isRawVideo_0269da68);
      local_11 = (bool)((byte)uVar1 & 1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


// FUN_0065c1d8 @ 0065c1d8

byte FUN_0065c1d8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_78;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((local_28 == 0) ||
      (uVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
      (uVar1 & 1) == 0)) ||
     (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSender_0269d1b0),
     (uVar1 & 1) == 0)) {
    if (local_20 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = local_20;
      _object_getClass();
    }
    if ((local_78 == 0) ||
       (uVar1 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
       (uVar1 & 1) == 0)) {
      uVar1 = local_20;
      FUN_0065635c(local_20,PTR_s_m_uiIsSenderStatus_026a62e0);
      local_11 = (int)uVar1 == 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isSenderFromMsgWrap__0269d558,local_20);
      local_11 = (bool)((byte)local_78 & 1);
    }
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


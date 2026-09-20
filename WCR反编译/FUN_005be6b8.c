// FUN_005be6b8 @ 005be6b8

byte FUN_005be6b8(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_98;
  ulong local_50;
  undefined4 local_44;
  undefined *local_40;
  char *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_40 = PTR_s_SaveMesImg_MsgWrap__026a5930;
  local_28 = pcVar1;
  if (((local_20 == 0) || (pcVar1 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_SaveMesImg_MsgWrap__026a5930),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0059d260(local_20,&cf_m_dtImg);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_length_0269cca0);
    if ((uVar2 & 1) == 0) {
      local_98 = 0;
    }
    else {
      local_98 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    }
    if (local_98 == 0) {
      local_11 = 0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40,0,local_20);
      local_11 = (byte)pcVar1 & 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


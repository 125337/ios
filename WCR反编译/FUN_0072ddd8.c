// FUN_0072ddd8 @ 0072ddd8

byte FUN_0072ddd8(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_c8;
  char *local_58;
  undefined *local_50;
  char *local_48;
  ulong local_40;
  undefined4 local_38;
  char *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_28 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (_objc_msgSend(pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
     ((ulong)pcVar1 & 1) == 0)) {
    uVar2 = local_20;
    _objc_msgSend(local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      uVar2 = local_20;
      _objc_msgSend(local_20,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = uVar2;
      _objc_msgSend(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      _objc_msgSend(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_40, _objc_msgSend(local_40,PTR_s_length_0269cca0), uVar2 == 0)) {
        local_11 = 0;
        local_38 = 1;
      }
      else {
        pcVar1 = "SettingUtil";
        _objc_getClass();
        local_50 = PTR_s_getLocalUsrName__0269ce98;
        local_48 = pcVar1;
        if ((pcVar1 == (char *)0x0) ||
           (_objc_msgSend(pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98)
           , ((ulong)pcVar1 & 1) == 0)) {
          local_11 = 0;
          local_38 = 1;
        }
        else {
          pcVar1 = local_48;
          _objc_msgSend(local_48,local_50,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_58 = pcVar1;
          _objc_msgSend(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          _objc_msgSend(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_c8 = 0;
          if (((ulong)pcVar1 & 1) != 0) {
            uVar2 = local_40;
            _objc_msgSend(local_40,PTR_s_isEqualToString__0269ccc8,local_58);
            local_c8 = (byte)uVar2;
          }
          local_11 = local_c8 & 1;
          local_38 = 1;
          _objc_storeStrong(&local_58,0);
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    pcVar1 = local_28;
    _objc_msgSend(local_28,PTR_s_isSenderFromMsgWrap__0269d558,local_20);
    local_11 = (byte)pcVar1 & 1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


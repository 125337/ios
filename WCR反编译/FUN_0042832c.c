// FUN_0042832c @ 0042832c

byte FUN_0042832c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_bc;
  ulong local_58;
  ulong local_50;
  char *local_48;
  undefined1 local_3d;
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    local_30 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSenderFromMsgWrap__0269d558,local_20);
      local_3d = SUB81(pcVar1,0);
      if (((ulong)pcVar1 & 1) != 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_004286f0;
      }
    }
    FUN_0040c4c4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (char *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRealChatUsr_0269d190);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        local_bc = 0;
        if (uVar2 != 0) {
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_48);
          local_bc = (byte)uVar2;
        }
        local_11 = local_bc & 1;
        local_24 = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
LAB_004286f0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


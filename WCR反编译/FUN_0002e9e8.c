// FUN_0002e9e8 @ 0002e9e8

byte FUN_0002e9e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar4 & 1) == 0) {
        pcVar5 = "CMessageWrap";
        _objc_getClass();
        if (((pcVar5 == (char *)0x0) ||
            (pcVar6 = pcVar5,
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558
                      ), ((ulong)pcVar6 & 1) == 0)) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_isSenderFromMsgWrap__0269d558,local_20),
           ((ulong)pcVar5 & 1) == 0)) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
          if ((uVar2 & 1) == 0) {
            local_11 = 0;
          }
          else {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSender_0269d1b0);
            local_11 = (byte)uVar2 & 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}


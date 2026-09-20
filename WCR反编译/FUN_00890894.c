// FUN_00890894 @ 00890894

void FUN_00890894(ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_1c;
  ulong local_18;
  
  FUN_008a1ebc();
  if ((param_1 & 1) != 0) {
    FUN_008a181c();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    if (param_1 == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_setUseVoIPLCK__026a9680);
      if ((param_1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUseVoIPLCK__026a9680,1);
      }
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_sendOpenLCKExpt_026a9690);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendOpenLCKExpt_026a9690);
      }
      pcVar2 = "MMContext";
      _objc_getClass();
      pcVar3 = "_TtC6WeChat14VoIPLCKManager";
      local_38 = pcVar2;
      _objc_getClass();
      local_40 = pcVar3;
      if (((local_38 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
         (pcVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar2;
        if ((pcVar2 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar2 & 1) != 0)) {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar2;
          if ((pcVar2 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_onServiceInit_026a9688),
             ((ulong)pcVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_onServiceInit_026a9688);
          }
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_48,0);
      }
      local_1c = 0;
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}


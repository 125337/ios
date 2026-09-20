// FUN_016ac524 @ 016ac524

void FUN_016ac524(void)

{
  char *pcVar1;
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    _objc_alloc_init();
    local_28 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      FUN_016ac790();
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_respondsToSelector__026ca818,
                     PTR_s_getCurrentViewController_026b2b90);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_38);
          }
        }
      }
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setBShowSendSuccessView__026b2b98
                );
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBShowSendSuccessView__026b2b98,0);
      }
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setBHiddenSendSuccessToastView__026b2ba0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setBHiddenSendSuccessToastView__026b2ba0,1);
      }
      FUN_016acce0(0x4034000000000000,local_28);
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}


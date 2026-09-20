// FUN_00151260 @ 00151260

void FUN_00151260(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  ulong local_a8;
  char *local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  uint local_4c;
  char *local_48;
  ulong local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_21 = 0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_00151690();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "WCRefineChatAttachmentBeautifyViewController";
  local_30 = uVar3;
  _objc_getClass();
  local_48 = pcVar4;
  if ((local_30 == 0) || (pcVar4 == (char *)0x0)) {
    local_4c = 1;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    local_a8 = uVar3;
    if (uVar3 == 0) {
      local_a8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_a8;
    }
    local_61 = uVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_a8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_48);
    if ((uVar3 & 1) == 0) {
      pcVar4 = local_48;
      _objc_alloc_init();
      local_70 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      pcVar5 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_pushViewController_animated__0269d590,local_70,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar5,local_70,1);
      }
      _objc_storeStrong(&local_70,0);
      local_4c = 0;
    }
    else {
      local_4c = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  uVar1 = local_4c;
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_026df918,0,1);
  if ((local_21 & 1) == 0) {
    if (uVar1 < 2) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x151690);
    local_4c = uVar1;
    (*pcVar2)();
  }
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1515e8);
  (*pcVar2)();
}


// unreadDotOffsetValueTapped: @ 01cb7ed4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefinePrivateFriendViewController::unreadDotOffsetValueTapped_
          (WCRefinePrivateFriendViewController *this,ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 in_d0;
  char *local_b0;
  undefined8 local_90;
  bool local_79;
  char *local_78;
  char *local_70;
  char *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined8 local_40;
  byte local_35;
  undefined4 local_34;
  char *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_34 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    local_35 = lVar2 == 0x5ec7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingUnreadDotOffsetAxis__026c3330,!(bool)local_35);
    local_49 = 0;
    local_59 = 0;
    if ((local_35 & 1) == 0) {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = in_d0;
    }
    else {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = in_d0;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    local_40 = local_90;
    pcVar1 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUnreadDotOffsetAlert__026c3338,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelUnreadDotOffsetInput_026c3340);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmUnreadDotOffsetInput_026c3348);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,4);
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar1 = local_68;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
    local_79 = ((ulong)pcVar1 & 1) == 0;
    if (local_79) {
      local_b0 = (char *)0x0;
    }
    else {
      local_b0 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_b0;
    }
    local_79 = !local_79;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_b0;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setKeyboardType__026aec58,2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


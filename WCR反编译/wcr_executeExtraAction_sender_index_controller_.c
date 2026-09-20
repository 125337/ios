// wcr_executeExtraAction:sender:index:controller: @ 0029c22c

/* Function Stack Size: 0x30 bytes */

void WCRFloatingTabBarExtraButtonTarget::wcr_executeExtraAction_sender_index_controller_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_138;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined4 local_88;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_58;
  ulong local_50;
  unsigned_long_long local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  pcVar3 = local_38;
  local_71 = 0;
  local_81 = 0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_138 = local_38;
  if (((ulong)pcVar3 & 1) == 0) {
    local_138 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_138;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_88 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_ActionMenu);
    if ((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_isEqualToString__0269ccc8,&cf_ActionList), ((ulong)pcVar3 & 1) == 0
       )) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineClearUnread);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = &cf_wcrefine_executeAction_;
        _NSSelectorFromString();
        uVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((uVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__hR_OgbLhV_gR_)
          ;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar3,local_58);
        }
        local_88 = 0;
      }
      else {
        puVar2 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_WCRefineClearUnreadMsgHook;
        local_98 = puVar2;
        _NSClassFromString();
        pcVar4 = &cf_WCRefine_doClearUnreadMsgWithToast_;
        local_a0 = pcVar3;
        _NSSelectorFromString();
        local_a8 = pcVar4;
        if ((local_a0 != (cfstringStruct *)0x0) &&
           (pcVar3 = local_a0,
           (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_respondsToSelector__026ca818,pcVar4)
           , puVar2 = PTR___dispatch_main_q_02578680, ((ulong)pcVar3 & 1) != 0)) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_98;
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_0029c894;
          local_c8 = &DAT_0257b8c8;
          local_b8 = local_a0;
          local_b0 = local_a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = puVar1;
          _dispatch_async(puVar2,&local_e0);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_c0,0);
        }
        local_88 = 1;
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      pcVar3 = &cf_wcrefine_showActionMenuForButtonIndex_;
      _NSSelectorFromString();
      uVar5 = local_50;
      local_90 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_90,local_48);
      }
      local_88 = 1;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


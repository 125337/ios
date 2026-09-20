// FUN_0015d9dc @ 0015d9dc

void FUN_0015d9dc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  cfstringStruct *local_118;
  cfstringStruct *local_f8;
  char *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_60;
  char *local_58;
  undefined4 local_50;
  char *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = "MMMsgContentTipsItem";
  _objc_getClass();
  local_40 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_50 = 1;
  }
  else {
    _objc_alloc_init();
    local_58 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf___;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_msgSummary_0269f6d0);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgSummary_0269f6d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_68 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_60,local_68);
        }
        _objc_storeStrong(&local_68,0);
      }
      pcVar4 = local_60;
      FUN_0015fe9c();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_60;
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_f8 = &cf_mo_;
      }
      else {
        local_f8 = local_38;
      }
      FUN_0015fe9c();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 0;
      pcVar5 = local_60;
      local_70 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_118 = local_70;
      }
      else {
        local_118 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_118;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_118;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setStyle__0269f6f8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setStyle__0269f6f8,1);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setBizType__0269f700);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBizType__0269f700,1);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTitle__0269cef0,local_78);
      }
      FUN_0016016c();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setIconImage__0269f708);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setIconImage__0269f708,local_90);
        }
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setShowCloseBtn__0269f710);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setShowCloseBtn__0269f710,0);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setAllowLineBreak__0269f718);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAllowLineBreak__0269f718,0);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setShowRightArrow__0269f720);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setShowRightArrow__0269f720,0);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setUserData__0269f728);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserData__0269f728,local_30);
      }
      pcVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setRightBtnText__0269f730);
      pcVar1 = local_58;
      puVar3 = PTR_s_setRightBtnText__0269f730;
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar5 = &cf_ChatRoomTopMessage_CancelTopButtonTitle;
        FUN_001604fc(&cf_ChatRoomTopMessage_CancelTopButtonTitle,&cf_Smn_v);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setRightBtnConfirmText__0269f738)
      ;
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setRightBtnConfirmText__0269f738,&cf___);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomMenuItemTitle__0269f740)
      ;
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setCustomMenuItemTitle__0269f740,&cf_hQSmn_v);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_50 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}


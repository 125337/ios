// handleChatLiftValueButtonTapped: @ 01b4d8bc

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::handleChatLiftValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  ID IVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  ID local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = 0x15;
  if (lVar2 != 0xbcd) {
    local_30 = 0x16;
  }
  pcVar1 = &cf__JubNnm;
  if (local_30 != 0x15) {
    pcVar1 = &cf_yJubNnm;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_18;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatLiftValueForTarget__026bf598,local_30);
  pcVar4 = "WCUIAlertView";
  local_40 = IVar3;
  _objc_getClass();
  local_48 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
    if (local_30 == 0x15) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_handleChatRoomLiftInput__026bf5c0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_handlePrivateChatLiftInput__026bf5c8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    pcVar4 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}


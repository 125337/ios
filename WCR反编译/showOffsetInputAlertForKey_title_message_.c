// showOffsetInputAlertForKey:title:message: @ 018c1a3c

/* Function Stack Size: 0x28 bytes */

void WCRefineChatTimeViewController::showOffsetInputAlertForKey_title_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar4 = 0;
  local_40 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,&cf_chatTimeVerticalOffset);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf_chatTimeHorizontalOffset);
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = uVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIAlertView";
  local_48 = puVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_n__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_initWithTitle_message__0269d260,puVar2,local_38);
  local_50 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_alertConfirmOffset__026b7e00);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_50);
  _objc_setAssociatedObject(local_18,PTR_s_alertConfirmOffset__026b7e00,local_28,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


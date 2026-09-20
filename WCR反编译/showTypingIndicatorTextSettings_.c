// showTypingIndicatorTextSettings: @ 01c664f0

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::showTypingIndicatorTextSettings_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = local_18;
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_typingIndicatorText_026c2158);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_18;
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf__eck_WeQ_N_;
  }
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c66654;
  local_38 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf_n_c_yeW_,
             &cf_eQck_WeQevc_yeW_,local_68,&cf_eQeW_,&local_50);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


// showTQQOnlineTextPrivateSettings: @ 01c5e8f4

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::showTQQOnlineTextPrivateSettings_
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqSeparatorOnlineTextPrivate_026c2128);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_18;
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf__W_;
  }
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c5ea58;
  local_38 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf__W_eW__,&cf_yJu_W_eW_,
             local_68,&cf_eQeW_,&local_50);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


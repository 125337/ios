// showReceiptInputAlertForKey:title:message:currentValue: @ 018c1850

/* Function Stack Size: 0x30 bytes */

void WCRefineChatTimeViewController::showReceiptInputAlertForKey_title_message_currentValue_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  char *pcVar1;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
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
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_alertConfirmReceipt__026b7df8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_48);
  _objc_setAssociatedObject(local_18,PTR_s_alertConfirmReceipt__026b7df8,local_28,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


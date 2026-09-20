// confirmDissolvePack: @ 01b7293c

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::confirmDissolvePack_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(local_18 + (long)_pendingDeleteRel,local_28);
  *(undefined1 *)(local_18 + (long)_pendingDeletePackKeepItems) = 1;
  pcVar1 = &cf_WCUIAlertView;
  _NSClassFromString();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NRdR_,local_18,
             PTR_s_handlePackDelete__026bfb18);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


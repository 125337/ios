// showCreateFolderAlertWithBasePath: @ 01c6c580

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::showCreateFolderAlertWithBasePath_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextFieldDefaultText__0269fd98,&::cf___);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
  _objc_setAssociatedObject(local_30,"basePath",local_28,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_handleCreateFolderInput__026c25c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


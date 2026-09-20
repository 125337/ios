// showErrorAlert:message: @ 01ca7488

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginManagementViewController::showErrorAlert_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *local_40;
  char *local_38;
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
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


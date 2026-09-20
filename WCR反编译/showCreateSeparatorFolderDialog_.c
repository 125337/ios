// showCreateSeparatorFolderDialog: @ 01c694c8

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::showCreateSeparatorFolderDialog_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _objc_getAssociatedObject(uVar1,"basePath");
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  _objc_setAssociatedObject(local_18,"separatorBasePath",uVar1,1);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextFieldDefaultText__0269fd98,&::cf___);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_,local_18,
             PTR_s_confirmCreateSeparatorFolderFrom_026c2588);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


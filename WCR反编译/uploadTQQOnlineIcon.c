// uploadTQQOnlineIcon @ 01c5f664

/* Function Stack Size: 0x10 bytes */

void WCRefineNavigationAvatarViewController::uploadTQQOnlineIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineIconFolderPath_026c2008);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0), IVar1 == 0)) {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    local_34 = 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    _objc_setAssociatedObject(pcVar2,"actionType",&cf_uploadTQQOnlineIcon,1);
    pcVar2 = local_40;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


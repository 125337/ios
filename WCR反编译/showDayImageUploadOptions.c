// showDayImageUploadOptions @ 01cdf7b4

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::showDayImageUploadOptions(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  _WCRefineProfileBgWarehouseTabFromConfig();
  local_21 = param_1 == 1;
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  _objc_setAssociatedObject(pcVar1,"imageType",&cf_day,1);
  pcVar1 = local_30;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30,0);
  return;
}


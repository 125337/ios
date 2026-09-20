// uploadProfileBgImage @ 01cdd0d0

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::uploadProfileBgImage(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}


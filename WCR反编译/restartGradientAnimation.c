// restartGradientAnimation @ 01b0a850

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::restartGradientAnimation(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyGradientColorsAnimated__026be948,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startGradientAnimation_026be950);
  return;
}


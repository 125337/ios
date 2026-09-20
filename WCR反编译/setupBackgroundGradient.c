// setupBackgroundGradient @ 01b0921c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::setupBackgroundGradient(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 in_d3;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBackgroundGradientLayer__026be940);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar6 = 0;
  uVar5 = 0;
  FUN_01b09530();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar6 = 0x3ff0000000000000;
  uVar5 = 0x3ff0000000000000;
  FUN_01b09530();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_insertSublayer_atIndex__026ca738);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyGradientColorsAnimated__026be948,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startGradientAnimation_026be950);
  return;
}


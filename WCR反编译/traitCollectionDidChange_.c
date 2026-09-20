// traitCollectionDidChange: @ 01fb6688

/* Function Stack Size: 0x18 bytes */

void WCRefineThemeRolePillControl::traitCollectionDidChange_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_30 = PTR_WCRefineThemeRolePillControl_026d02b8;
  _objc_msgSendSuper2(&local_38,PTR_s_traitCollectionDidChange__0269f168,local_28);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar1 != IVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyTrackBackgroundColor_026b44b0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


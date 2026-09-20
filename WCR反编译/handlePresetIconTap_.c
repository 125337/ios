// handlePresetIconTap: @ 016e4140

/* Function Stack Size: 0x18 bytes */

void RepeatThemeIconSelectorViewController::handlePresetIconTap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e3f21);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar1 != 0)) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) != 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_iconType_026b31f8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDark_026b3200);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_themeIconSelectorDidSelectIcon_f_026b3288,uVar1,IVar4,IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_closeAfterSelection_026b3258);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


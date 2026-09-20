// hasMetricValueButtonTapped: @ 01ae7328

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripSettingsViewController::hasMetricValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  ID local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar4 = local_18;
  local_30 = lVar1 + -92000;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar4,&DAT_028e4558,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  local_40 = 0;
  local_38 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &cf_tepe<P;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf_newline_s_;
  switch(local_30) {
  case 0x835:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripAvatarSize_026a23f0);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_4YP_Y_);
    break;
  case 0x836:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripItemSpacing_026a23f8);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_4YP);
    break;
  case 0x837:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripSideMargin_026be2d8);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf__S);
    break;
  case 0x838:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripCornerRadius_026a2420);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_aSGrW);
    break;
  case 0x839:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripCardHeight_026a2418);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_aSGr_);
    _objc_storeStrong(&local_50,&::cf_newline_s_);
    break;
  case 0x83a:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripCardWidth_026a2410);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_aSGr__);
    _objc_storeStrong(&local_50,&::cf_newline_s_);
    break;
  case 0x83b:
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripNameSpacing_026a2400);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&cf_5fyN4YP);
    break;
  default:
    break;
  case 0x898:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripTopSpacingForRow__026be440,0);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
    break;
  case 0x899:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripTopSpacingForRow__026be440,1);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
    break;
  case 0x89a:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripTopSpacingForRow__026be440,2);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
    break;
  case 0x8a2:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripBottomSpacingForR_026be448,0);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
    break;
  case 0x8a3:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripBottomSpacingForR_026be448,1);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
    break;
  case 0x8a4:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_homeAvatarStripBottomSpacingForR_026be448,2);
    local_40 = uVar5;
    _objc_storeStrong(&local_48,&::cf___);
  }
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_58 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_5c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,local_18,PTR_s_hasMetricDisplayTextForTag_value_026be410,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8,&::cf__);
    if ((IVar4 & 1) != 0) {
      _objc_storeStrong(&local_70,&::cf_0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextFieldDefaultText__0269fd98,local_70)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_hasMetricAlertCancel_026be450);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_hasMetricAlertConfirm_026be458);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}


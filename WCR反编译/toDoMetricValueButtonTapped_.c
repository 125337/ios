// toDoMetricValueButtonTapped: @ 01ebfd40

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListSettingsViewController::toDoMetricValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  undefined8 uVar6;
  char *local_68;
  uint local_5c;
  char *local_58;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar5 = local_18;
  local_30 = lVar2 + -91000;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar5,&DAT_028e4858,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_aSGrpe<P;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &cf_eQpeW_0;
  uVar6 = 0;
  local_48 = 0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  switch(local_30) {
  case 0x3e9:
    _objc_storeStrong(&local_38,&cf_aSGr_);
    _objc_storeStrong(&local_40,&::cf_0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardHeight_026a8948);
    local_48 = uVar6;
    break;
  case 0x3ea:
    _objc_storeStrong(&local_38,&cf_aSGr__);
    _objc_storeStrong(&local_40,&::cf_0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardWidth_026a8950);
    local_48 = uVar6;
    break;
  case 0x3eb:
    _objc_storeStrong(&local_38,&cf_W_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardCornerRadius_026c6ef8);
    local_48 = uVar6;
    break;
  case 0x3ec:
    _objc_storeStrong(&local_38,&cf_c__);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardStrokeWidth_026c6f00);
    local_48 = uVar6;
    break;
  case 0x3ed:
    _objc_storeStrong(&local_38,&cf_Q_uQ___>e);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardWebContentScale_026c6d70);
    local_48 = uVar6;
    break;
  case 0x3ee:
    _objc_storeStrong(&local_38,&cf_Q_uteSO__>e);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardWebOverallScale_026c6d78);
    local_48 = uVar6;
    break;
  case 0x3ef:
    _objc_storeStrong(&local_38,&cf_W_SO_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardLocalFontSize_026c6e00);
    local_48 = uVar6;
    break;
  case 0x3f0:
    _objc_storeStrong(&local_38,&cf_Q_L);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentItemSpacing_026c6e10);
    local_48 = uVar6;
    break;
  case 0x3f1:
    _objc_storeStrong(&local_38,&cf_Q_Q);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentInset_026c78b8);
    local_48 = uVar6;
    break;
  case 0x3f2:
    _objc_storeStrong(&local_38,&cf_cke);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardBulletTextSpacing_026c71d0);
    local_48 = uVar6;
    break;
  case 0x3f3:
    _objc_storeStrong(&local_38,&cf___S_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardBulletSize_026c6e08);
    local_48 = uVar6;
    break;
  case 0x3f4:
    _objc_storeStrong(&local_38,&cf_n_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardSideMargin_026a8968);
    local_48 = uVar6;
    break;
  case 0x3f5:
    _objc_storeStrong(&local_38,&cf_Ne);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardTopSpacing_026a8958);
    local_48 = uVar6;
    break;
  case 0x3f6:
    _objc_storeStrong(&local_38,&cf_Ne);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardBottomSpacing_026a8960);
    local_48 = uVar6;
    break;
  case 0x3f7:
    _objc_storeStrong(&local_38,&cf_hW_SO_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardTitleFontSize_026c6df0);
    local_48 = uVar6;
    break;
  case 0x3f8:
    _objc_storeStrong(&local_38,&cf_teSO__>e);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardScale_026a8970);
    local_48 = uVar6;
    break;
  case 0x3f9:
    _objc_storeStrong(&local_38,&cf_4ls_MOy);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardOffsetX_026a8978);
    local_48 = uVar6;
    break;
  case 0x3fa:
    _objc_storeStrong(&local_38,&cf_WvMOy);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardOffsetY_026c6e28);
    local_48 = uVar6;
    break;
  case 0x3fb:
    _objc_storeStrong(&local_38,&cf__SQ);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentHorizontalInset_026c6f28);
    local_48 = uVar6;
    break;
  case 0x3fc:
    _objc_storeStrong(&local_38,&cf_NNQ);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentVerticalInset_026c6de0);
    local_48 = uVar6;
    break;
  case 0x3fd:
    _objc_storeStrong(&local_38,&cf_Q___>e<P);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentScale_026c6ec8);
    local_48 = uVar6;
    break;
  case 0x3fe:
    _objc_storeStrong(&local_38,&cf_Q_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentOffsetX_026c6f38);
    local_48 = uVar6;
    break;
  case 0x3ff:
    _objc_storeStrong(&local_38,&cf_Q_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardContentOffsetY_026c6f40);
    local_48 = uVar6;
    break;
  case 0x400:
    _objc_storeStrong(&local_38,&cf_Q_u4ls_MOy);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardWebContentOffsetX_026c6d80);
    local_48 = uVar6;
    break;
  case 0x401:
    _objc_storeStrong(&local_38,&cf_Q_uWvMOy);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toDoCardWebContentOffsetY_026c6d88);
    local_48 = uVar6;
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar4 != (char *)0x0;
  local_58 = pcVar4;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,0xc);
    pcVar4 = local_68;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_18,PTR_s_toDoMetricDisplayTextForTag_valu_026c7888,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmToDoMetricValue__026c78c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68,0);
  }
  local_5c = (uint)!bVar1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}


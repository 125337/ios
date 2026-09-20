// showThemeActionsNamed: @ 01fc1d9c

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::showThemeActionsNamed_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActionThemeName__026ca0e8,local_28);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&::cf_Sb,local_18,
               PTR_s_openActionTheme_026ca0f0);
    puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar5 = local_28;
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__N_N,local_18,
                 PTR_s_selectActionTheme_026ca108);
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((uVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nll,local_18,
                   PTR_s_selectActionBubble_026ca100);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Smll_N,local_18,
                   PTR_s_clearActionBubble_026ca0f8);
      }
    }
    pcVar2 = local_40;
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isThemePinned__026ca058,local_28);
    pcVar1 = &cf_Smn_v;
    if ((IVar6 & 1) == 0) {
      pcVar1 = &cf_n_v;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_pinActionTheme_026ca110);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R_N,local_18,
               PTR_s_duplicateActionTheme_026ca118);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__e_N);
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf__TT,local_18,
                 PTR_s_renameActionTheme_026ca120);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_Rd_N,local_18,
                 PTR_s_deleteActionTheme_026ca128);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_40;
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


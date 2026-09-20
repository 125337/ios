// selectMomentsForwardExcludeLabels @ 01c124d0

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::selectMomentsForwardExcludeLabels(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d3;
  cfstringStruct *local_b0 [2];
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90 [2];
  undefined *local_80 [4];
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = &cf_NewContactTagViewPageSheetController;
  _NSClassFromString();
  pcVar2 = &cf_MMPageSheetConfig;
  local_38 = pcVar1;
  _NSClassFromString();
  pcVar1 = &cf_MMPageSheetAdapter;
  local_40 = pcVar2;
  _NSClassFromString();
  local_48 = pcVar1;
  if (((local_38 == (cfstringStruct *)0x0) || (local_40 == (cfstringStruct *)0x0)) ||
     (pcVar1 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    return;
  }
  pcVar1 = local_38;
  _objc_alloc_init();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elR_h__bu);
    local_54 = 1;
    goto LAB_01c12ee4;
  }
  FUN_01c12f08();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setValue_forKey__0269d300,pcVar1,&cf_arrSelectedTagName);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setValue_forKey__0269d300,&cf_bO__h__,&cf_pageSheetViewTitle);
  FUN_01c1340c();
  puVar3 = PTR_WCRefineMomentsForwardOfficialTagSheetDelegate_026cf468;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_80[0] = puVar3;
  _objc_setAssociatedObject(local_50,DAT_028c67b0,puVar3,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setValue_forKey__0269d300,local_80[0],&cf_tagViewPageSheetDelegate);
  pcVar1 = local_50;
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar2 = local_50;
  if (((ulong)pcVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_90[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_90[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_90,0);
  }
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar1 = local_40;
  local_98 = puVar3;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_a0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_navHidden)
  ;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar1 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_enableEdgeSlideToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar1 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_enableDragToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar1 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isAllowTapBgMaskToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar1 = local_48;
  _objc_alloc_init();
  local_b0[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setPageSheetAdapter__026c0c68,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setValue_forKey__0269d300,local_b0[0],&cf_pageSheetAdapter);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[0],PTR_s_setValue_forKey__0269d300,local_a0,&cf_pageSheetConfig);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[0],PTR_s_setValue_forKey__0269d300,local_98,&cf_hostViewController);
  pcVar1 = local_b0[0];
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d3 * DAT_02323f28,puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_contentHeight);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_setAssociatedObject(local_28,PTR_s_selectMomentsForwardExcludeLabel_026c0c70,local_80[0],1);
  pcVar1 = local_b0[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[0],PTR_s_respondsToSelector__026ca818,
             PTR_s_showFromViewController_animated__0269ffa0);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_b0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0[0],PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_showWithAnimated__0269e5a8,1);
      goto LAB_01c12e98;
    }
    _objc_setAssociatedObject(local_28,PTR_s_selectMomentsForwardExcludeLabel_026c0c70,0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yh__bu);
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0[0],PTR_s_showFromViewController_animated__0269ffa0,local_28,1);
LAB_01c12e98:
    local_54 = 0;
  }
  _objc_storeStrong(local_b0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(local_80,0);
  _objc_storeStrong(&local_60,0);
LAB_01c12ee4:
  _objc_storeStrong(&local_50,0);
  return;
}


// FUN_000af134 @ 000af134

void FUN_000af134(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  double in_d3;
  double local_230;
  undefined *local_148;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98 [3];
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_pickerMainOptionTitles_0269e3b0);
  _objc_retainAutoreleasedReturnValue();
  local_a1 = 0;
  local_b1 = 0;
  local_148 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_80 = puVar2;
  if (local_78 == 0) {
    local_48 = &cf_eR_O;
    local_40 = &cf__IN;
    local_38 = &cf___;
    local_30 = &cf_R_OUS;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_148;
  }
  else {
    local_60 = &cf_eR_O;
    local_58 = &cf__IN;
    local_50 = &cf_R_OUS;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98[0] = local_148;
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  puVar2 = PTR_WCRefineBottomBarOptionsViewController_026ce270;
  _objc_alloc_init();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setButtonIndex__0269e598,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setMainTabBarVC__0269e5a0,local_68);
  pcVar3 = "MMPageSheetConfig";
  _objc_getClass();
  local_c8 = pcVar3;
  _objc_alloc_init();
  local_d0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setValue_forKey__0269d300,&cf_b_cR_O,&cf_title)
  ;
  pcVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_navLeftStyle);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_enableEdgeSlideToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_enableDragToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_isAllowTapBgMaskToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = "MMPageSheetAdapter";
  _objc_getClass();
  local_d8 = pcVar3;
  _objc_alloc_init();
  local_e0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,local_d0,&cf_pageSheetConfig);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_setValue_forKey__0269d300,local_c0,&cf_hostViewController);
  puVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  puVar4 = local_98[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_count_0269cfe0);
  lVar1 = (long)(puVar2 + (long)puVar4) * 0x3c + 0x96;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_230 = in_d3 * 0.7;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_e0;
  if ((double)lVar1 < local_230) {
    local_230 = (double)lVar1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_contentHeight);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_setAssociatedObject(local_c0,&DAT_028c80bd,local_e0,1);
  _objc_setAssociatedObject(local_c0,&DAT_028c80be,local_80,1);
  _objc_setAssociatedObject(local_c0,&DAT_028c80bf,local_98[0],1);
  pcVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8);
  if (((ulong)pcVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_showWithAnimated__0269e5a8,1);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(local_98,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


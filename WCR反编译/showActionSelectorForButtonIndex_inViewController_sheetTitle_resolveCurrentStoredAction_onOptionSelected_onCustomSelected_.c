// showActionSelectorForButtonIndex:inViewController:sheetTitle:resolveCurrentStoredAction:onOptionSelected:onCustomSelected: @ 0187040c

/* Function Stack Size: 0x40 bytes */

void WCRefineBottomBarLongPressActionSelector::
     showActionSelectorForButtonIndex_inViewController_sheetTitle_resolveCurrentStoredAction_onOptionSelected_onCustomSelected_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7,ID param_8,undefined4 param_9,ID param_10,undefined4 param_11)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  double in_d3;
  cfstringStruct *local_118;
  char *local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  long_long local_78;
  SEL local_70;
  ID local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_80,param_4);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_5);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_6);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_7);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pickerMainOptionTitles_0269e3b0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = (undefined *)0x0;
  local_a8 = IVar1;
  if (local_78 == 0) {
    local_48 = &cf_eR_O;
    local_40 = &cf__IN;
    local_38 = &::cf___;
    local_30 = &cf_R_OUS;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b0;
    local_b0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    local_60 = &cf_eR_O;
    local_58 = &cf__IN;
    local_50 = &cf_R_OUS;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b0;
    local_b0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR_WCRefineBottomBarLongPressActionSelectorViewController_026cf0a8;
  _objc_alloc_init();
  local_b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setMainOptions__026b6c68,local_a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setOtherOptions__026b6c70,local_b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setButtonIndex__0269e598,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setOnOptionSelected__026b6c78,local_98);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setOnCustomSelected__026b6c80,local_a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setWcr_sheetTitle__026b6c88,local_88);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_setWcr_resolveCurrentStoredActio_026b6c90,local_90);
  pcVar4 = "MMPageSheetConfig";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c0 = pcVar4;
  if (local_88 != (cfstringStruct *)0x0) {
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar5 != (cfstringStruct *)0x0) {
      local_118 = local_88;
      goto LAB_01870728;
    }
  }
  local_118 = &cf_b_cR_O;
LAB_01870728:
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTitle__0269cef0,local_118);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setNavLeftStyle__026aa730,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setEnableDragToClose__026aa740,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
  pcVar4 = "MMPageSheetAdapter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c8 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setPageSheetConfig__026aa758,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHostViewController__026a58c8,local_b8);
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d3 * DAT_02323db8,local_c8,PTR_s_setContentHeight__026aa760);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setSheet__026aa770,local_c8);
  _objc_setAssociatedObject(local_b8,&DAT_028e42db,local_c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_showWithAnimated__0269e5a8,1);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


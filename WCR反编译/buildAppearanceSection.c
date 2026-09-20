// buildAppearanceSection @ 01e4c838

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingViewController::buildAppearanceSection(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  double dVar7;
  cfstringStruct *local_260;
  cfstringStruct *local_178;
  bool local_d9;
  cfstringStruct *local_d8;
  undefined *local_c8;
  undefined1 *local_c0;
  byte local_b2;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  double local_a0;
  undefined4 local_94;
  undefined *local_90;
  byte local_81;
  undefined1 *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homeTelegramGroupingLayoutSettin_026c6638);
  local_81 = (byte)puVar2;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0);
  pcVar1 = &cf_h__agc_WuUSr;
  if ((local_81 & 1) == 0) {
    pcVar1 = &cf_a0c_yhVTn0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setFooterTitle__0269e3c8,pcVar1);
  IVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_90;
  pcVar1 = &cf_bS;
  if ((local_81 & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_toggleLayoutExpanded_026c6640,local_70,&cf_YNMOn_,pcVar1,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar3 = local_70;
  puVar2 = local_90;
  if ((local_81 & 1) == 0) {
    local_94 = 1;
  }
  else {
    local_48 = &cf_e;
    local_40 = &cf___;
    local_38 = &cf__N_;
    local_30 = &cf___p;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingHapticStyle_026a82a0);
    FUN_01e4d670();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_addSegmentCellTo_title_items_ind_026c6650,puVar2,&cf_R_a,puVar4,puVar5,
               PTR_s_hapticStyleChanged__026c6648);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_70;
    puVar2 = local_90;
    local_68 = &cf_sQ;
    local_60 = &cf_V;
    local_58 = &cf__ag;
    local_50 = &cf_Wp;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingIndicatorSty_026c6658);
    FUN_01e4d6e0();
    dVar7 = 220.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_addSegmentCellTo_title_items_ind_026c6650,puVar2,&cf_c_yhV,puVar4,puVar5,
               PTR_s_indicatorStyleChanged__026c6660);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingIndicatorSty_026c6658);
    if (puVar5 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_homeTelegramGroupingCapsuleCorne_026c6668);
      local_b1 = false;
      local_a0 = dVar7;
      if (dVar7 <= 0.0) {
        local_178 = &::cf__;
      }
      else {
        local_178 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_178;
      }
      local_b1 = dVar7 > 0.0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_178;
      if ((local_b1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      puVar2 = local_90;
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_editCapsuleCornerRadius_026c6670,local_70,&cf_VW,local_a8,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_a8,0);
    }
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingSwipeMode_026a8208);
    puVar2 = local_90;
    local_b2 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
               PTR_s_swipeModeChanged__026c6678,local_70,&cf_hQO_nRRbc,local_b2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleSwipeReverse__026c6680;
    if ((local_b2 & 1) != 0) {
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_homeTelegramGroupingSwipeReverse_026a8358);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_STLv,puVar5
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar3 = local_70;
      puVar6 = local_90;
      puVar4 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleSwipeWrap__026c6688;
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_homeTelegramGroupingSwipeWrapEna_026a8360);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf__snR,puVar5
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleCenter__026c6690;
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingCenterEnable_026c6698);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_R_h__E__N,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingCenterEnable_026c6698);
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingCenterCount_026c66a0)
      ;
      local_c8 = (undefined *)0x0;
      local_c0 = puVar5;
      if ((long)puVar5 < 1) {
        puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((long)puVar6 < 1) {
          local_260 = &::cf__;
        }
        else {
          local_260 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = local_260;
        }
        local_d9 = (long)puVar6 >= 1;
        _objc_storeStrong(&local_c8,local_260);
        if (local_d9) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_c8;
        local_c8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_90;
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_editCenterCount_026c66a8,local_70,&cf_u>f_yh__pe,local_c8,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_c8,0);
    }
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleShowBadge__026c66b0;
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingShowUnreadBa_026c66b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_>f_y_gh,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleShowRedDot__026c66c0;
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingShowRedDot_026c66c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_>f_yR__p,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingShowRedDot_026c66c8);
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleFoldedNoRedDot__026c66d0;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_homeTelegramGroupingFoldedNoRedD_026b0318);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleFilterPinned__026c66d8;
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingFilterPinned_026a30d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_nn_vJ_Y,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_70;
    puVar6 = local_90;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleHideBound__026c66e0;
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_homeTelegramGroupingHideBoundFro_026a2ca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar3,&cf_nYT_N,puVar5)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_94 = 0;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


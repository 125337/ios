// reloadLightweight @ 01bf9820

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsTailPickerViewController::reloadLightweight(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  dispatch_time_t dVar11;
  int local_e4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ID local_60;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined1 local_39;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_postSessionMode_026c0b80);
  if ((IVar4 & 1) == 0) {
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHeaderTitle__0269e3c0,&cf___);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFooterTitle__0269e3c8,&::cf___);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    puVar2 = local_38;
    puVar8 = PTR_WCRefineHelper_026ce000;
    puVar5 = PTR_s_onToggleEnabled__026c0bb0;
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar5,IVar4,&cf_gSW_>__,
               puVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_38,0);
  }
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_postSessionMode_026c0b80);
  local_49 = 0;
  if ((IVar4 & 1) == 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = (int)puVar5;
  }
  else {
    local_e4 = 1;
  }
  bVar3 = local_e4 != 0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  local_39 = bVar3;
  if (bVar3) {
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_postSessionMode_026c0b80);
    pcVar1 = &cf__gaggSW;
    if ((IVar4 & 1) == 0) {
      pcVar1 = &cf_>__;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHeaderTitle__0269e3c0,pcVar1);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_postSessionMode_026c0b80);
    pcVar1 = &cf_b0e_>__0R_gagN__>__Nq_Tn_vy;
    if ((IVar4 & 1) == 0) {
      pcVar1 = &cf_S_eSQ9e_IN__N_lQ;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFooterTitle__0269e3c8,pcVar1);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displaySelectedTitle_026c0bb8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if (0x10 < IVar4) {
      IVar9 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,0x10);
      _objc_retainAutoreleasedReturnValue();
      IVar10 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_60;
      local_60 = IVar10;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar9);
    }
    puVar5 = local_58;
    puVar8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,0,
               local_28,&cf_S_MRb,local_60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    puVar5 = local_58;
    puVar8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_onCustomInput_026c0bc0,local_28,&cf__INeQ,&::cf___,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar10 = IVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar10);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_initWeak(auStack_68,local_28);
    dVar11 = _dispatch_time(0,50000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01bfa0d0;
    local_78 = &DAT_0257be28;
    _objc_copyWeak(auStack_70,auStack_68);
    _dispatch_after(dVar11,puVar5,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setListBuilt__026c0b90,0);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  return;
}


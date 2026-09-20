// addSceneSection:toggleSel:expandSel:openSel: @ 01c31630

/* Function Stack Size: 0x30 bytes */

void WCRefineNameplateBeautifyViewController::addSceneSection_toggleSel_expandSel_openSel_
               (ID param_1,SEL param_2,long_long param_3,SEL param_4,SEL param_5,SEL param_6)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  SEL SVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  ID local_b0;
  ID local_a8;
  undefined *local_a0;
  ID local_98;
  undefined *local_90;
  byte local_85;
  undefined4 local_84;
  undefined *local_80;
  SEL local_78;
  SEL local_70;
  SEL local_68;
  long_long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_78 = param_6;
  local_70 = param_5;
  local_68 = param_4;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_50;
  local_80 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sceneTitle__026c18e0,local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHeaderTitle__0269e3c0);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_50;
  SVar3 = local_68;
  puVar2 = local_80;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sceneTitle__026c18e0,local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__T_u_);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_enabledForScene__026c18e8,local_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_switchCellWithSel_target_title_s_026aa260,SVar3,IVar5,puVar4,IVar7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_enabledForScene__026c18e8,local_60);
  if ((IVar5 & 1) == 0) {
    local_84 = 1;
  }
  else {
    if (local_60 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFooterTitle__0269e3c8,&::cf___);
      IVar5 = local_50;
      puVar2 = local_80;
      puVar8 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR_s_toggleHomeGrouping__026c18f0;
      puVar9 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar5,&cf_R_Lr,
                 puVar10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar9);
    }
    IVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sceneExpanded__026c18f8,local_60);
    puVar4 = local_80;
    local_85 = (byte)IVar5;
    pcVar1 = &cf_bS;
    if ((IVar5 & 1) == 0) {
      pcVar1 = &cf_U_;
    }
    puVar8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,local_70,
               local_50,&cf_Lrn_,pcVar1,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    if ((local_85 & 1) == 0) {
      local_84 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
      _objc_alloc();
      local_38 = &cf_VGr;
      local_30 = &::cf__;
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithItems__0269e9d8);
      local_90 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      IVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_typeForScene__026c1900,local_60);
      local_98 = IVar5;
      if ((IVar5 == 1) &&
         (puVar4 = PTR_WCRefineNameplateHelper_026ce5f8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_selfBuildTypeAllowed_026ae7f0),
         ((ulong)puVar4 & 1) == 0)) {
        local_98 = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_setSelectedSegmentIndex__0269e9e0,local_98 == 1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_setTag__026caa80,&UNK_00002328 + local_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_typeChanged__026c1908,0x1000);
      puVar4 = local_80;
      pcVar11 = "WCTableViewCellManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
      _objc_alloc();
      local_48 = &cf_5fyMR;
      local_40 = &cf_5fyT;
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithItems__0269e9d8);
      local_a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      IVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_placementForScene__026c1910,local_60);
      local_a8 = IVar5;
      if (IVar5 != 0) {
        local_a8 = 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setSelectedSegmentIndex__0269e9e0,local_a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setTag__026caa80,&UNK_0000238c + local_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
                 PTR_s_placementChanged__026b7c50,0x1000);
      puVar4 = local_80;
      pcVar11 = "WCTableViewCellManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      IVar5 = local_50;
      if (local_98 == 0) {
        IVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dayPathForScene__026c1918,local_60);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_nightPathForScene__026c1920,local_60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_displayNameForPath_night__026c1928,IVar6);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        puVar4 = local_80;
        pcVar11 = "WCTableViewNormalCellManager";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        _objc_storeStrong(&local_b0,0);
      }
      puVar4 = local_80;
      pcVar11 = "WCTableViewCellManager";
      _objc_getClass();
      IVar5 = local_50;
      IVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar11,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar5,&cf_4ls_MOy);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      puVar4 = local_80;
      pcVar11 = "WCTableViewCellManager";
      _objc_getClass();
      IVar5 = local_50;
      IVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,2)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar11,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar5,&cf_WvMOy);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      puVar4 = local_80;
      pcVar11 = "WCTableViewCellManager";
      _objc_getClass();
      IVar5 = local_50;
      IVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,3)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar11,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar5,&cf___>e_Y_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_90,0);
      local_84 = 0;
    }
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


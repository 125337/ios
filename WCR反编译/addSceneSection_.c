// addSceneSection: @ 01c48d1c

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::addSceneSection_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  ID local_68;
  long_long local_60;
  SEL local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sceneKey__026c1be0,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sceneTitle__026c18e0,local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHeaderTitle__0269e3c0);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  _WCRNameplateUsernameIsGrouping();
  bVar1 = local_60 != 0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) == 0 || bVar1) {
    if (local_60 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setFooterTitle__0269e3c8,&cf_N__Lr_T_Y_S_O_uN);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFooterTitle__0269e3c8,&cf_sQT);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setFooterTitle__0269e3c8,&cf_S_O_uNuR_eQSNq_T_QO0);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Enabled);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_71 = (byte)pcVar5;
  puVar2 = PTR__OBJC_CLASS___UISwitch_026cea90;
  _objc_alloc_init();
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setOn__0269dc80,local_71 & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setTag__026caa80,"@rpath/libswift_Concurrency.dylib" + local_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
             PTR_s_sceneEnabledChanged__026c1c08,0x1000);
  puVar2 = local_70;
  pcVar7 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  if ((local_71 & 1) == 0) {
    local_84 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_38 = &cf_VGr;
    local_30 = &::cf__;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_90 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Type);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar8 = (long)(int)(uint)(pcVar5 == (cfstringStruct *)0x1);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_98 = lVar8;
    if ((lVar8 == 1) &&
       (puVar2 = PTR_WCRefineNameplateHelper_026ce5f8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_selfBuildTypeAllowed_026ae7f0),
       ((ulong)puVar2 & 1) == 0)) {
      local_98 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSelectedSegmentIndex__0269e9e0,local_98)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setTag__026caa80,
               "/usr/lib/swift/libswiftFoundation.dylib" + local_60 + 0x24);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_sceneTypeChanged__026c1c10,0x1000);
    puVar2 = local_70;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_48 = &cf_MR;
    local_40 = &::cf_T;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_a0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Placement)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_a8 = pcVar5;
    if (pcVar5 != (cfstringStruct *)0x0) {
      local_a8 = (cfstringStruct *)0x1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSelectedSegmentIndex__0269e9e0,local_a8)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_setTag__026caa80,"/usr/lib/swift/libswiftUIKit.dylib" + local_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_scenePlaceChanged__026c1c18,0x1000);
    puVar2 = local_70;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    puVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_selectedSegmentIndex_0269e998);
    if (puVar2 == (undefined *)0x0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Path);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1c0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1c0;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf___NightPath);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1e8 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_1e8;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if ((pcVar3 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
         pcVar3 == (cfstringStruct *)0x0)) {
        pcVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        bVar1 = true;
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          bVar1 = pcVar3 != (cfstringStruct *)0x0;
        }
        local_1f8 = &::cf_R;
        if (!bVar1) {
          local_1f8 = &cf__gb;
        }
      }
      else {
        local_1f8 = &cf__n_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_70;
      local_c0 = local_1f8;
      pcVar7 = "WCTableViewNormalCellManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
    }
    puVar2 = local_70;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    pcVar3 = local_50;
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,pcVar3,&cf_4ls_MOy);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar2 = local_70;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    pcVar3 = local_50;
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,pcVar3,&cf_WvMOy);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar2 = local_70;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    pcVar3 = local_50;
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sliderForScene_kind__026c1930,local_60,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,pcVar3,&cf___>e_Y_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


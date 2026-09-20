// reloadPageData @ 01782a5c

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::reloadPageData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_660;
  ulong local_640;
  ulong local_638;
  ulong local_440;
  ulong local_438;
  ulong local_3d8;
  ulong local_3d0;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  code *local_390;
  undefined *local_388;
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  double local_370;
  undefined8 uStack_368;
  double local_358;
  double local_338;
  undefined8 uStack_330;
  ID local_328;
  ID local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  undefined1 local_2c9;
  undefined *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined4 local_274;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  byte local_222;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  undefined *local_1f8 [2];
  long local_1e8;
  SEL local_1e0;
  ID local_1d8;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = param_2;
  local_1d8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPageDataDirty__026b45c0,0);
  DAT_028e4000 = DAT_028e4000 + 1;
  local_1e8 = DAT_028e4000;
  _CFAbsoluteTimeGetCurrent();
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_1f8[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupingEnabled_026b45c8);
  local_201 = 0;
  local_211 = 0;
  local_221 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_50 = &cf_id;
    local_40 = &cf_all;
    local_48 = &cf_title;
    local_38 = &cf_hQ;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_50,2);
    _objc_retainAutoreleasedReturnValue();
    local_211 = 1;
    local_3a8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_210 = puVar1;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_221 = 1;
    local_220 = local_3a8;
  }
  else {
    local_3a8 = local_1f8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_groupDefinitions_026b4430);
    _objc_retainAutoreleasedReturnValue();
    local_201 = 1;
    local_200 = local_3a8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setGroups__026abf30,local_3a8);
  if ((local_221 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_220);
  }
  if ((local_211 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  if ((local_201 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  local_222 = 0;
  _memset(auStack_270,0,0x40);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  local_3d0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_3d0 != 0) {
    lVar7 = *local_260;
    local_3d8 = 0;
    do {
      do {
        if (*local_260 - lVar7 != 0) {
          _objc_enumerationMutation(*local_260 - lVar7,IVar2);
        }
        uVar8 = *(ulong *)(local_268 + local_3d8 * 8);
        local_230 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_selectedGroupIdentifier_026b4548);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        if ((uVar4 & 1) != 0) {
          local_222 = 1;
          local_274 = 4;
          goto LAB_01782eb0;
        }
        local_3d8 = local_3d8 + 1;
      } while (local_3d8 < local_3d0);
      local_3d0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_d0,0x10);
      local_3d8 = 0;
    } while (local_3d0 != 0);
  }
  local_274 = 0;
LAB_01782eb0:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (((local_222 & 1) == 0) &&
     (puVar1 = local_1f8[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_groupingEnabled_026b45c8),
     ((ulong)puVar1 & 1) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setSelectedGroupIdentifier__026b45d0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_2c0,0,0x40);
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    local_438 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_438 != 0) {
      lVar7 = *local_2b0;
      local_440 = 0;
      do {
        do {
          if (*local_2b0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2b0 - lVar7,IVar2);
          }
          uVar8 = *(ulong *)(local_2b8 + local_440 * 8);
          local_280 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_selectedGroupIdentifier_026b4548);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar4 & 1) != 0) {
            local_222 = 1;
            local_274 = 6;
            goto LAB_01783170;
          }
          local_440 = local_440 + 1;
        } while (local_440 < local_438);
        local_438 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_150,
                   0x10);
        local_440 = 0;
      } while (local_438 != 0);
    }
    local_274 = 0;
LAB_01783170:
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if ((local_222 & 1) == 0) {
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setSelectedGroupIdentifier__026b45d0);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_persistSelectedGroupIdentifier_026b45d8);
  }
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_cyclicPagingEnabled_026b45e0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if ((IVar2 & 1) == 0) {
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setDisplayGroups__026b45e8);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithObject__0269d538);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = local_2c8;
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = local_2c8;
    IVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setDisplayGroups__026b45e8,local_2c8);
    _objc_storeStrong(&local_2c8,0);
  }
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_headerView_026a0fa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setPageManagers__026b45f0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setActionTargets__026b45f8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_buildHeaderView_026b4600);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setHeaderView__026b4608);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_headerView_026a0fa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_1f8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_1f8[0],PTR_s_groupingEnabled_026b45c8);
  local_2c9 = SUB81(puVar1,0);
  puVar1 = PTR_WCRefinePluginPagingScrollView_026cefa0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginPagingScrollView_026cefa0,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setPageScrollView__026b4610);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar9 = *(undefined8 *)PTR__UIScrollViewDecelerationRateFast_025781f8;
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar9);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_318,0,0x40);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_displayGroups_026b4540);
  _objc_retainAutoreleasedReturnValue();
  local_638 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_638 != 0) {
    lVar7 = *local_308;
    local_640 = 0;
    do {
      do {
        if (*local_308 - lVar7 != 0) {
          _objc_enumerationMutation(*local_308 - lVar7,IVar2);
        }
        local_2d8 = *(undefined8 *)(local_310 + local_640 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8,PTR_s_buildPluginPageForGroup__026b4628,local_2d8);
        local_640 = local_640 + 1;
      } while (local_640 < local_638);
      local_638 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_1d0,0x10)
      ;
      local_640 = 0;
    } while (local_638 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_layoutPageFrames_026b45b0);
  IVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_indexOfSelectedGroup_026b4630);
  IVar3 = local_1d8;
  local_320 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_cyclicPagingEnabled_026b45e0);
  if ((IVar3 & 1) == 0) {
    local_660 = local_320;
  }
  else {
    local_660 = local_320 + 1;
  }
  local_328 = local_660;
  dVar10 = (double)NEON_ucvtf(local_660);
  IVar2 = local_1d8;
  dVar11 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_358 = dVar11;
  _CGRectGetWidth(dVar11,in_d1,in_d2,in_d3);
  dVar10 = dVar10 * dVar11;
  uVar9 = 0;
  FUN_01783fc4();
  IVar3 = local_1d8;
  local_338 = dVar10;
  uStack_330 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_pageScrollView_026b4530);
  _objc_retainAutoreleasedReturnValue();
  uStack_368 = uStack_330;
  local_370 = local_338;
  (*(code *)PTR__objc_msgSend_02578628)(local_338,uStack_330);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_initWeak(auStack_378,local_1d8);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_3a0 = PTR___NSConcreteStackBlock_02578660;
  local_398 = 0xc2000000;
  local_394 = 0;
  local_390 = FUN_01783ff0;
  local_388 = &DAT_0257be28;
  _objc_copyWeak(auStack_380,auStack_378);
  _dispatch_async(puVar1,&local_3a0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_380);
  _objc_destroyWeak(auStack_378);
  _objc_storeStrong(local_1f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


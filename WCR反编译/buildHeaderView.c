// buildHeaderView @ 01785aec

/* Function Stack Size: 0x10 bytes */

ID WCPluginsViewControllerBehavior::buildHeaderView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  int iVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double in_d2;
  double dVar15;
  cfstringStruct *local_3b8;
  ulong local_388;
  ulong local_380;
  undefined *local_360;
  cfstringStruct *local_330;
  cfstringStruct *local_318;
  cfstringStruct *local_2f8;
  double local_2b0;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  cfstringStruct *local_218;
  ID local_210;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  bool local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  bool local_181;
  cfstringStruct *local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  undefined *local_128;
  double local_120;
  byte local_111;
  double local_110;
  byte local_e9;
  undefined *local_e8;
  double local_e0;
  double local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar10 = DAT_02323f18;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar13 = DAT_02323f18;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e0 = dVar13;
  _CGRectGetWidth();
  local_e9 = 0;
  local_2b0 = dVar13;
  if (dVar13 == 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_2b0 = in_d2;
    local_110 = dVar13;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_c0 = local_2b0;
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_111 = (byte)puVar2;
  local_120 = 10.0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  iVar6 = 0x102;
  if ((local_111 & 1) == 0) {
    iVar6 = 0xcd;
  }
  dVar15 = (double)iVar6 + local_120;
  uVar12 = 0;
  uVar9 = 0;
  dVar13 = local_c0;
  FUN_0177f868();
  local_148 = uVar9;
  local_140 = uVar12;
  local_138 = dVar13;
  local_130 = dVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar12,dVar13,dVar15,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_128 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setClipsToBounds__026ca8c8,0);
  pcVar8 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,local_b0,PTR_s_installHeaderAvatarInView_width__026b4678,local_128);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  dVar13 = local_120 + 108.0;
  dVar15 = local_c0 - 40.0;
  uVar9 = 0x4034000000000000;
  uVar12 = 0x4040000000000000;
  FUN_0177f868();
  local_178 = uVar9;
  local_170 = dVar13;
  local_168 = dVar15;
  local_160 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,dVar13,dVar15,uVar12,puVar1,PTR_s_initWithFrame__026ca6e8);
  pcVar8 = local_150;
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopTitleReplacement_026a6598);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_181 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_2f8 = &cf__O__NecN;
  }
  else {
    local_2f8 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopTitleReplacement_026a6598);
    _objc_retainAutoreleasedReturnValue();
    local_180 = local_2f8;
  }
  local_181 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setText__026caa88,local_2f8);
  if ((local_181 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextAlignment__026caa90,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4035000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_158);
  pcVar8 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopDescriptionLine1Replace_026a65a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_199 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_318 = &::cf___;
  }
  else {
    local_318 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopDescriptionLine1Replace_026a65a8)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_198 = local_318;
  }
  local_199 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_318;
  if ((local_199 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_198);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  pcVar8 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopDescriptionLine2Replace_026a65b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1b1 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_330 = &cf__N_O_ucN_v;
  }
  else {
    local_330 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginTopDescriptionLine2Replace_026a65b0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = local_330;
  }
  local_1b1 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = local_330;
  if ((local_1b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  dVar13 = local_120 + 148.0;
  dVar15 = local_c0 - 44.0;
  uVar9 = 0x4036000000000000;
  uVar12 = 0x4048000000000000;
  FUN_0177f868();
  local_1e0 = uVar9;
  local_1d8 = dVar13;
  local_1d0 = dVar15;
  local_1c8 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,dVar13,dVar15,uVar12,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_1c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setNumberOfLines__026ca9d8,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setTextAlignment__026caa90,1);
  dVar13 = 13.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1e9 = 0;
  local_1f9 = 0;
  local_360 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (IVar5 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    local_1e9 = 1;
    dVar10 = dVar13;
    local_1e8 = local_360;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar10,dVar10,DAT_02332e48,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_1f9 = 1;
    local_1f8 = local_360;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setTextColor__026caa98,local_360);
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
  }
  if ((local_1e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_1c0);
  if ((local_111 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupControl__026b4698,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    local_208 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_indexOfSelectedGroup_026b4630);
    local_210 = IVar4;
    _memset(auStack_258,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    local_380 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_380 != 0) {
      lVar7 = *local_248;
      local_388 = 0;
      do {
        do {
          if (*local_248 - lVar7 != 0) {
            _objc_enumerationMutation(*local_248 - lVar7,IVar4);
          }
          puVar1 = local_208;
          pcVar8 = *(cfstringStruct **)(local_250 + local_388 * 8);
          local_218 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_3b8 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_3b8 = &cf__g_TT;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_3b8);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          local_388 = local_388 + 1;
        } while (local_388 < local_380);
        local_380 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10
                  );
        local_388 = 0;
      } while (local_380 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginHubGroupSwitchSpacing_026b4680);
    dVar13 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pluginHubGroupSwitchCornerRadius_026b4688)
    ;
    dVar15 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginGroupPillControl_026cefa8,
               PTR_s_preferredWidthForTitles_spacing__026b4690,local_208);
    puVar1 = PTR_WCRefinePluginGroupPillControl_026cefa8;
    _objc_alloc();
    dVar11 = (local_c0 - dVar15) * 0.5;
    dVar14 = local_120 + 214.0;
    uVar9 = 0x4043000000000000;
    FUN_0177f868();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar11,dVar14,dVar15,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupControl__026b4698);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar10);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = local_128;
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupControl_026b4528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_208,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyNavigationTitle_026b4580);
  puVar1 = local_128;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}


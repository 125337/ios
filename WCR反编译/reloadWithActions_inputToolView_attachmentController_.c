// reloadWithActions:inputToolView:attachmentController: @ 00136b70

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRChatToolbarView::reloadWithActions_inputToolView_attachmentController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  double in_d0;
  double dVar25;
  double dVar26;
  double local_cf0;
  double local_ce0;
  undefined *local_c98;
  undefined *local_c90;
  undefined *local_c30;
  undefined *local_c28;
  double local_8e8;
  double local_8c0;
  double local_8b8;
  double local_880;
  ulong local_748;
  ulong local_740;
  long local_6f8;
  long local_6a8;
  double local_688;
  undefined1 auStack_648 [8];
  long local_640;
  long *local_638;
  undefined8 local_608;
  double local_600;
  double dStack_5f8;
  double local_5e0;
  double dStack_5d8;
  double local_5b8;
  double dStack_5b0;
  undefined1 auStack_598 [8];
  long local_590;
  long *local_588;
  undefined8 local_558;
  double local_4f0;
  double local_4e0;
  double local_4d8;
  double local_4b8;
  undefined *local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  code *local_4a0;
  undefined *local_498;
  ID local_490;
  undefined *local_488;
  ID local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined *local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double *local_440;
  double local_438;
  double local_430;
  double local_428;
  byte local_420;
  byte local_41f;
  byte local_41e;
  double local_418;
  double local_410;
  double local_408;
  undefined *local_400;
  undefined *local_3f8;
  byte local_3e9;
  ID local_3e8;
  byte local_3d9;
  ID local_3d8;
  undefined4 local_3cc;
  undefined *local_3c8;
  double local_3c0;
  double local_3b8;
  undefined *local_3a0;
  undefined *local_398;
  ID local_390;
  ID local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined *local_2d0;
  byte local_2c5;
  byte local_2c4;
  byte local_2c3;
  byte local_2c2;
  byte local_2c1;
  undefined *local_2c0;
  long local_2b8;
  long local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  long local_268;
  undefined *local_260 [3];
  undefined8 local_248;
  undefined8 local_240;
  long local_238;
  SEL local_230;
  ID local_228;
  undefined1 auStack_220 [128];
  undefined1 auStack_1a0 [128];
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_238 = 0;
  local_230 = param_2;
  local_228 = param_1;
  _objc_storeStrong(&local_238,param_3);
  local_240 = 0;
  _objc_storeStrong(&local_240,param_4);
  local_248 = 0;
  _objc_storeStrong(&local_248,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setInputToolView__0269f1b0,local_240);
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setAttachmentController__0269f1b8,local_248)
  ;
  if (local_238 == 0) {
    local_6f8 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_6f8 = local_238;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setActions__0269f1c0,local_6f8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  IVar5 = local_228;
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_actions_0269f150);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_arrayWithCapacity__0269d9b8,IVar6);
  _objc_retainAutoreleasedReturnValue();
  local_260[0] = puVar7;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _memset(auStack_2a8,0,0x40);
  IVar5 = local_228;
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_actions_0269f150);
  _objc_retainAutoreleasedReturnValue();
  local_740 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_740 != 0) {
    lVar23 = *local_298;
    local_748 = 0;
    do {
      do {
        if (*local_298 - lVar23 != 0) {
          _objc_enumerationMutation(*local_298 - lVar23,IVar5);
        }
        lVar24 = *(long *)(local_2a0 + local_748 * 8);
        IVar6 = local_228;
        local_268 = lVar24;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_inputToolView_0269d0e8);
        _objc_retainAutoreleasedReturnValue();
        _WCRChatToolbarResolvedTitle();
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = lVar24;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        lVar24 = local_268;
        IVar6 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_inputToolView_0269d0e8);
        _objc_retainAutoreleasedReturnValue();
        _WCRChatToolbarResolvedIcon();
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = lVar24;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        puVar8 = local_260[0];
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        lVar24 = local_268;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_268,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf_________);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(lVar24);
        _objc_storeStrong(&local_2b8);
        _objc_storeStrong(&local_2b0,0);
        local_748 = local_748 + 1;
      } while (local_748 < local_740);
      local_740 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,0x10);
      local_748 = 0;
    } while (local_740 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar7 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_chatToolbarCentered_0269f1c8);
  local_2c1 = (byte)puVar7;
  puVar7 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarPageScrolling_0269f1d0);
  local_2c2 = (byte)puVar7;
  puVar7 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarShowIcon_0269f190);
  local_2c3 = (byte)puVar7;
  puVar7 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarHiddenTitle_0269f1d8);
  local_2c4 = ((byte)puVar7 ^ 1) & 1;
  if (((local_2c3 & 1) == 0) && (local_2c4 == 0)) {
    local_2c4 = 1;
  }
  puVar7 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarClearBackground_0269f188);
  local_2c5 = (byte)puVar7;
  puVar7 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarCenterFirstPageCount_0269f1e0);
  local_2d0 = puVar7;
  FUN_00135d00();
  puVar7 = local_2c0;
  local_2d8 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarCenterSpacing_0269f1e8);
  dVar25 = (double)(long)((double)(long)puVar7 * local_2d8);
  local_2e0 = dVar25;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarCenterHorizontalOffse_0269f1f0);
  FUN_00135dc0(&cf_chatToolbarCenterHorizontalOffset);
  dVar25 = (double)(long)(dVar25 * local_2d8 * 10.0) / 10.0;
  local_2e8 = dVar25;
  FUN_00134e1c();
  local_300 = dVar25;
  local_2f0 = dVar25;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarItemHeight_0269f198);
  FUN_00135dc0(&cf_chatToolbarItemHeight);
  local_308 = (double)(long)(dVar25 * local_2d8 * 10.0) / 10.0;
  local_880 = local_308;
  if (local_300 < local_308) {
    local_880 = local_300;
  }
  local_310 = local_880;
  local_2f8 = local_880;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarItemSpacing_0269f1f8);
  FUN_00135dc0(&cf_chatToolbarItemSpacing);
  dVar25 = (double)(long)(local_880 * local_2d8 * 10.0) / 10.0;
  local_318 = dVar25;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarIconTitleSpacing_0269f200);
  FUN_00135dc0(&cf_chatToolbarIconTitleSpacing);
  dVar25 = (double)(long)(dVar25 * local_2d8 * 10.0) / 10.0;
  local_320 = dVar25;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarIconSize_0269f1a0);
  FUN_00135dc0(&cf_chatToolbarIconSize);
  local_330 = (double)(long)(dVar25 * local_2d8 * 10.0) / 10.0;
  local_340 = 0x4028000000000000;
  local_348 = local_2f8 - 4.0;
  local_8b8 = local_348;
  if (local_348 <= 12.0) {
    local_8b8 = 12.0;
  }
  local_350 = local_8b8;
  local_338 = local_8b8;
  local_8c0 = local_330;
  if (local_8b8 <= local_330) {
    local_8c0 = local_8b8;
  }
  local_358 = local_8c0;
  local_328 = local_8c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarFontSize_0269f208);
  FUN_00135dc0(&cf_chatToolbarFontSize);
  local_8c0 = local_8c0 * local_2d8;
  local_360 = local_8c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_chatToolbarCornerRadius_0269f210);
  FUN_00135dc0(&cf_chatToolbarCornerRadius);
  local_370 = local_8c0 * local_2d8;
  local_3b8 = local_2f8 * 0.5;
  local_8e8 = local_3b8;
  if (local_370 < local_3b8) {
    local_8e8 = local_370;
  }
  local_380 = local_8e8;
  local_368 = local_8e8;
  IVar5 = local_228;
  local_378 = local_3b8;
  FUN_00135a60();
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_228;
  local_388 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_390 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_2c1 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_120 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_2c2 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_118 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_2c3 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_110 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_2c4 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_108 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_2c5 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_100 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_2d0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f8 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2e0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f0 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2e8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_e8 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2f0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_e0 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2f8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_318,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_320,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_328,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c0 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_360,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_026ce038;
  dVar25 = local_368;
  local_b8 = puVar20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = puVar21;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_120,
             0xf);
  _objc_retainAutoreleasedReturnValue();
  local_398 = puVar22;
  (*(code *)PTR__objc_release_02578630)(puVar21);
  (*(code *)PTR__objc_release_02578630)(puVar20);
  (*(code *)PTR__objc_release_02578630)(puVar19);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(puVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
  local_3c0 = dVar25;
  _CGRectGetWidth(dVar25,local_3b8);
  puVar8 = local_260[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_260[0],PTR_s_componentsJoinedByString__0269d140,&cf__)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf______1f___);
  _objc_retainAutoreleasedReturnValue();
  local_3a0 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar5 = local_388;
  FUN_001367a8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf_____ld___);
  _objc_retainAutoreleasedReturnValue();
  local_3c8 = puVar7;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar7 = local_3c8;
  IVar5 = local_228;
  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_actionSignature_0269f218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar8 = local_3a0;
  if (((ulong)puVar7 & 1) == 0) {
    local_3d9 = 0;
    local_3e9 = 0;
    IVar5 = local_228;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_structureSignature_0269f1a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isEqualToString__0269ccc8);
    bVar1 = false;
    if (((ulong)puVar8 & 1) != 0) {
      IVar6 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      local_3d9 = 1;
      local_3d8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_3e9 = 1;
      local_3e8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar6 != 0;
    }
    if ((local_3e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3e8);
    }
    if ((local_3d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3d8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setActionSignature__0269f140,local_3c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_wcr_applyAppearanceColorsOnly_0269f178);
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setActionSignature__0269f140,local_3c8);
      local_3cc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,PTR_s_setStructureSignature__0269f180,local_3a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setActionSignature__0269f140,local_3c8);
      IVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      IVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_actions_0269f150);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_arrayWithCapacity__0269d9b8,IVar6);
      _objc_retainAutoreleasedReturnValue();
      local_3f8 = puVar7;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_360,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_418 = local_2d8 * 8.0;
      local_410 = local_2d8 * 7.0;
      IVar6 = local_228;
      local_408 = local_418;
      local_400 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_actions_0269f150);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_228;
      local_4b0 = PTR___NSConcreteGlobalBlock_02578658;
      local_4a8 = 0xd0800000;
      local_4a4 = 0;
      local_4a0 = FUN_0013933c;
      local_498 = &DAT_0257a468;
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = local_400;
      local_490 = IVar5;
      local_420 = local_2c4 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar5 = local_388;
      local_488 = puVar7;
      local_41f = local_2c3 & 1;
      local_460 = local_328;
      local_458 = local_320;
      local_450 = local_2f8;
      local_448 = local_410;
      local_440 = &local_418;
      local_438 = local_2f0;
      local_41e = local_2c5 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_248;
      local_480 = IVar5;
      local_430 = local_368;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_240;
      local_478 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = local_3f8;
      local_470 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_468 = puVar7;
      local_428 = local_318;
      dVar25 = local_318;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_4b0);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
      local_4d8 = dVar25;
      _CGRectGetWidth(dVar25,local_2d8);
      local_4e0 = local_418;
      local_4b8 = dVar25;
      if (((local_2c1 & 1) == 0) ||
         (puVar7 = local_3f8, (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_count_0269cfe0),
         puVar7 == (undefined *)0x0)) {
        dVar25 = ABS(local_2e8);
        if ((DAT_02323c68 <= dVar25) &&
           (puVar7 = local_3f8, dVar26 = DAT_02323c68,
           (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_count_0269cfe0),
           puVar7 != (undefined *)0x0)) {
          _memset(auStack_598,0,0x40);
          puVar7 = local_3f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_c28 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_598,auStack_1a0,
                     0x10);
          if (local_c28 != (undefined *)0x0) {
            lVar23 = *local_588;
            local_c30 = (undefined *)0x0;
            do {
              do {
                if (*local_588 - lVar23 != 0) {
                  _objc_enumerationMutation(*local_588 - lVar23,puVar7);
                }
                local_558 = *(undefined8 *)(local_590 + (long)local_c30 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_558,PTR_s_frame_026ca640);
                dVar25 = dVar25 + local_2e8;
                local_600 = dVar25;
                dStack_5f8 = dVar26;
                local_5e0 = dVar25;
                dStack_5d8 = dVar26;
                local_5b8 = dVar25;
                dStack_5b0 = dVar26;
                (*(code *)PTR__objc_msgSend_02578628)(local_558,PTR_s_setFrame__026ca960);
                local_c30 = local_c30 + 1;
              } while (local_c30 < local_c28);
              local_c28 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_598,
                         auStack_1a0,0x10);
              local_c30 = (undefined *)0x0;
            } while (local_c28 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
          local_4e0 = 0.0;
          _memset(auStack_648,0,0x40);
          puVar7 = local_3f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_c90 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_648,auStack_220,
                     0x10);
          if (local_c90 != (undefined *)0x0) {
            lVar23 = *local_638;
            local_c98 = (undefined *)0x0;
            do {
              do {
                dVar25 = dVar26;
                if (*local_638 - lVar23 != 0) {
                  _objc_enumerationMutation(*local_638 - lVar23,puVar7);
                  dVar25 = dVar26;
                }
                dVar2 = local_4e0;
                local_608 = *(undefined8 *)(local_640 + (long)local_c98 * 8);
                dVar26 = local_4e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_608,PTR_s_frame_026ca640);
                _CGRectGetMaxX(dVar26,dVar25);
                local_ce0 = dVar26;
                if (dVar26 <= dVar2) {
                  local_ce0 = dVar2;
                }
                local_4e0 = local_ce0;
                local_c98 = local_c98 + 1;
              } while (local_c98 < local_c90);
              local_c90 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_648,
                         auStack_220,0x10);
              local_c98 = (undefined *)0x0;
            } while (local_c90 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
      }
      else {
        IVar5 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        FUN_0013a22c(local_4b8,local_2e0,local_2e8);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        local_4e0 = local_4f0;
      }
      local_cf0 = local_4b8 + 1.0;
      if (local_cf0 < local_4e0 + local_408) {
        local_cf0 = local_4e0 + local_408;
      }
      local_688 = local_cf0;
      if (((local_2c2 & 1) != 0) && (1.0 < local_4b8)) {
        local_6a8 = (long)(local_cf0 / local_4b8);
        if (local_6a8 < 1) {
          local_6a8 = 1;
        }
        local_688 = (double)local_6a8 * local_4b8;
      }
      IVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      dVar25 = local_2f0;
      FUN_0013b3dc();
      IVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_688,dVar25);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      _objc_storeStrong(&local_468);
      _objc_storeStrong(&local_470,0);
      _objc_storeStrong(&local_478,0);
      _objc_storeStrong(&local_480,0);
      _objc_storeStrong(&local_488,0);
      _objc_storeStrong(&local_490,0);
      _objc_storeStrong(&local_400,0);
      _objc_storeStrong(&local_3f8,0);
      local_3cc = 0;
    }
  }
  else {
    local_3cc = 1;
  }
  _objc_storeStrong(&local_3c8);
  _objc_storeStrong(&local_3a0,0);
  _objc_storeStrong(&local_398,0);
  _objc_storeStrong(&local_388,0);
  _objc_storeStrong(&local_2c0,0);
  _objc_storeStrong(local_260,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_238,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


// filterMenuElements @ 01bd34b8

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsCacheViewController::filterMenuElements(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  void *pvVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
  undefined8 uVar11;
  ulong local_758;
  ulong local_750;
  void *local_618;
  void *local_610;
  ID local_4b8;
  ID local_498;
  undefined *local_478;
  undefined4 local_470;
  undefined4 local_46c;
  code *local_468;
  undefined *local_460;
  undefined1 auStack_458 [8];
  undefined *local_450;
  undefined *local_448;
  undefined *local_440;
  undefined4 local_438;
  undefined4 local_434;
  code *local_430;
  undefined *local_428;
  undefined8 local_420;
  undefined1 auStack_418 [8];
  undefined *local_410;
  undefined *local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  undefined8 local_3c0;
  undefined *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  code *local_3a8;
  undefined *local_3a0;
  undefined1 auStack_398 [8];
  undefined *local_390;
  undefined *local_388;
  undefined *local_380;
  undefined4 local_378;
  undefined4 local_374;
  code *local_370;
  undefined *local_368;
  ID local_360;
  ID local_358;
  ID local_350;
  undefined *local_348;
  undefined *local_340;
  undefined4 local_338;
  undefined4 local_334;
  code *local_330;
  undefined *local_328;
  undefined8 local_320;
  undefined1 auStack_318 [8];
  undefined *local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  undefined1 auStack_2a0 [8];
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  ID local_258;
  undefined *local_250;
  ID local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined1 auStack_208 [8];
  ID local_200;
  undefined *local_1f8;
  ID local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  ID local_1d8 [3];
  ID local_1c0;
  undefined1 auStack_1b8 [8];
  SEL local_1b0;
  ID local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
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
  local_1b0 = param_2;
  local_1a8 = param_1;
  _objc_initWeak(auStack_1b8,param_1);
  IVar2 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_userCounts_026c07e8);
  _objc_retainAutoreleasedReturnValue();
  local_498 = IVar2;
  if (IVar2 == 0) {
    local_498 = *(ID *)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = local_498;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_sampleItems_026c07f0);
  _objc_retainAutoreleasedReturnValue();
  local_4b8 = IVar2;
  if (IVar2 == 0) {
    local_4b8 = *(ID *)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8[0] = local_4b8;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_50 = &cf_hQ__W;
  local_48 = &cf_eW_;
  local_40 = &cf_VGr;
  local_38 = &::cf__;
  local_30 = &cf_vQN;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = puVar4;
  for (local_1f0 = 0; IVar2 = local_1f0, puVar5 = local_1e0,
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0),
      puVar4 = PTR__OBJC_CLASS___UIMenu_026ce388, puVar3 = PTR__OBJC_CLASS___UIAction_026ce028,
      (long)IVar2 < (long)puVar5; local_1f0 = local_1f0 + 1) {
    puVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1f0);
    _objc_retainAutoreleasedReturnValue();
    local_228 = PTR___NSConcreteStackBlock_02578660;
    local_220 = 0xc2000000;
    local_21c = 0;
    local_218 = FUN_01bd4c44;
    local_210 = &DAT_0258b760;
    _objc_copyWeak(auStack_208,auStack_1b8);
    local_200 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,puVar4,0,0,&local_228);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedKind_026c07f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_setState__026a00b0,IVar2 == local_1f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_1f8);
    _objc_storeStrong(&local_1f8,0);
    _objc_destroyWeak(auStack_208);
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_photo_on_rectangle);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,&cf_Q___W,puVar3,0,0,local_1e8);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_78 = &cf_NPpe;
  local_70 = &::cf_N;
  local_68 = &cf_2;
  local_60 = &cf_6;
  local_58 = &cf_1;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_238 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar4;
  for (local_248 = 0; IVar2 = local_248, puVar5 = local_238,
      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0),
      puVar4 = PTR__OBJC_CLASS___UIMenu_026ce388, puVar3 = PTR__OBJC_CLASS___UIAction_026ce028,
      (long)IVar2 < (long)puVar5; local_248 = local_248 + 1) {
    puVar4 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_objectAtIndexedSubscript__0269cc78,local_248);
    _objc_retainAutoreleasedReturnValue();
    local_280 = PTR___NSConcreteStackBlock_02578660;
    local_278 = 0xc2000000;
    local_274 = 0;
    local_270 = FUN_01bd4d38;
    local_268 = &DAT_0258b760;
    _objc_copyWeak(auStack_260,auStack_1b8);
    local_258 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,puVar4,0,0,&local_280);
    _objc_retainAutoreleasedReturnValue();
    local_250 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedCountIndex_026c0800);
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setState__026a00b0,IVar2 == local_248);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_250);
    _objc_storeStrong(&local_250,0);
    _objc_destroyWeak(auStack_260);
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_number);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,&cf__YS_X_pe,puVar3,0,0,
             local_240);
  _objc_retainAutoreleasedReturnValue();
  local_288 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
  local_2c0 = PTR___NSConcreteStackBlock_02578660;
  local_2b8 = 0xc2000000;
  local_2b4 = 0;
  local_2b0 = FUN_01bd4e2c;
  local_2a8 = &DAT_0258b790;
  local_290 = puVar4;
  _objc_copyWeak(auStack_2a0,auStack_1b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_NPh__,0,0,&local_2c0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_1a8;
  local_298 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedTagName_026c0808);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_setState__026a00b0,IVar6 == 0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_298);
  pvVar7 = _memset(auStack_308,0,0x40);
  FUN_01bd4f8c();
  _objc_retainAutoreleasedReturnValue();
  local_610 = pvVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_610 != (void *)0x0) {
    lVar10 = *local_2f8;
    local_618 = (void *)0x0;
    do {
      do {
        if (*local_2f8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_2f8 - lVar10,pvVar7);
        }
        puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
        uVar11 = *(undefined8 *)(local_300 + (long)local_618 * 8);
        local_340 = PTR___NSConcreteStackBlock_02578660;
        local_338 = 0xc2000000;
        local_334 = 0;
        local_330 = FUN_01bd5380;
        local_328 = &DAT_0258b7c0;
        local_2c8 = uVar11;
        _objc_copyWeak(auStack_318,auStack_1b8);
        uVar1 = local_2c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_320 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,uVar11,0,0,&local_340);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_1a8;
        local_310 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedTagName_026c0808);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_setState__026a00b0,(IVar6 & 1) != 0);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_310);
        _objc_storeStrong(&local_310);
        _objc_storeStrong(&local_320,0);
        _objc_destroyWeak(auStack_318);
        local_618 = (void *)((long)local_618 + 1);
      } while (local_618 < local_610);
      local_610 = pvVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_f8,0x10)
      ;
      local_618 = (void *)0x0;
    } while (local_610 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar7);
  puVar3 = PTR__OBJC_CLASS___UIMenu_026ce388;
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_tag);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,&cf_U_h__,puVar4,0,0,local_290);
  _objc_retainAutoreleasedReturnValue();
  local_348 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar8 = local_1c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_1c0;
  local_380 = PTR___NSConcreteGlobalBlock_02578658;
  local_378 = 0xd0800000;
  local_374 = 0;
  local_370 = FUN_01bd5978;
  local_368 = &DAT_02589838;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_1d8[0];
  local_360 = IVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_358 = IVar2;
  IVar2 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_sortedArrayUsingComparator__0269fae8,&local_380)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_350 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
  local_3b8 = PTR___NSConcreteStackBlock_02578660;
  local_3b0 = 0xc2000000;
  local_3ac = 0;
  local_3a8 = FUN_01bd5bcc;
  local_3a0 = &DAT_0258b790;
  local_388 = puVar4;
  _objc_copyWeak(auStack_398,auStack_1b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_hQ_YS,0,0,&local_3b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_1a8;
  local_390 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedUsername_026c0810);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_setState__026a00b0,IVar6 == 0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_addObject__0269d180,local_390);
  _memset(auStack_400,0,0x40);
  IVar2 = local_350;
  (*(code *)PTR__objc_retain_02578638)();
  local_750 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_178,0x10);
  if (local_750 != 0) {
    lVar10 = *local_3f0;
    local_758 = 0;
    do {
      do {
        if (*local_3f0 - lVar10 != 0) {
          _objc_enumerationMutation(*local_3f0 - lVar10,IVar2);
        }
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_3c0 = *(undefined8 *)(local_3f8 + local_758 * 8);
        IVar6 = local_1d8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8[0],PTR_s_objectForKeyedSubscript__0269d098,local_3c0);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar6;
        FUN_01bc7c2c();
        _objc_retainAutoreleasedReturnValue();
        IVar9 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_3c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_408 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar9);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        puVar4 = local_408;
        puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
        local_440 = PTR___NSConcreteStackBlock_02578660;
        local_438 = 0xc2000000;
        local_434 = 0;
        local_430 = FUN_01bd5cb8;
        local_428 = &DAT_0258b7c0;
        _objc_copyWeak(auStack_418,auStack_1b8);
        uVar1 = local_3c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_420 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,puVar4,0,0,&local_440);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_1a8;
        local_410 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_selectedUsername_026c0810);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_setState__026a00b0,(IVar8 & 1) != 0);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_addObject__0269d180,local_410);
        _objc_storeStrong(&local_410);
        _objc_storeStrong(&local_420,0);
        _objc_destroyWeak(auStack_418);
        _objc_storeStrong(&local_408,0);
        local_758 = local_758 + 1;
      } while (local_758 < local_750);
      local_750 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_178,0x10)
      ;
      local_758 = 0;
    } while (local_750 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___UIMenu_026ce388;
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_person_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,&cf_c__YS,puVar4,0,0,local_388);
  _objc_retainAutoreleasedReturnValue();
  local_448 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_arrow_counterclockwise);
  _objc_retainAutoreleasedReturnValue();
  local_478 = PTR___NSConcreteStackBlock_02578660;
  local_470 = 0xc2000000;
  local_46c = 0;
  local_468 = FUN_01bd5dac;
  local_460 = &DAT_0258b790;
  _objc_copyWeak(auStack_458,auStack_1b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_n___,puVar4,0,&local_478);
  _objc_retainAutoreleasedReturnValue();
  local_450 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_1a0 = local_448;
  local_198 = local_348;
  local_190 = local_288;
  local_188 = local_230;
  local_180 = local_450;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1a0,5)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_450);
  _objc_destroyWeak(auStack_458);
  _objc_storeStrong(&local_448,0);
  _objc_storeStrong(&local_390,0);
  _objc_destroyWeak(auStack_398);
  _objc_storeStrong(&local_388,0);
  _objc_storeStrong(&local_350,0);
  _objc_storeStrong(&local_358,0);
  _objc_storeStrong(&local_360,0);
  _objc_storeStrong(&local_348,0);
  _objc_storeStrong(&local_298,0);
  _objc_destroyWeak(auStack_2a0);
  _objc_storeStrong(&local_290,0);
  _objc_storeStrong(&local_288,0);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_238,0);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(local_1d8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_destroyWeak(auStack_1b8);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}


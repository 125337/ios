// wcrGrouping_scheduleRefreshForTrigger: @ 00376b3c

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_scheduleRefreshForTrigger_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  dispatch_time_t dVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_430;
  double local_408;
  cfstringStruct *local_3b0;
  ID local_378;
  uint local_354;
  bool local_32c;
  byte local_2fc;
  byte local_2f8;
  byte local_2f4;
  undefined *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  code *local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  cfstringStruct *local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  byte local_2a0;
  byte local_29f;
  byte local_29e;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  undefined8 local_250;
  undefined1 auStack_248 [15];
  byte local_239;
  undefined *local_238;
  byte local_229;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  long local_158;
  byte local_149;
  undefined *local_148;
  ID local_140;
  ID local_138;
  byte local_129;
  ID local_128;
  byte local_11b;
  byte local_11a;
  byte local_119;
  ID local_118;
  byte local_109;
  ID local_108;
  byte local_f9;
  ID local_f8;
  byte local_ea;
  byte local_e9;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  byte local_e5;
  int local_e4;
  cfstringStruct *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_c8 [128];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar13 = DAT_02323cc0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (cfstringStruct *)0x0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_wcrGrouping_active_026a2a40);
  if ((IVar4 & 1) == 0) {
    local_e4 = 1;
  }
  else {
    pcVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_reloadSessions);
    local_2f4 = 1;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_reloadAll);
      local_2f4 = (byte)pcVar5;
    }
    local_e5 = local_2f4 & 1;
    pcVar5 = local_e0;
    FUN_0037807c();
    local_e6 = (byte)pcVar5;
    pcVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_insertRow);
    local_2f8 = 1;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_deleteSessionCell);
      local_2f8 = (byte)pcVar5;
    }
    local_e7 = local_2f8 & 1;
    local_2fc = 1;
    if ((local_e5 & 1) == 0) {
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_viewWillAppear);
      local_2fc = 1;
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_viewDidAppear);
        local_2fc = (byte)pcVar5;
      }
    }
    local_e8 = local_2fc & 1;
    local_e9 = 1;
    if ((local_e7 & 1) == 0) {
      local_e9 = local_e5;
    }
    local_e9 = local_e9 & 1;
    IVar4 = local_d0;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_109 = 0;
    local_119 = 0;
    bVar1 = false;
    if (IVar6 != 0) {
      IVar7 = local_d0;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_118 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar7 != 0;
    }
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_32c = false;
    if ((local_e9 & 1) != 0) {
      local_32c = bVar1;
    }
    local_11a = local_32c;
    IVar4 = local_d0;
    local_ea = bVar1;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    pcVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_bootstrapCoalesce);
    local_354 = 1;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_groupsChanged);
      local_354 = 1;
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_groupOpened);
        local_354 = 1;
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_coldBootInstall);
          local_354 = (uint)pcVar5;
        }
      }
    }
    local_11b = (byte)local_354 & 1;
    if (((((local_354 & 1) == 0) && ((local_e5 & 1) == 0)) && ((local_e6 & 1) == 0)) &&
       (((local_ea & 1) != 0 && (IVar4 = local_d0, FUN_00378468(), (IVar4 & 1) != 0)))) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_d0;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      FUN_00378588(local_d0);
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_groupOpened);
      if (((ulong)pcVar5 & 1) == 0) {
        FUN_00364ea4(local_d0);
      }
      local_e4 = 1;
    }
    else {
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_groupOpened);
      if (((ulong)pcVar5 & 1) == 0) {
        FUN_00364ea4(local_d0);
      }
      IVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_wcrGrouping_findMainTableView_026a2848);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_d0;
      local_128 = IVar4;
      FUN_003788e8(local_d0,IVar4);
      IVar4 = local_d0;
      local_129 = (byte)IVar6;
      puVar8 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
      if ((IVar4 & 1) == 0) {
        local_378 = 0;
      }
      else {
        local_378 = local_d0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_138 = local_378;
      if ((local_129 & 1) == 0) {
        local_e4 = 0;
      }
      else {
        IVar4 = local_d0;
        FUN_00378cb4(local_d0,local_128);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_e0;
        local_140 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_groupsChanged);
        if (((ulong)pcVar5 & 1) == 0) {
          IVar4 = local_d0;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        else {
          FUN_003736ec(local_d0);
        }
        IVar4 = local_d0;
        FUN_00373d3c();
        if ((IVar4 & 1) != 0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_d0;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          if (local_e0 == (cfstringStruct *)0x0) {
            local_3b0 = &cf_covered;
          }
          else {
            local_3b0 = local_e0;
          }
          FUN_00374800(local_d0,local_3b0);
        }
        local_e4 = 1;
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_128,0);
      if (local_e4 == 0) {
        local_149 = 0;
        bVar1 = (local_11a & 1) != 0;
        if (bVar1) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar8;
        }
        IVar4 = local_d0;
        local_149 = bVar1;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((local_149 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_148);
        }
        IVar4 = local_d0;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar7 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_158 = IVar7 + 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   IVar7 + 1);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_d0;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        local_408 = 0.35;
        if ((local_e7 & 1) == 0) {
          local_408 = 0.0;
        }
        pcVar5 = local_e0;
        local_160 = local_408;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_didBecomeActive);
        if ((((ulong)pcVar5 & 1) != 0) && ((local_ea & 1) != 0)) {
          local_168 = local_160;
          local_170 = DAT_02323da8;
          if (DAT_02323da8 <= local_160) {
            local_408 = local_160;
          }
          else {
            local_408 = DAT_02323da8;
          }
          local_178 = local_408;
          local_160 = local_408;
        }
        if ((local_e8 & 1) != 0) {
          IVar4 = local_d0;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          IVar6 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar12 = local_408;
          _CACurrentMediaTime();
          dVar12 = local_408 - dVar12;
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          local_408 = dVar12;
          local_180 = dVar12;
          if (0.0 < dVar12) {
            local_188 = local_160;
            local_430 = dVar12;
            if (dVar12 <= local_160) {
              local_430 = local_160;
            }
            local_198 = local_430;
            local_160 = local_430;
            local_408 = local_430;
            local_190 = dVar12;
          }
        }
        pcVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_viewDidLoad);
        if (((ulong)pcVar5 & 1) == 0) {
          IVar4 = local_d0;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          IVar6 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          local_1a0 = local_408;
          if (local_408 <= 0.0) {
            local_450 = 999.0;
          }
          else {
            _CACurrentMediaTime();
            local_450 = local_408 - local_1a0;
          }
          local_1a8 = local_450;
          if ((0.0 <= local_450) && (local_450 < dVar13)) {
            local_1b0 = local_160;
            local_1b8 = dVar13 - local_450;
            local_458 = local_1b8;
            if (local_1b8 <= local_160) {
              local_458 = local_160;
            }
            local_1c0 = local_458;
            local_160 = local_458;
          }
          if (((local_e7 & 1) != 0) && (local_450 < DAT_02323d00)) {
            local_1c8 = local_160;
            local_1d0 = DAT_02323c98;
            if (DAT_02323c98 <= local_160) {
              local_460 = local_160;
            }
            else {
              local_460 = DAT_02323c98;
            }
            local_1d8 = local_460;
            local_160 = local_460;
          }
        }
        local_1e9 = 0;
        local_1f9 = 0;
        local_209 = 0;
        local_219 = 0;
        local_229 = 0;
        local_239 = 0;
        if ((local_11a & 1) == 0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_209 = 1;
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_208 = puVar8;
          local_48 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160 + 0.25,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_219 = 1;
          dVar13 = local_160 + 0.75;
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_218 = puVar9;
          local_40 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_229 = 1;
          local_468 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_228 = puVar8;
          local_38 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_48,3);
          _objc_retainAutoreleasedReturnValue();
          local_239 = 1;
          local_238 = local_468;
        }
        else {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          dVar13 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_1e9 = 1;
          local_468 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1e8 = puVar8;
          local_30 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_30,1);
          _objc_retainAutoreleasedReturnValue();
          local_1f9 = 1;
          local_1f8 = local_468;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1e0 = local_468;
        if ((local_239 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_238);
        }
        if ((local_229 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_228);
        }
        if ((local_219 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_218);
        }
        if ((local_209 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_208);
        }
        if ((local_1f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f8);
        }
        if ((local_1e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e8);
        }
        _objc_initWeak(auStack_248,local_d0);
        _memset(auStack_290,0,0x40);
        puVar8 = local_1e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_4b0 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_c8,
                   0x10);
        if (local_4b0 != (undefined *)0x0) {
          lVar11 = *local_280;
          local_4b8 = (undefined *)0x0;
          do {
            do {
              if (*local_280 - lVar11 != 0) {
                _objc_enumerationMutation(*local_280 - lVar11,puVar8);
              }
              local_250 = *(undefined8 *)(local_288 + (long)local_4b8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_doubleValue_026ca608);
              dVar13 = dVar13 * 1000000000.0;
              dVar10 = _dispatch_time(0,(long)dVar13);
              puVar9 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_2e8 = PTR___NSConcreteStackBlock_02578660;
              local_2e0 = 0xc2000000;
              local_2dc = 0;
              local_2d8 = FUN_00379074;
              local_2d0 = &DAT_0257c738;
              _objc_copyWeak(auStack_2b0,auStack_248);
              uVar2 = local_250;
              local_2a8 = local_158;
              (*(code *)PTR__objc_retain_02578638)();
              puVar3 = local_1e0;
              local_2c8 = uVar2;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar5 = local_e0;
              local_2c0 = puVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_2b8 = pcVar5;
              local_2a0 = local_e6 & 1;
              local_29f = local_11a & 1;
              local_29e = local_e5 & 1;
              _dispatch_after(dVar10,puVar9,&local_2e8);
              (*(code *)PTR__objc_release_02578630)(puVar9);
              _objc_storeStrong(&local_2b8);
              _objc_storeStrong(&local_2c0,0);
              _objc_storeStrong(&local_2c8,0);
              _objc_destroyWeak(auStack_2b0);
              local_4b8 = local_4b8 + 1;
            } while (local_4b8 < local_4b0);
            local_4b0 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_c8
                       ,0x10);
            local_4b8 = (undefined *)0x0;
          } while (local_4b0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar8);
        _objc_destroyWeak(auStack_248);
        _objc_storeStrong(&local_1e0,0);
        local_e4 = 0;
      }
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


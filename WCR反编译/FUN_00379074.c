// FUN_00379074 @ 00379074

void FUN_00379074(double param_1,long param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  dispatch_time_t dVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  double dVar10;
  uint local_3d4;
  cfstringStruct *local_380;
  cfstringStruct *local_360;
  cfstringStruct *local_348;
  cfstringStruct *local_328;
  uint local_2b0;
  uint local_2ac;
  cfstringStruct *local_1c0;
  uint local_170;
  uint local_16c;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  double local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  undefined1 local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  byte local_61;
  undefined8 local_60;
  undefined1 local_52;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  pcVar2 = (cfstringStruct *)(param_2 + 0x38);
  local_30 = param_2;
  local_28 = param_2;
  _objc_loadWeakRetained();
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    pcVar8 = *(cfstringStruct **)(param_2 + 0x40);
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (pcVar8 == pcVar4) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wcrGrouping_active_026a2a40);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_38;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_3c = 1;
      }
      else {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wcrGrouping_findMainTableView_026a2848)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_38;
        local_48 = pcVar2;
        FUN_003612b8(local_38,&cf_m_mainFrameLogicController);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar3;
        FUN_0037a830(pcVar3,&cf_m_bReadyToLoadData);
        local_51 = (byte)pcVar3;
        pcVar2 = local_50;
        FUN_0037a830(local_50,&cf_hasLoadSessionData);
        local_52 = SUB81(pcVar2,0);
        local_61 = 0;
        local_16c = 1;
        if (local_48 != (cfstringStruct *)0x0) {
          local_170 = 0;
          if (((local_51 & 1) == 0) && (local_170 = 0, ((ulong)pcVar2 & 1) == 0)) {
            uVar9 = *(undefined8 *)(param_2 + 0x20);
            uVar5 = *(undefined8 *)(param_2 + 0x28);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_61 = 1;
            local_60 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isEqual__0269e9a8);
            local_170 = (uint)uVar9 ^ 1;
          }
          local_16c = local_170;
        }
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        if ((local_16c & 1) == 0) {
          pcVar2 = local_38;
          FUN_003788e8(local_38,local_48);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_48;
            FUN_00364dd0();
            if ((((ulong)pcVar2 & 1) == 0) || ((*(byte *)(param_2 + 0x48) & 1) != 0)) {
              pcVar2 = local_38;
              _WCRGroupingState();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (((ulong)pcVar4 & 1) == 0) {
                pcVar2 = local_38;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_38;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_a8 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_entries_026a25d0);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_38;
                local_b0 = pcVar3;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_b8 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                local_c9 = 0;
                local_d9 = 0;
                bVar1 = false;
                if (((*(byte *)(param_2 + 0x49) & 1) == 0) &&
                   (bVar1 = false, (*(byte *)(param_2 + 0x48) & 1) == 0)) {
                  pcVar2 = local_38;
                  _WCRGroupingState();
                  _objc_retainAutoreleasedReturnValue();
                  local_c9 = 1;
                  local_c8 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_d9 = 1;
                  bVar1 = false;
                  local_d8 = pcVar2;
                  if ((pcVar2 != (cfstringStruct *)0x0) &&
                     (bVar1 = false, local_b8 != (cfstringStruct *)0x0)) {
                    _CACurrentMediaTime();
                    dVar10 = param_1;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_doubleValue_026ca608);
                    param_1 = param_1 - dVar10;
                    bVar1 = param_1 < 0.5;
                  }
                }
                if ((local_d9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_d8);
                }
                if ((local_c9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_c8);
                }
                local_b9 = bVar1;
                if (!bVar1) {
                  if (((*(byte *)(param_2 + 0x4a) & 1) == 0) &&
                     ((*(byte *)(param_2 + 0x48) & 1) == 0)) {
                    FUN_003736ec(local_38);
                  }
                  else {
                    pcVar2 = local_38;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                  }
                }
                _CACurrentMediaTime();
                pcVar2 = local_38;
                local_e8 = param_1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_48);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = *(cfstringStruct **)(param_2 + 0x40);
                pcVar3 = local_38;
                local_f0 = pcVar2;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                if (pcVar8 == pcVar4) {
                  local_f9 = 0;
                  local_2ac = 0;
                  if ((local_b0 != (cfstringStruct *)0x0) &&
                     (local_2ac = 0, local_a8 != (cfstringStruct *)0x0)) {
                    pcVar2 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_entries_026a25d0);
                    _objc_retainAutoreleasedReturnValue();
                    local_f9 = 1;
                    local_f8 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_2b0 = 1;
                    if (pcVar2 != (cfstringStruct *)0x0) {
                      pcVar2 = local_f0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_budgetFallback_026a25d8);
                      local_2b0 = (uint)pcVar2;
                    }
                    local_2ac = local_2b0;
                  }
                  if ((local_f9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_f8);
                  }
                  if ((local_2ac & 1) == 0) {
                    pcVar2 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_displaySignature_026a2878);
                    _objc_retainAutoreleasedReturnValue();
                    local_328 = pcVar2;
                    if (pcVar2 == (cfstringStruct *)0x0) {
                      local_328 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_108 = local_328;
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    pcVar2 = local_38;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_348 = pcVar3;
                    if (pcVar3 == (cfstringStruct *)0x0) {
                      local_348 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_110 = local_348;
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    pcVar2 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layoutSignature_026a2868);
                    _objc_retainAutoreleasedReturnValue();
                    local_360 = pcVar2;
                    if (pcVar2 == (cfstringStruct *)0x0) {
                      local_360 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_118 = local_360;
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    pcVar2 = local_38;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_380 = pcVar3;
                    if (pcVar3 == (cfstringStruct *)0x0) {
                      local_380 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_120 = local_380;
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    if ((((((*(byte *)(param_2 + 0x48) & 1) == 0) &&
                          (pcVar2 = local_108,
                          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
                          pcVar2 != (cfstringStruct *)0x0)) &&
                         (pcVar2 = local_f0,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_f0,PTR_s_budgetFallback_026a25d8),
                         ((ulong)pcVar2 & 1) == 0)) &&
                        ((pcVar2 = local_108,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_108,PTR_s_isEqualToString__0269ccc8,local_110),
                         ((ulong)pcVar2 & 1) != 0 &&
                         (pcVar2 = local_118,
                         (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
                         pcVar2 != (cfstringStruct *)0x0)))) &&
                       (pcVar2 = local_118,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_118,PTR_s_isEqualToString__0269ccc8,local_120),
                       puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038, ((ulong)pcVar2 & 1) != 0)) {
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithUnsignedInteger__0269e4d0,
                                 *(long *)(param_2 + 0x40) + 1);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      local_3c = 1;
                    }
                    else {
                      _CACurrentMediaTime();
                      pcVar2 = local_118;
                      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
                      local_3d4 = 0;
                      if (pcVar2 != (cfstringStruct *)0x0) {
                        pcVar2 = local_118;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_118,PTR_s_isEqualToString__0269ccc8,local_120);
                        local_3d4 = (uint)pcVar2;
                      }
                      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,
                                 &cf_home_reloadbegintrigger___strategy___);
                      _objc_retainAutoreleasedReturnValue();
                      _WCRefineCrashReporterBreadcrumb();
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      if ((local_3d4 & 1) == 0) {
                        FUN_0037d3b4(local_38,local_48);
                      }
                      else {
                        FUN_0037cee8(local_38,local_48);
                      }
                      _CACurrentMediaTime();
                      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,&cf_home_reloadendcost___1fms);
                      _objc_retainAutoreleasedReturnValue();
                      _WCRefineCrashReporterBreadcrumb();
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      pcVar2 = local_108;
                      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
                      if ((pcVar2 != (cfstringStruct *)0x0) &&
                         (pcVar2 = local_f0,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_f0,PTR_s_budgetFallback_026a25d8),
                         ((ulong)pcVar2 & 1) == 0)) {
                        pcVar2 = local_38;
                        _WCRGroupingState();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        pcVar2 = local_38;
                        _WCRGroupingState();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                      }
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithUnsignedInteger__0269e4d0,
                                 *(long *)(param_2 + 0x40) + 1);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      local_3c = 0;
                    }
                    _objc_storeStrong(&local_120);
                    _objc_storeStrong(&local_118,0);
                    _objc_storeStrong(&local_110,0);
                    _objc_storeStrong(&local_108,0);
                  }
                  else {
                    pcVar2 = local_38;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    _CACurrentMediaTime();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = local_38;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    (*(code *)PTR__objc_release_02578630)(puVar7);
                    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithUnsignedInteger__0269e4d0,
                                 *(long *)(param_2 + 0x40) + 1);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      local_3c = 1;
                    }
                    else {
                      pcVar2 = local_38;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      local_3c = 1;
                    }
                  }
                }
                else {
                  local_3c = 1;
                }
                _objc_storeStrong(&local_f0);
                _objc_storeStrong(&local_b8,0);
                _objc_storeStrong(&local_a8,0);
              }
              else {
                FUN_0037c2b0(local_38);
                local_3c = 1;
              }
            }
            else {
              pcVar2 = local_38;
              _WCRGroupingState();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (((ulong)pcVar4 & 1) == 0) {
                puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = local_38;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                dVar6 = _dispatch_time(0,350000000);
                puVar7 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                local_a0 = PTR___NSConcreteStackBlock_02578660;
                local_98 = 0xc2000000;
                local_94 = 0;
                local_90 = FUN_0037ace8;
                local_88 = &DAT_0257c708;
                _objc_copyWeak(auStack_78,param_2 + 0x38);
                uVar5 = *(undefined8 *)(param_2 + 0x30);
                (*(code *)PTR__objc_retain_02578638)();
                local_70 = *(undefined8 *)(param_2 + 0x40);
                local_80 = uVar5;
                _dispatch_after(dVar6,puVar7,&local_a0);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                _objc_storeStrong(&local_80,0);
                _objc_destroyWeak(auStack_78);
              }
              local_3c = 1;
            }
          }
          else {
            FUN_0037aadc(local_38,local_48);
            pcVar2 = local_38;
            _WCRGroupingState();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_38;
            FUN_00373d3c();
            if (((ulong)pcVar2 & 1) != 0) {
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_38;
              _WCRGroupingState();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              local_1c0 = *(cfstringStruct **)(param_2 + 0x30);
              if (local_1c0 == (cfstringStruct *)0x0) {
                local_1c0 = &cf_pulse_covered;
              }
              FUN_00374800(local_38,local_1c0);
            }
            local_3c = 1;
          }
        }
        else {
          if (local_48 == (cfstringStruct *)0x0) {
            pcVar2 = local_38;
            _WCRGroupingState();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          local_3c = 1;
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}


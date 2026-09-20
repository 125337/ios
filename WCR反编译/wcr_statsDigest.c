// wcr_statsDigest @ 01dd688c

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_statsDigest(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  dword *pdVar11;
  double dVar12;
  ulong local_6f8;
  ulong local_6f0;
  ID local_650;
  long local_618;
  double local_5a0;
  undefined1 *local_568;
  undefined1 *local_560;
  ulong local_508;
  ulong local_500;
  undefined *local_4a8;
  undefined *local_4a0;
  ulong local_430;
  undefined1 auStack_428 [8];
  long local_420;
  long *local_418;
  ulong local_3e8;
  undefined1 *local_3e0;
  undefined *local_3d8;
  byte local_3c9;
  ID local_3c8;
  byte local_3b9;
  ID local_3b8;
  ID local_3b0;
  ID local_3a8;
  ID local_3a0;
  byte local_391;
  ID local_390;
  long local_388;
  double local_380;
  ID local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  undefined8 local_330;
  ulong local_328;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  undefined8 local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  undefined8 local_298;
  undefined *local_290;
  undefined1 *local_288;
  byte local_279;
  ID local_278;
  cfstringStruct *local_270;
  int local_264;
  ID local_260;
  SEL local_258;
  ID local_250;
  cfstringStruct *local_248;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_258 = param_2;
  local_250 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionResult_026c5440);
  _objc_retainAutoreleasedReturnValue();
  local_260 = param_1;
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = &::cf___;
    local_264 = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_250;
    local_270 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_279 = 0;
    if (IVar3 != 0) {
      IVar4 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      local_278 = IVar4;
    }
    local_279 = IVar3 != 0;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_O_);
    if ((local_279 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_278);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar1 = local_270;
    IVar2 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_wcr_rangeTitle_026c5558);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_e_);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar1 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_totalCount_026a3130);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf___mo__);
    IVar2 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_typeOrder_026c50f8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_appendString__0269ccb0,&cf___W_Sk);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_288 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_290 = puVar6;
      _memset(auStack_2d8,0,0x40);
      local_c0 = &cf_redpacket;
      local_b8 = &cf_transfer;
      local_b0 = &cf_pat;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_4a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4a0 != (undefined *)0x0) {
        lVar9 = *local_2c8;
        local_4a8 = (undefined *)0x0;
        do {
          do {
            if (*local_2c8 - lVar9 != 0) {
              _objc_enumerationMutation(*local_2c8 - lVar9,puVar5);
            }
            local_298 = *(undefined8 *)(local_2d0 + (long)local_4a8 * 8);
            IVar2 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_typeCounts_026afca8);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_release_02578630)(IVar2);
            if (IVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_298);
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_298);
            }
            local_4a8 = local_4a8 + 1;
          } while (local_4a8 < local_4a0);
          local_4a0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_a8,
                     0x10);
          local_4a8 = (undefined *)0x0;
        } while (local_4a0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _memset(auStack_320,0,0x40);
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_typeOrder_026c50f8);
      _objc_retainAutoreleasedReturnValue();
      local_500 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_500 != 0) {
        lVar9 = *local_310;
        local_508 = 0;
        do {
          do {
            if (*local_310 - lVar9 != 0) {
              _objc_enumerationMutation(*local_310 - lVar9,IVar2);
            }
            local_2e0 = *(undefined8 *)(local_318 + local_508 * 8);
            puVar5 = local_290;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_290,PTR_s_containsObject__0269cbb8,local_2e0);
            if (((ulong)puVar5 & 1) == 0) {
              IVar3 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_typeCounts_026afca8);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              IVar7 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar4);
              (*(code *)PTR__objc_release_02578630)(IVar3);
              if (IVar7 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_2e0)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_2e0)
                ;
                puVar8 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_count_0269cfe0);
                if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar8) {
                  local_264 = 4;
                  goto LAB_01dd7058;
                }
              }
            }
            local_508 = local_508 + 1;
          } while (local_508 < local_500);
          local_500 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_140,
                     0x10);
          local_508 = 0;
        } while (local_500 != 0);
      }
      local_264 = 0;
LAB_01dd7058:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_328 = 0;
      _memset(auStack_370,0,0x40);
      puVar8 = local_288;
      (*(code *)PTR__objc_retain_02578638)();
      local_560 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_1c0,0x10
                );
      if (local_560 != (undefined1 *)0x0) {
        lVar9 = *local_360;
        local_568 = (undefined1 *)0x0;
        do {
          do {
            if (*local_360 - lVar9 != 0) {
              _objc_enumerationMutation(*local_360 - lVar9,puVar8);
            }
            local_330 = *(undefined8 *)(local_368 + (long)local_568 * 8);
            IVar2 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_typeCounts_026afca8);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_release_02578630)(IVar2);
            local_378 = IVar4;
            if (IVar4 != 0) {
              IVar2 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_totalCount_026a3130);
              if (IVar2 == 0) {
                local_5a0 = 0.0;
              }
              else {
                dVar12 = (double)NEON_ucvtf(local_378);
                IVar2 = local_260;
                (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_totalCount_026a3130);
                local_5a0 = (dVar12 * 100.0) / (double)IVar2;
              }
              pcVar1 = local_270;
              local_380 = local_5a0;
              IVar2 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_250,PTR_s_wcr_typeTitleForKey__026c5688,local_330);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&::cf__);
              (*(code *)PTR__objc_release_02578630)(IVar2);
              local_328 = local_328 + 1;
              if (7 < local_328) {
                local_264 = 6;
                goto LAB_01dd735c;
              }
            }
            local_568 = local_568 + 1;
          } while (local_568 < local_560);
          local_560 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_1c0,
                     0x10);
          local_568 = (undefined1 *)0x0;
        } while (local_560 != (undefined1 *)0x0);
      }
      local_264 = 0;
LAB_01dd735c:
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_appendString__0269ccb0,&::cf_newline_s_)
      ;
      _objc_storeStrong(&local_290);
      _objc_storeStrong(&local_288,0);
    }
    IVar2 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_isGroup_026af768);
    pcVar1 = local_270;
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_selfCount_026afd98);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_otherCount_026afda8);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_bS_);
      pcVar1 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_visitCount_026afed8);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&::cf_Sb);
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_latestTimeText_026c4fb8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      pcVar1 = local_270;
      if (IVar3 != 0) {
        IVar2 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_latestTimeText_026c4fb8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_N_kJ_Y_);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_peopleCount_026c4d90);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_friendCount_026c4f88);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_maleCount_026c4f98);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_femaleCount_026c4fa0);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_unknownSexCount_026c4fa8);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_bXT_);
      pcVar1 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_visitCount_026afed8);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&::cf_Sb);
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_peopleCount_026c4d90);
      IVar3 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_speakerOrder_026af778);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_391 = 0;
      if (IVar4 < IVar2) {
        IVar2 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_peopleCount_026c4d90);
        IVar4 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_speakerOrder_026af778);
        _objc_retainAutoreleasedReturnValue();
        local_391 = 1;
        local_390 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_618 = IVar2 - IVar4;
      }
      else {
        local_618 = 0;
      }
      if ((local_391 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_390);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_388 = local_618;
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_speakerOrder_026af778);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_3a0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_appendFormat__0269d148,&::cf_S);
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_speakerOrder_026af778);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_3a8 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_3a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_length_0269cca0);
      local_3b9 = 0;
      local_3c9 = 0;
      if (IVar2 == 0) {
        local_650 = 0;
      }
      else {
        local_650 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_speakerCounts_026af780);
        _objc_retainAutoreleasedReturnValue();
        local_3b9 = 1;
        local_3b8 = local_650;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_3c9 = 1;
        local_3c8 = local_650;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_3c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_3c8);
      }
      if ((local_3b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_3b8);
      }
      local_3b0 = local_650;
      IVar3 = local_3a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_length_0269cca0);
      IVar2 = local_3a8;
      puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      if ((IVar3 != 0) && (local_3b0 != 0)) {
        IVar3 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_usr_026af770);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_displayNameForUser_inRoom__0269ecd0,IVar2);
        _objc_retainAutoreleasedReturnValue();
        local_3d8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar5 = local_3d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_3d8,PTR_s_length_0269cca0);
        if ((puVar5 == (undefined *)0x0) ||
           ((puVar5 = local_3d8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3d8,PTR_s_isEqualToString__0269ccc8,local_3a8),
            ((ulong)puVar5 & 1) != 0 ||
            (puVar5 = local_3d8,
            (*(code *)PTR__objc_msgSend_02578628)(local_3d8,PTR_s_hasPrefix__0269d320,&cf_wxid_),
            ((ulong)puVar5 & 1) != 0)))) {
          _objc_storeStrong(&local_3d8,&cf__S);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_appendFormat__0269d148,&::cf_S);
        _objc_storeStrong(&local_3d8,0);
      }
      _objc_storeStrong(&local_3a8,0);
    }
    IVar2 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_wordRows_026c5138);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_3e0 = puVar5;
      _memset(auStack_428,0,0x40);
      IVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_wordRows_026c5138);
      _objc_retainAutoreleasedReturnValue();
      local_6f0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_6f0 != 0) {
        lVar9 = *local_418;
        local_6f8 = 0;
        do {
          do {
            if (*local_418 - lVar9 != 0) {
              _objc_enumerationMutation(*local_418 - lVar9,IVar2);
            }
            uVar10 = *(ulong *)(local_420 + local_6f8 * 8);
            local_3e8 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_word);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_430 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar10 & 1) == 0) ||
               (uVar10 = local_430,
               (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_length_0269cca0), uVar10 == 0))
            {
              pdVar11 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
              local_264 = 9;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_addObject__0269d180,local_430);
              puVar8 = local_3e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_count_0269cfe0);
              pdVar11 = (dword *)(puVar8 + -5);
              if (puVar8 < (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
                local_264 = 0;
              }
              else {
                pdVar11 = &MACH_HEADER.cpusubtype;
                local_264 = 8;
              }
            }
            _objc_storeStrong(pdVar11,&local_430,0);
            if ((local_264 != 0) && (local_264 != 9)) goto LAB_01dd7e44;
            local_6f8 = local_6f8 + 1;
          } while (local_6f8 < local_6f0);
          local_6f0 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_428,auStack_240,
                     0x10);
          local_6f8 = 0;
        } while (local_6f0 != 0);
      }
      local_264 = 0;
LAB_01dd7e44:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar8 = local_3e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_count_0269cfe0);
      pcVar1 = local_270;
      if (puVar8 != (undefined1 *)0x0) {
        puVar8 = local_3e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3e0,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendFormat__0269d148,&cf_p_);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
      _objc_storeStrong(&local_3e0,0);
    }
    pcVar1 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_copy_0269d150);
    local_264 = 1;
    local_248 = pcVar1;
    _objc_storeStrong(&local_270,0);
  }
  _objc_storeStrong(&local_260,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_248;
}


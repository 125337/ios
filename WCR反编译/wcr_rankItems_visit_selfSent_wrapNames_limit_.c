// wcr_rankItems:visit:selfSent:wrapNames:limit: @ 01dac568

/* Function Stack Size: 0x2c bytes */

ID WCRefineSessionStatsBoardView::wcr_rankItems_visit_selfSent_wrapNames_limit_
             (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5,bool param_6,
             unsigned_long_long param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2a8;
  undefined *local_298;
  cfstringStruct *local_288;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  ulong local_250;
  ulong local_248;
  undefined1 *local_228;
  ulong local_218;
  bool local_1e9;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  byte local_1b1;
  cfstringStruct *local_1b0;
  byte local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  cfstringStruct *local_148;
  undefined1 *local_140;
  long local_138;
  ulong local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  byte local_113;
  byte local_112;
  byte local_111;
  ulong local_110;
  SEL local_108;
  ID local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_111 = (byte)param_4;
  local_112 = (byte)param_5;
  local_113 = (byte)param_6;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_120 = (undefined1 *)param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_110;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_128 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_218 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_218 = local_110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_218;
  local_138 = 0;
  if (local_120 == (undefined1 *)0x0) {
    local_228 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
  }
  else {
    local_228 = local_120;
  }
  local_140 = local_228;
  _memset(auStack_188,0,0x40);
  uVar4 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_248 != 0) {
    lVar10 = *local_178;
    local_250 = 0;
    do {
      do {
        if (*local_178 - lVar10 != 0) {
          _objc_enumerationMutation(*local_178 - lVar10,uVar4);
        }
        local_278 = *(cfstringStruct **)(local_180 + local_250 * 8);
        local_148 = local_278;
        if ((local_112 & 1) == 0) {
          if ((local_111 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_totalCount_026a3130);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_visitCount_026afed8);
          }
          local_270 = local_278;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_selfCount_026afd98);
          local_270 = local_278;
        }
        local_190 = local_270;
        if (local_270 != (cfstringStruct *)0x0) {
          pcVar5 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1a1 = 0;
          local_1b1 = 0;
          local_288 = local_148;
          if (pcVar6 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            local_1b1 = 1;
            local_1b0 = local_288;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
            _objc_retainAutoreleasedReturnValue();
            local_1a1 = 1;
            local_1a0 = local_288;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_198 = local_288;
          if ((local_1b1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          if ((local_1a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          IVar7 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_privacyOn_026c4ea0);
          if ((IVar7 & 1) != 0) {
            pcVar5 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isGroup_026af768);
            local_1c1 = 0;
            local_1d1 = 0;
            local_298 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (((ulong)pcVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__YS);
              _objc_retainAutoreleasedReturnValue();
              local_1d1 = 1;
              local_1d0 = local_298;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_1c1 = 1;
              local_1c0 = local_298;
            }
            _objc_storeStrong(&local_198,local_298);
            if ((local_1d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d0);
            }
            if ((local_1c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c0);
            }
          }
          local_f8 = &cf_name;
          if (local_198 == (cfstringStruct *)0x0) {
            local_2a8 = &::cf___;
          }
          else {
            local_2a8 = local_198;
          }
          local_d0 = local_2a8;
          local_f0 = &cf_count;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_190);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = &cf_color;
          lVar11 = local_138;
          local_c8 = puVar2;
          FUN_01daa088();
          _objc_retainAutoreleasedReturnValue();
          local_e0 = &cf_usr;
          pcVar5 = local_148;
          local_c0 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_2c8 = &::cf___;
          }
          else {
            local_2c8 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            local_1e8 = local_2c8;
          }
          local_1e9 = pcVar6 != (cfstringStruct *)0x0;
          local_b8 = local_2c8;
          local_d8 = &cf_unit;
          local_b0 = &cf__k;
          if ((local_111 & 1) == 0) {
            local_b0 = &cf_ag;
          }
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1e0 = puVar8;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_1e9) {
            (*(code *)PTR__objc_release_02578630)(local_1e8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(lVar11);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar5 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isGroup_026af768);
          if (((ulong)pcVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_friend,&cf_tap);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_group,&cf_tap);
          }
          if (((local_113 & 1) != 0) &&
             (IVar7 = local_100,
             (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_privacyOn_026c4ea0),
             (IVar7 & 1) == 0)) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_wrap);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addObject__0269d180,local_1e0);
          local_138 = local_138 + 1;
          puVar9 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
          bVar1 = local_140 <= puVar9;
          lVar11 = (long)puVar9 - (long)local_140;
          if (bVar1) {
            lVar11 = 2;
          }
          _objc_storeStrong(lVar11,&local_1e0);
          _objc_storeStrong(&local_198,0);
          if (bVar1) goto LAB_01dacef4;
        }
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_250 = 0;
    } while (local_248 != 0);
  }
LAB_01dacef4:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar9 = local_128;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


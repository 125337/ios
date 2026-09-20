// recordSvgRandomColorSchemeHistoryWithCurrentSettingsCustomName: @ 020a0380

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineConfig::recordSvgRandomColorSchemeHistoryWithCurrentSettingsCustomName_
          (WCRefineConfig *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  double in_d0;
  double dVar13;
  undefined *local_2f0;
  undefined *local_2d0;
  ulong local_288;
  ulong local_280;
  ID local_258;
  undefined *local_238;
  byte local_229;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined4 local_1c4;
  double local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined1 *local_158;
  ID local_150;
  ID local_148;
  double local_140;
  ID local_138;
  undefined *local_130;
  SEL local_128;
  ID local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (undefined *)0x0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  IVar1 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_svgRandomPaletteHexes_026a8ce0);
  _objc_retainAutoreleasedReturnValue();
  local_258 = IVar1;
  if (IVar1 == 0) {
    local_258 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_258;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_svgRandomColorAlpha_026a8cd8);
  IVar1 = local_138;
  local_140 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_componentsJoinedByString__0269d140,&cf__);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_120;
  local_148 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_svgRandomColorSchemeHistoryItems_026c63f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_150 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_160 = (undefined *)0x0;
  local_158 = puVar3;
  _memset(auStack_1a8,0,0x40);
  IVar1 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_280 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
  if (local_280 != 0) {
    lVar10 = *local_198;
    local_288 = 0;
    do {
      do {
        fVar12 = SUB84(in_d0,0);
        if (*local_198 - lVar10 != 0) {
          _objc_enumerationMutation(*local_198 - lVar10,IVar1);
        }
        uVar11 = *(ulong *)(local_1a0 + local_288 * 8);
        local_168 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_paletteHexes);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        FUN_0209d760();
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar11);
        uVar4 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_componentsJoinedByString__0269d140,&cf__);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = local_168;
        local_1b8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar13 = (double)fVar12;
        (*(code *)PTR__objc_release_02578630)(uVar11);
        in_d0 = ABS(dVar13 - local_140);
        local_1c0 = dVar13;
        if ((DAT_02323ca8 <= in_d0) ||
           (uVar4 = local_1b8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1b8,PTR_s_isEqualToString__0269ccc8,local_148), (uVar4 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_168);
          local_1c4 = 0;
        }
        else {
          _objc_storeStrong(&local_160,local_168);
          local_1c4 = 3;
        }
        _objc_storeStrong(&local_1b8);
        _objc_storeStrong(&local_1b0,0);
        local_288 = local_288 + 1;
      } while (local_288 < local_280);
      local_280 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      local_288 = 0;
    } while (local_280 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_138;
  FUN_020a0d88(local_140);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_130;
  local_1d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
  local_1e1 = 0;
  local_1f1 = 0;
  local_201 = 0;
  if (puVar3 == (undefined *)0x0) {
    local_2d0 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
    _objc_retainAutoreleasedReturnValue();
    local_1f1 = 1;
    local_1f0 = local_2d0;
    FUN_020a01c4();
    _objc_retainAutoreleasedReturnValue();
    local_201 = 1;
    local_200 = local_2d0;
  }
  else {
    local_2d0 = local_130;
    FUN_020a01c4(puVar3,local_130,local_1d0);
    _objc_retainAutoreleasedReturnValue();
    local_1e1 = 1;
    local_1e0 = local_2d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = local_2d0;
  if ((local_201 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  if ((local_1f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f0);
  }
  if ((local_1e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e0);
  }
  puVar3 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  local_219 = 0;
  local_229 = 0;
  local_2f0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_2f0 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    local_219 = 1;
    local_218 = local_2f0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_228 = local_2f0;
  }
  local_229 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = local_2f0;
  if ((local_229 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_228);
  }
  if ((local_219 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_f8 = &cf_id;
  local_d0 = local_210;
  local_f0 = &cf_name;
  local_c8 = local_1d8;
  local_e8 = &cf_paletteHexes;
  local_c0 = local_138;
  local_e0 = &cf_alpha;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = &cf_updatedAt;
  puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_b8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_d0,&local_f8,5);
  _objc_retainAutoreleasedReturnValue();
  local_238 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_insertObject_atIndex__0269eac0,local_238,0);
  puVar8 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  puVar9 = local_158;
  if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < puVar8) {
    puVar8 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    local_118 = puVar8 + -0x1e;
    local_110 = 0x1e;
    local_108 = 0x1e;
    local_100 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar9,PTR_s_removeObjectsInRange__0269dad0,0x1e,local_118);
  }
  puVar9 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setSvgRandomColorSchemeHistoryIt_026ca348);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


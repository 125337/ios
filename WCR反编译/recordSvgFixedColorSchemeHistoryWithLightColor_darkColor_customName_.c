// recordSvgFixedColorSchemeHistoryWithLightColor:darkColor:customName: @ 0209f178

/* Function Stack Size: 0x28 bytes */

void WCRefineConfig::recordSvgFixedColorSchemeHistoryWithLightColor_darkColor_customName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_2f0;
  undefined *local_2d0;
  ulong local_290;
  ulong local_288;
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
  long local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  undefined *local_170;
  undefined1 *local_168;
  ID local_160;
  undefined4 local_154;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
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
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_4);
  local_140 = (undefined *)0x0;
  _objc_storeStrong(&local_140,param_5);
  lVar9 = local_130;
  FUN_0209fea8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  FUN_0209fb50();
  _objc_retainAutoreleasedReturnValue();
  local_148 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar9);
  lVar9 = local_138;
  FUN_0209fea8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  FUN_0209fb50();
  _objc_retainAutoreleasedReturnValue();
  local_150 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar9);
  lVar9 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if ((lVar9 == 0) ||
     (lVar9 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
     lVar9 == 0)) {
    local_154 = 1;
  }
  else {
    IVar2 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_svgFixedColorSchemeHistoryItems_026c63e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_160 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_170 = (undefined *)0x0;
    local_168 = puVar3;
    _memset(auStack_1b8,0,0x40);
    IVar2 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_288 != 0) {
      lVar9 = *local_1a8;
      local_290 = 0;
      do {
        do {
          if (*local_1a8 - lVar9 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar9,IVar2);
          }
          uVar10 = *(ulong *)(local_1b0 + local_290 * 8);
          local_178 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightHex);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar10;
          FUN_0209fb50();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkHex);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar4;
          FUN_0209fb50();
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = uVar10;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_isEqualToString__0269ccc8,local_148)
          ;
          if (((uVar4 & 1) == 0) ||
             (uVar4 = local_1c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1c8,PTR_s_isEqualToString__0269ccc8,local_150), (uVar4 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_178);
            local_154 = 0;
          }
          else {
            _objc_storeStrong(&local_170,local_178);
            local_154 = 3;
          }
          _objc_storeStrong(&local_1c8);
          _objc_storeStrong(&local_1c0,0);
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        local_290 = 0;
      } while (local_288 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    lVar9 = local_148;
    FUN_020a00b4(local_148,local_150);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_140;
    local_1d0 = lVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    local_1e1 = 0;
    local_1f1 = 0;
    local_201 = 0;
    if (puVar3 == (undefined *)0x0) {
      local_2d0 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_1f1 = 1;
      local_1f0 = local_2d0;
      FUN_020a01c4();
      _objc_retainAutoreleasedReturnValue();
      local_201 = 1;
      local_200 = local_2d0;
    }
    else {
      local_2d0 = local_140;
      FUN_020a01c4(puVar3,local_140,local_1d0);
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
    puVar3 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
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
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f8 = &cf_id;
    local_d0 = local_210;
    local_f0 = &cf_name;
    local_c8 = local_1d8;
    local_e8 = &cf_lightHex;
    local_c0 = local_148;
    local_e0 = &cf_darkHex;
    local_b8 = local_150;
    local_d8 = &cf_updatedAt;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
    _objc_retainAutoreleasedReturnValue();
    local_238 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_insertObject_atIndex__0269eac0,local_238,0);
    puVar7 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    puVar8 = local_168;
    if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < puVar7) {
      puVar7 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
      local_118 = puVar7 + -0x1e;
      local_110 = 0x1e;
      local_108 = 0x1e;
      local_100 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_removeObjectsInRange__0269dad0,0x1e,local_118);
    }
    puVar8 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setSvgFixedColorSchemeHistoryIte_026ca340)
    ;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    _objc_storeStrong(&local_238);
    _objc_storeStrong(&local_210,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


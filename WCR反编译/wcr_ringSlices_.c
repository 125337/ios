// wcr_ringSlices: @ 01dadfa4

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::wcr_ringSlices_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *local_440;
  undefined *local_438;
  undefined *local_3c8;
  undefined *local_3c0;
  ulong local_3a0;
  uint local_384;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  long local_2e8;
  undefined1 *local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  long local_298;
  ulong local_290;
  long local_288;
  undefined *local_280;
  ulong local_278;
  byte local_269;
  ulong local_268;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_1fc;
  undefined *local_1f8;
  SEL local_1f0;
  ID local_1e8;
  undefined1 *local_1e0;
  undefined1 auStack_1d8 [128];
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1f8 = (undefined1 *)0x0;
  local_1f0 = param_2;
  local_1e8 = param_1;
  _objc_storeStrong(&local_1f8,param_3);
  puVar1 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
  puVar2 = local_1f8;
  if ((undefined1 *)((long)&MACH_HEADER.cputype + 2) < puVar1) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar1;
    _memset(auStack_258,0,0x40);
    puVar2 = local_1f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_360 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10);
    if (local_360 != (undefined1 *)0x0) {
      lVar7 = *local_248;
      local_368 = (undefined1 *)0x0;
      do {
        do {
          if (*local_248 - lVar7 != 0) {
            _objc_enumerationMutation(*local_248 - lVar7,puVar2);
          }
          uVar8 = *(ulong *)(local_250 + (long)local_368 * 8);
          local_218 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_218;
          local_260 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_260;
          local_268 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_260,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
          local_384 = 1;
          if ((uVar8 & 1) == 0) {
            uVar3 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_260,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
            local_384 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_260,PTR_s_isEqualToString__0269ccc8,&cf_pat);
              local_384 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_268;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_268,PTR_s_isEqualToString__0269ccc8,&cf__S);
                local_384 = 1;
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_268;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_268,PTR_s_isEqualToString__0269ccc8,&cf_l_);
                  local_384 = 1;
                  if ((uVar3 & 1) == 0) {
                    uVar3 = local_268;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_268,PTR_s_isEqualToString__0269ccc8,&::cf_b);
                    local_384 = (uint)uVar3;
                  }
                }
              }
            }
          }
          local_269 = (byte)local_384 & 1;
          if ((local_384 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_218);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_addObject__0269d180,local_218);
          }
          _objc_storeStrong(&local_268);
          _objc_storeStrong(&local_260,0);
          local_368 = local_368 + 1;
        } while (local_368 < local_360);
        local_360 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                   0x10);
        local_368 = (undefined1 *)0x0;
      } while (local_360 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
    if (puVar4 < (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      puVar4 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
      local_3a0 = 5 - (long)puVar4;
    }
    else {
      local_3a0 = 0;
    }
    local_278 = local_3a0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_280 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_208);
    local_288 = 0;
    local_290 = 0;
    _memset(auStack_2d8,0,0x40);
    puVar2 = local_210;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,0x10);
    if (local_3c0 != (undefined *)0x0) {
      lVar7 = *local_2c8;
      local_3c8 = (undefined *)0x0;
      do {
        do {
          if (*local_2c8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2c8 - lVar7,puVar2);
          }
          lVar9 = *(long *)(local_2d0 + (long)local_3c8 * 8);
          local_298 = lVar9;
          if (local_290 < local_278) {
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_addObject__0269d180,lVar9);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_288 = local_288 + lVar10;
            (*(code *)PTR__objc_release_02578630)(lVar9);
          }
          local_290 = local_290 + 1;
          local_3c8 = local_3c8 + 1;
        } while (local_3c8 < local_3c0);
        local_3c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,
                   0x10);
        local_3c8 = (undefined *)0x0;
      } while (local_3c0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_280;
    if (local_288 != 0) {
      local_158 = &cf_name;
      local_140 = &cf_vQN;
      local_150 = &cf_count;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_288);
      _objc_retainAutoreleasedReturnValue();
      local_148 = &cf_color;
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_138 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c78,DAT_02324050,0x3fe3333333333333,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_130 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_140,&local_158,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = puVar2;
    _memset(auStack_328,0,0x40);
    puVar2 = local_280;
    (*(code *)PTR__objc_retain_02578638)();
    local_438 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1d8,0x10);
    if (local_438 != (undefined *)0x0) {
      lVar7 = *local_318;
      local_440 = (undefined *)0x0;
      do {
        do {
          if (*local_318 - lVar7 != 0) {
            _objc_enumerationMutation(*local_318 - lVar7,puVar2);
          }
          lVar10 = *(long *)(local_320 + (long)local_440 * 8);
          local_2e8 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar10);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_addObject__0269d180,local_2e8);
          }
          local_440 = local_440 + 1;
        } while (local_440 < local_438);
        local_438 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1d8,
                   0x10);
        local_440 = (undefined *)0x0;
      } while (local_438 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = local_2e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar4;
    local_1fc = 1;
    _objc_storeStrong(&local_2e0);
    _objc_storeStrong(&local_280,0);
    _objc_storeStrong(&local_210,0);
    _objc_storeStrong(&local_208,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar2;
    local_1fc = 1;
  }
  _objc_storeStrong(&local_1f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1e0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


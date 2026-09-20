// wcr_typeSlices:order: @ 01dacf98

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_typeSlices_order_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  uint local_454;
  uint local_43c;
  undefined *local_420;
  undefined *local_418;
  ulong local_3c8;
  ulong local_3c0;
  uint local_38c;
  undefined *local_370;
  undefined *local_368;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  ulong local_2f0;
  long local_2e8;
  undefined1 *local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  undefined8 local_298;
  byte local_289;
  long local_288;
  byte local_279;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  undefined *local_230;
  undefined *local_228;
  ulong local_220;
  long local_218;
  SEL local_210;
  ID local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  ulong local_1e0;
  ID local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_218 = 0;
  local_210 = param_2;
  local_208 = param_1;
  _objc_storeStrong(&local_218,param_3);
  local_220 = 0;
  _objc_storeStrong(&local_220,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_228 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar3;
  _memset(auStack_278,0,0x40);
  local_c0 = &cf_redpacket;
  local_b8 = &cf_transfer;
  local_b0 = &cf_pat;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_368 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_368 != (undefined *)0x0) {
    lVar10 = *local_268;
    local_370 = (undefined *)0x0;
    do {
      do {
        if (*local_268 - lVar10 != 0) {
          _objc_enumerationMutation(*local_268 - lVar10,puVar2);
        }
        uVar11 = *(ulong *)(local_270 + (long)local_370 * 8);
        local_238 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
        local_38c = 1;
        if ((uVar11 & 1) == 0) {
          uVar11 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
          local_38c = (uint)uVar11;
        }
        local_279 = (byte)local_38c & 1;
        local_289 = 0;
        bVar1 = true;
        if ((local_38c & 1) == 0) {
          lVar4 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,local_238);
          _objc_retainAutoreleasedReturnValue();
          local_289 = 1;
          local_288 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = lVar4 != 0;
        }
        if ((local_289 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_288);
        }
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_238);
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_238);
        }
        local_370 = local_370 + 1;
      } while (local_370 < local_368);
      local_368 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10)
      ;
      local_370 = (undefined *)0x0;
    } while (local_368 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_2d8,0,0x40);
  uVar11 = local_220;
  (*(code *)PTR__objc_retain_02578638)();
  local_3c0 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_140,0x10);
  if (local_3c0 != 0) {
    lVar10 = *local_2c8;
    local_3c8 = 0;
    do {
      do {
        if (*local_2c8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_2c8 - lVar10,uVar11);
        }
        local_298 = *(undefined8 *)(local_2d0 + local_3c8 * 8);
        puVar2 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_containsObject__0269cbb8,local_298);
        if (((ulong)puVar2 & 1) == 0) {
          lVar4 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,local_298);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_298);
            (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_298);
          }
        }
        local_3c8 = local_3c8 + 1;
      } while (local_3c8 < local_3c0);
      local_3c0 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_140,0x10
                );
      local_3c8 = 0;
    } while (local_3c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_2e8 = 0;
  local_2e0 = puVar2;
  _memset(auStack_330,0,0x40);
  puVar2 = local_228;
  (*(code *)PTR__objc_retain_02578638)();
  local_418 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_1c0,0x10);
  if (local_418 != (undefined *)0x0) {
    lVar10 = *local_320;
    local_420 = (undefined *)0x0;
    do {
      do {
        if (*local_320 - lVar10 != 0) {
          _objc_enumerationMutation(*local_320 - lVar10,puVar2);
        }
        local_2f0 = *(ulong *)(local_328 + (long)local_420 * 8);
        lVar4 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,local_2f0);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        uVar11 = local_2f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f0,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
        local_43c = 1;
        if ((uVar11 & 1) == 0) {
          uVar11 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f0,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
          local_43c = (uint)uVar11;
        }
        if ((lVar5 != 0) || ((local_43c & 1) != 0)) {
          local_454 = 1;
          if ((local_43c & 1) == 0) {
            uVar11 = local_2f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_isEqualToString__0269ccc8,&cf_pat)
            ;
            local_454 = (uint)uVar11;
          }
          puVar6 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_count_0269cfe0);
          puVar9 = local_2e0;
          if (((undefined1 *)((long)&MACH_HEADER.filetype + 1) < puVar6) && ((local_454 & 1) == 0))
          goto LAB_01dad93c;
          local_200 = &cf_key;
          local_1e0 = local_2f0;
          local_1f8 = &cf_name;
          IVar7 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_wcr_typeTitle__026c5040,local_2f0);
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = &cf_count;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1d8 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     lVar5);
          _objc_retainAutoreleasedReturnValue();
          local_1e8 = &cf_color;
          lVar4 = local_2e8;
          local_1d0 = puVar3;
          FUN_01dad9f8();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_1c8 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1e0,&local_200,4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(IVar7);
          local_2e8 = local_2e8 + 1;
          puVar9 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_count_0269cfe0);
          if ((undefined1 *)((long)&MACH_HEADER.filetype + 1) < puVar9) goto LAB_01dad93c;
        }
        local_420 = local_420 + 1;
      } while (local_420 < local_418);
      local_418 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_1c0,0x10
                );
      local_420 = (undefined *)0x0;
    } while (local_418 != (undefined *)0x0);
  }
LAB_01dad93c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar9 = local_2e0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_2e0);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_228,0);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_218,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


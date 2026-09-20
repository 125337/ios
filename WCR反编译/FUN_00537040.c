// FUN_00537040 @ 00537040

ulong FUN_00537040(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong local_440;
  ulong local_438;
  undefined *local_400;
  undefined *local_3f8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  undefined *local_250;
  int local_248;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_238 = 0;
  _objc_storeStrong(&local_238,param_1);
  uVar2 = local_238;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_238, (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_230 = 0;
    local_248 = 1;
  }
  else {
    local_68 = &cf_days;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xb4);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_tokens;
    local_80 = &cf_JSt_;
    local_78 = &cf_mQ_Ng;
    local_70 = &cf_6;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = &cf_days;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1e);
    _objc_retainAutoreleasedReturnValue();
    local_98 = &cf_tokens;
    local_c0 = &cf___;
    local_b8 = &cf_1;
    local_b0 = &cf_3;
    local_a8 = &cf_NAS_Y;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_90 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_88 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_a0,2);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = &cf_days;
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,7);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = &cf_tokens;
    local_f8 = &cf___;
    local_f0 = &cf_N_Y;
    local_e8 = &cf_7;
    puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_c8 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_e0,2);
    _objc_retainAutoreleasedReturnValue();
    local_118 = &cf_days;
    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    local_110 = &cf_tokens;
    local_128 = &cf_N_Y;
    local_120 = &cf_3;
    puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_108 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_128,
               2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_100 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_108,&local_118,2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_250 = puVar14;
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_298,0,0x40);
    puVar1 = local_250;
    (*(code *)PTR__objc_retain_02578638)();
    local_3f8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_1a8,0x10);
    if (local_3f8 != (undefined *)0x0) {
      lVar17 = *local_288;
      local_400 = (undefined *)0x0;
      do {
        do {
          if (*local_288 - lVar17 != 0) {
            _objc_enumerationMutation(*local_288 - lVar17,puVar1);
          }
          local_258 = *(ulong *)(local_290 + (long)local_400 * 8);
          _memset(auStack_2e0,0,0x40);
          uVar2 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_tokens);
          _objc_retainAutoreleasedReturnValue();
          local_438 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_438 != 0) {
            lVar18 = *local_2d0;
            local_440 = 0;
            do {
              do {
                if (*local_2d0 - lVar18 != 0) {
                  _objc_enumerationMutation(*local_2d0 - lVar18,uVar2);
                }
                local_2a0 = *(undefined8 *)(local_2d8 + local_440 * 8);
                uVar15 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_rangeOfString__0269d838,local_2a0);
                if (uVar15 != 0x7fffffffffffffff) {
                  uVar15 = local_258;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_days);
                  _objc_retainAutoreleasedReturnValue();
                  uVar16 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_230 = uVar16;
                  (*(code *)PTR__objc_release_02578630)(uVar15);
                  local_248 = 1;
                  goto LAB_00537ae0;
                }
                local_440 = local_440 + 1;
              } while (local_440 < local_438);
              local_438 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,
                         auStack_228,0x10);
              local_440 = 0;
            } while (local_438 != 0);
          }
          local_248 = 0;
LAB_00537ae0:
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_248 != 0) goto LAB_00537b74;
          local_400 = local_400 + 1;
        } while (local_400 < local_3f8);
        local_3f8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_1a8,
                   0x10);
        local_400 = (undefined *)0x0;
      } while (local_3f8 != (undefined *)0x0);
    }
    local_248 = 0;
LAB_00537b74:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_248 == 0) {
      local_230 = 0;
      local_248 = 1;
    }
    _objc_storeStrong(&local_250,0);
  }
  _objc_storeStrong(&local_238,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_230;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


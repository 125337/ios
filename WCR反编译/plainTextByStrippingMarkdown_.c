// plainTextByStrippingMarkdown: @ 009be6ac

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::plainTextByStrippingMarkdown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  cfstringStruct *pcVar34;
  long lVar35;
  undefined8 uVar36;
  undefined *local_530;
  undefined *local_528;
  cfstringStruct *local_350;
  undefined8 local_328;
  cfstringStruct *local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  cfstringStruct *local_2b8;
  undefined4 local_2ac;
  cfstringStruct *local_2a8;
  SEL local_2a0;
  ID local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  undefined8 local_280;
  undefined8 local_278;
  cfstringStruct *local_270;
  undefined1 auStack_268 [128];
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2a8 = (cfstringStruct *)0x0;
  local_2a0 = param_2;
  local_298 = param_1;
  _objc_storeStrong(&local_2a8,param_3);
  pcVar2 = local_2a8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_2a8, (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_length_0269cca0),
     pcVar2 = local_2a8, pcVar3 == (cfstringStruct *)0x0)) {
    if (local_2a8 == (cfstringStruct *)0x0) {
      local_350 = &::cf___;
    }
    else {
      local_350 = local_2a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = local_350;
    local_2ac = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = pcVar2;
    local_2c0 = 0x10;
    local_2c8 = 0;
    local_b0 = &cf______w_____n____s_S_______;
    local_a8 = &cf__1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = &cf__________;
    local_c0 = &cf__1;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_e0 = &cf_______________________;
    local_d8 = &cf__1;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_90 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf______________________;
    local_f0 = &cf__1;
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_88 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_e8 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_110 = &cf____1_6__s_;
    local_108 = &::cf___;
    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_80 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_2c0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_100 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_110,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_128 = &cf__>_s_;
    local_120 = &::cf___;
    puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_78 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_2c0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_118 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_128,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_140 = &cf___s_______s_;
    local_138 = &::cf___;
    puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_2c0);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_130 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_140,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_158 = &cf___s__d____s_;
    local_150 = &::cf___;
    puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_2c0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_148 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_158,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_170 = &cf________________;
    local_168 = &cf__1;
    puVar19 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_160 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_170,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_188 = &cf____________;
    local_180 = &cf__1;
    puVar21 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_178 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_188,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = &cf____________;
    local_198 = &cf__1;
    puVar23 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar22;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_190 = puVar23;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1a0,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = &cf________n_____;
    local_1b0 = &cf__1;
    puVar25 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar24;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1a8 = puVar25;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1b8,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = &cf___s_______3___s__;
    local_1c8 = &::cf___;
    puVar27 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar26;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_2c0);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1c0 = puVar27;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1d0,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = &cf__n_3__;
    local_1e0 = &::cf_newline_s_;
    puVar29 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1d8 = puVar29;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1e8,
               3);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar30;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,
               0xe);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = puVar31;
    (*(code *)PTR__objc_release_02578630)(puVar30);
    (*(code *)PTR__objc_release_02578630)(puVar29);
    (*(code *)PTR__objc_release_02578630)(puVar28);
    (*(code *)PTR__objc_release_02578630)(puVar27);
    (*(code *)PTR__objc_release_02578630)(puVar26);
    (*(code *)PTR__objc_release_02578630)(puVar25);
    (*(code *)PTR__objc_release_02578630)(puVar24);
    (*(code *)PTR__objc_release_02578630)(puVar23);
    (*(code *)PTR__objc_release_02578630)(puVar22);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
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
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_318,0,0x40);
    puVar1 = local_2d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_528 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_268,0x10);
    if (local_528 != (undefined *)0x0) {
      lVar35 = *local_308;
      local_530 = (undefined *)0x0;
      do {
        do {
          if (*local_308 - lVar35 != 0) {
            _objc_enumerationMutation(*local_308 - lVar35,puVar1);
          }
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          uVar36 = *(undefined8 *)(local_310 + (long)local_530 * 8);
          local_2d8 = uVar36;
          (*(code *)PTR__objc_msgSend_02578628)(uVar36,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          uVar32 = local_2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2d8,PTR_s_objectAtIndexedSubscript__0269cc78,2);
          _objc_retainAutoreleasedReturnValue();
          uVar33 = uVar32;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_328 = local_2c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_regularExpressionWithPattern_opt_0269ef10,uVar36,uVar33,&local_328
                    );
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_2c8,local_328);
          local_320 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(uVar32);
          (*(code *)PTR__objc_release_02578630)(uVar36);
          if ((local_320 == (cfstringStruct *)0x0) ||
             (pcVar34 = local_2b8,
             (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0),
             pcVar3 = local_2b8, pcVar2 = local_320, pcVar34 == (cfstringStruct *)0x0)) {
            local_2ac = 3;
          }
          else {
            pcVar34 = local_2b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
            local_280 = 0;
            local_278 = 0;
            uVar32 = local_2d8;
            local_288 = pcVar34;
            local_270 = pcVar34;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2d8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar3,0,0,pcVar34);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_2b8;
            local_2b8 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(uVar32);
            local_2ac = 0;
          }
          _objc_storeStrong(&local_320,0);
          local_530 = local_530 + 1;
        } while (local_530 < local_528);
        local_528 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_268,
                   0x10);
        local_530 = (undefined *)0x0;
      } while (local_528 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2b8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_2b8;
    local_2b8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2b8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_2b8;
    local_2b8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_2b8;
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_290 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_2ac = 1;
    _objc_storeStrong(&local_2d0);
    _objc_storeStrong(&local_2c8,0);
    _objc_storeStrong(&local_2b8,0);
  }
  _objc_storeStrong(&local_2a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_290;
}


// applyHighlightPreservingSelection @ 01edfd24

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLCodeEditorViewController::applyHighlightPreservingSelection
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
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
  cfstringStruct *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *local_460;
  undefined *local_458;
  undefined *local_328;
  undefined *local_318;
  cfstringStruct *local_2e8;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 local_278;
  cfstringStruct *local_270;
  undefined8 local_268;
  undefined *local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  undefined *local_210;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  cfstringStruct *local_1c8;
  SEL local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  cfstringStruct *local_198;
  undefined1 auStack_190 [128];
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = param_2;
  local_1b8 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_2e8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_2e8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = local_2e8;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puVar4 = PTR_s_selectedRange_026a43a0;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1d8 = puVar3;
  puStack_1d0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1e9 = 0;
  local_1f9 = 0;
  local_318 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_328 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
    _objc_retainAutoreleasedReturnValue();
    local_1e9 = 1;
    local_1e8 = local_328;
    if (local_328 == (undefined *)0x0) {
      local_328 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_1f9 = 1;
      local_1f8 = local_328;
    }
    local_318 = local_328;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = local_318;
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
  }
  if ((local_1e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  pcVar1 = local_1c8;
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_38 = local_1e0;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithString_attributes__026a02b0,pcVar1);
  local_208 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_90 = &cf_pattern;
  local_80 = &cf_<___[_s_S]*___>;
  local_88 = &cf_color;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_90,2);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_pattern;
  local_a0 = &cf_<__[_>__>;
  local_a8 = &cf_color;
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_98 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a0,&local_b0,2);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_pattern;
  local_c0 = &cf__b_function_const_let_var_return_if_else_for_while_class_new_document_window__b;
  local_c8 = &cf_color;
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_c0,&local_d0,2);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_pattern;
  local_e0 = &cf________________;
  local_e8 = &cf_color;
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d8 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e0,&local_f0,2);
  _objc_retainAutoreleasedReturnValue();
  local_110 = &cf_pattern;
  local_100 = &cf___0_9a_fA_F__3_8_;
  local_108 = &cf_color;
  puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_f8 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_100,&local_110,2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,5);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar12;
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_258,0,0x40);
  puVar2 = local_210;
  (*(code *)PTR__objc_retain_02578638)();
  local_458 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_190,0x10);
  if (local_458 != (undefined *)0x0) {
    lVar14 = *local_248;
    local_460 = (undefined *)0x0;
    do {
      do {
        if (*local_248 - lVar14 != 0) {
          _objc_enumerationMutation(*local_248 - lVar14,puVar2);
        }
        puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        uVar15 = *(undefined8 *)(local_250 + (long)local_460 * 8);
        local_218 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar15,PTR_s_objectForKeyedSubscript__0269d098,&cf_pattern);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_regularExpressionWithPattern_opt_0269ef10);
        _objc_retainAutoreleasedReturnValue();
        local_260 = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar15);
        uVar15 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_1c8;
        puVar3 = local_260;
        pcVar13 = local_1c8;
        local_268 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
        puVar4 = local_208;
        local_1a8 = 0;
        local_1a0 = 0;
        local_278 = 0;
        local_2a8 = PTR___NSConcreteGlobalBlock_02578658;
        local_2a0 = 0xd0800000;
        local_29c = 0;
        local_298 = FUN_01ee0994;
        local_290 = &DAT_0257a2a8;
        local_270 = pcVar13;
        local_1b0 = pcVar13;
        local_198 = pcVar13;
        (*(code *)PTR__objc_retain_02578638)();
        uVar15 = local_268;
        local_288 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_280 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar1,0,local_278,
                   local_270,&local_2a8);
        _objc_storeStrong(&local_280,0);
        _objc_storeStrong(&local_288,0);
        _objc_storeStrong(&local_268,0);
        _objc_storeStrong(&local_260,0);
        local_460 = local_460 + 1;
      } while (local_460 < local_458);
      local_458 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_190,0x10
                );
      local_460 = (undefined *)0x0;
    } while (local_458 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_1d8;
  puVar3 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (puVar2 <= puVar5) {
    puVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_210);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


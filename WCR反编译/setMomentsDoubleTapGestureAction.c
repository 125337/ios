// setMomentsDoubleTapGestureAction @ 01c1389c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::setMomentsDoubleTapGestureAction(ID param_1,SEL param_2)

{
  char *pcVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ID IVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *local_480;
  undefined *local_478;
  undefined *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  code *local_2b8;
  undefined *local_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 local_2a0;
  undefined **local_298;
  undefined1 auStack_290 [8];
  undefined *local_288;
  undefined8 local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined *local_230;
  char *local_228;
  char *local_220;
  SEL local_218;
  ID local_210;
  undefined1 auStack_208 [128];
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
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
  pcVar1 = "WCUIActionSheet";
  local_218 = param_2;
  local_210 = param_1;
  _objc_getClass();
  local_220 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = &cf_title;
    local_78 = &cf_p_;
    local_80 = &cf_action;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_228 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = &cf_title;
    local_98 = &::cf__;
    local_a0 = &cf_action;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_90 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_98,&local_a8,2);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = &cf_title;
    local_b8 = &cf__O_;
    local_c0 = &cf_action;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = &cf_title;
    local_d8 = &cf_lSO;
    local_e0 = &cf_action;
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
    _objc_retainAutoreleasedReturnValue();
    local_108 = &cf_title;
    local_f8 = &cf_lgSW;
    local_100 = &cf_action;
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_f0 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
    _objc_retainAutoreleasedReturnValue();
    local_128 = &cf_title;
    local_118 = &cf_O__lS;
    local_120 = &cf_action;
    puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_110 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_118,&local_128,2);
    _objc_retainAutoreleasedReturnValue();
    local_148 = &cf_title;
    local_138 = &cf_OX_vQ;
    local_140 = &cf_action;
    puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_130 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2);
    _objc_retainAutoreleasedReturnValue();
    local_168 = &cf_title;
    local_158 = &cf_Rddky;
    local_160 = &cf_action;
    puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,7);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_150 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_168,2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_230 = puVar19;
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
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_230;
    local_188 = &cf_title;
    local_178 = &cf_RUS;
    local_180 = &cf_action;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_170 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_178,&local_188,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_278,0,0x40);
    puVar2 = local_230;
    (*(code *)PTR__objc_retain_02578638)();
    local_478 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_208,0x10);
    if (local_478 != (undefined *)0x0) {
      lVar24 = *local_268;
      local_480 = (undefined *)0x0;
      do {
        do {
          if (*local_268 - lVar24 != 0) {
            _objc_enumerationMutation(*local_268 - lVar24,puVar2);
          }
          uVar25 = *(undefined8 *)(local_270 + (long)local_480 * 8);
          local_238 = uVar25;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar25,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar25;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar25);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_280 = uVar20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_selectMomentsDoubleTapOption_ld_);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          _NSSelectorFromString();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_288 = puVar4;
          _objc_initWeak(auStack_290,local_210);
          ppuVar21 = &local_2c8;
          local_2c8 = PTR___NSConcreteStackBlock_02578660;
          local_2c0 = 0xc2000000;
          local_2bc = 0;
          local_2b8 = FUN_01c14520;
          local_2b0 = &DAT_0258bb40;
          local_2a0 = local_280;
          _objc_copyWeak(auStack_2a8,auStack_290);
          _objc_retainBlock();
          ppuVar22 = ppuVar21;
          _imp_implementationWithBlock();
          (*(code *)PTR__objc_release_02578630)(ppuVar21);
          IVar23 = local_210;
          local_298 = ppuVar22;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_class_0269cd60);
          _class_replaceMethod(IVar23,local_288,local_298,"v@:@");
          pcVar1 = local_228;
          uVar20 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,uVar20,local_210,local_288);
          (*(code *)PTR__objc_release_02578630)(uVar20);
          _objc_destroyWeak(auStack_2a8);
          _objc_destroyWeak(auStack_290);
          local_480 = local_480 + 1;
        } while (local_480 < local_478);
        local_478 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_208,
                   0x10);
        local_480 = (undefined *)0x0;
      } while (local_478 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_228,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_228;
    IVar23 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar23);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_228,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


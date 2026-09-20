// setMomentsLeftSwipeAction @ 01c1e05c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::setMomentsLeftSwipeAction(ID param_1,SEL param_2)

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
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  ID IVar25;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  undefined *local_218;
  undefined **local_210;
  undefined1 auStack_208 [8];
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  char *local_1d0;
  SEL local_1c8;
  ID local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
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
  pcVar1 = "WCUIActionSheet";
  local_1c8 = param_2;
  local_1c0 = param_1;
  _objc_getClass();
  local_1d0 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = &cf_title;
    local_88 = &cf_US;
    local_90 = &cf_value;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_1d8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_88,&local_98);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = &cf_title;
    local_a8 = &cf_p_;
    local_b0 = &cf_value;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a8,&local_b8,2);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = &cf_title;
    local_c8 = &::cf__;
    local_d0 = &cf_value;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_c0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_d8,2);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_title;
    local_e8 = &cf__O_;
    local_f0 = &cf_value;
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_e0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_f8,2);
    _objc_retainAutoreleasedReturnValue();
    local_118 = &cf_title;
    local_108 = &cf_lSO;
    local_110 = &cf_value;
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_100 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_108,&local_118,2);
    _objc_retainAutoreleasedReturnValue();
    local_138 = &cf_title;
    local_128 = &cf_lgSW;
    local_130 = &cf_value;
    puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_120 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_128,&local_138,2);
    _objc_retainAutoreleasedReturnValue();
    local_158 = &cf_title;
    local_148 = &cf_O__lS;
    local_150 = &cf_value;
    puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,6);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_140 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_148,&local_158,2);
    _objc_retainAutoreleasedReturnValue();
    local_178 = &cf_title;
    local_168 = &cf_OX_vQ;
    local_170 = &cf_value;
    puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,9);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_160 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_168,&local_178,2);
    _objc_retainAutoreleasedReturnValue();
    local_198 = &cf_title;
    local_188 = &cf_Rddky;
    local_190 = &cf_value;
    puVar18 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_180 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_188,&local_198,2);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = &cf_title;
    local_1a8 = &cf_e;
    local_1b0 = &cf_value;
    puVar20 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_1a0 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1a8,&local_1b8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,
               10);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar22;
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
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    for (local_1e8 = (undefined *)0x0; puVar2 = local_1e8, puVar3 = local_1e0,
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_1e8 = local_1e8 + 1) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectLeftSwipeOption_ld_);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = puVar2;
      _NSSelectorFromString();
      puVar3 = local_1e0;
      local_1f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_200 = puVar4;
      _objc_initWeak(auStack_208,local_1c0);
      ppuVar23 = &local_240;
      local_240 = PTR___NSConcreteStackBlock_02578660;
      local_238 = 0xc2000000;
      local_234 = 0;
      local_230 = FUN_01c1ecb8;
      local_228 = &DAT_0258bb40;
      local_218 = local_200;
      _objc_copyWeak(auStack_220,auStack_208);
      _objc_retainBlock();
      ppuVar24 = ppuVar23;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar23);
      IVar25 = local_1c0;
      local_210 = ppuVar24;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar25,local_1f8,local_210,"v@:@");
      pcVar1 = local_1d8;
      puVar2 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1e8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,puVar3,local_1c0,local_1f8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_220);
      _objc_destroyWeak(auStack_208);
      _objc_storeStrong(&local_1f0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_1d8;
    IVar25 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar25);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


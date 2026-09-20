// setMomentsLongPressGestureAction @ 01c14ad0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::setMomentsLongPressGestureAction(ID param_1,SEL param_2)

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
  undefined **ppuVar19;
  undefined **ppuVar20;
  ID IVar21;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  undefined *local_1c8;
  undefined **local_1c0;
  undefined1 auStack_1b8 [8];
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  char *local_188;
  char *local_180;
  SEL local_178;
  ID local_170;
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
  local_178 = param_2;
  local_170 = param_1;
  _objc_getClass();
  local_180 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = &cf_title;
    local_78 = &::cf__;
    local_80 = &cf_value;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_188 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = &cf_title;
    local_98 = &cf_p_;
    local_a0 = &cf_value;
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
    local_c0 = &cf_value;
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
    local_e0 = &cf_value;
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
    _objc_retainAutoreleasedReturnValue();
    local_108 = &cf_title;
    local_f8 = &cf_lgSW;
    local_100 = &cf_value;
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_f0 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
    _objc_retainAutoreleasedReturnValue();
    local_128 = &cf_title;
    local_118 = &cf_O__lS;
    local_120 = &cf_value;
    puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_110 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_118,&local_128,2);
    _objc_retainAutoreleasedReturnValue();
    local_148 = &cf_title;
    local_138 = &cf_OX_vQ;
    local_140 = &cf_value;
    puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,7);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_130 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2);
    _objc_retainAutoreleasedReturnValue();
    local_168 = &cf_title;
    local_158 = &cf_Rddky;
    local_160 = &cf_value;
    puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,6);
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
    local_190 = puVar18;
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
    for (local_198 = (undefined *)0x0; puVar2 = local_198, puVar3 = local_190,
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_198 = local_198 + 1) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectLongPressGestureOption_ld_);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar2;
      _NSSelectorFromString();
      puVar3 = local_190;
      local_1a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_objectAtIndexedSubscript__0269cc78,local_198);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_1b0 = puVar4;
      _objc_initWeak(auStack_1b8,local_170);
      ppuVar19 = &local_1f0;
      local_1f0 = PTR___NSConcreteStackBlock_02578660;
      local_1e8 = 0xc2000000;
      local_1e4 = 0;
      local_1e0 = FUN_01c155b4;
      local_1d8 = &DAT_0258bb40;
      local_1c8 = local_1b0;
      _objc_copyWeak(auStack_1d0,auStack_1b8);
      _objc_retainBlock();
      ppuVar20 = ppuVar19;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar19);
      IVar21 = local_170;
      local_1c0 = ppuVar20;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar21,local_1a8,local_1c0,"v@:@");
      pcVar1 = local_188;
      puVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_objectAtIndexedSubscript__0269cc78,local_198);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,puVar3,local_170,local_1a8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_1d0);
      _objc_destroyWeak(auStack_1b8);
      _objc_storeStrong(&local_1a0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_188;
    IVar21 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar21);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_188,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


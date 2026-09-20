// buildQuickRows @ 01ab5c70

/* Function Stack Size: 0x10 bytes */

ID WCRGroupListViewController::buildQuickRows(ID param_1,SEL param_2)

{
  ID IVar1;
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
  undefined *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
  if (IVar1 == 1) {
    local_70 = &cf_title;
    local_50 = &::cf__;
    local_68 = &cf_scope;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = &cf_quickType;
    local_40 = &cf_scope;
    local_58 = &cf_added;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&::cf__,0x80);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_70,4);
    _objc_retainAutoreleasedReturnValue();
    local_228 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
    if (IVar1 == 2) {
      local_e0 = &cf_title;
      local_c0 = &cf_n_vvJ_Y;
      local_d8 = &cf_scope;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_d0 = &cf_quickType;
      local_b0 = &cf_scope;
      local_c8 = &cf_added;
      IVar1 = param_1;
      local_b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf_n_vvJ_Y,0x20);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_120 = &cf_title;
      local_100 = &cf__gmo_;
      local_118 = &cf_scope;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_a0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_110 = &cf_quickType;
      local_f0 = &cf_scope;
      local_108 = &cf_added;
      IVar1 = param_1;
      local_f8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf__gmo_,0x40);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithBool__0269ce60,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_e8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_100,&local_120,4);
      _objc_retainAutoreleasedReturnValue();
      local_160 = &cf_title;
      local_140 = &cf_bSvJ_Y;
      local_158 = &cf_scope;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_98 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_150 = &cf_quickType;
      local_130 = &cf_chatBox;
      local_148 = &cf_added;
      IVar1 = param_1;
      local_138 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf_bSvJ_Y,2);
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_numberWithBool__0269ce60,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_128 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_140,&local_160,4);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = &cf_title;
      local_180 = &cf_lQOS;
      local_198 = &cf_scope;
      puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_90 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_190 = &cf_quickType;
      local_170 = &cf_scope;
      local_188 = &cf_added;
      IVar1 = param_1;
      local_178 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf_lQOS,0x10);
      (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_numberWithBool__0269ce60,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_168 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_180,&local_1a0,4);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = &cf_title;
      local_1c0 = &cf_gRS;
      local_1d8 = &cf_scope;
      puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_88 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_1d0 = &cf_quickType;
      local_1b0 = &cf_scope;
      local_1c8 = &cf_added;
      IVar1 = param_1;
      local_1b8 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf_gRS,8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_numberWithBool__0269ce60,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_1a8 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1c0,&local_1e0,4);
      _objc_retainAutoreleasedReturnValue();
      local_220 = &cf_title;
      local_200 = &cf_ON_OT_N;
      local_218 = &cf_scope;
      puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_80 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_210 = &cf_quickType;
      local_1f0 = &cf_scope;
      local_208 = &cf_added;
      local_1f8 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf_ON_OT_N,4);
      (*(code *)PTR__objc_msgSend_02578628)(puVar18,PTR_s_numberWithBool__0269ce60,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_1e8 = puVar18;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_200,&local_220,4);
      _objc_retainAutoreleasedReturnValue();
      local_228 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_78 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0
                 ,6);
      _objc_retainAutoreleasedReturnValue();
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
    }
    else {
      local_228 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_228;
}


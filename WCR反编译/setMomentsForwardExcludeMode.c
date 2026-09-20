// setMomentsForwardExcludeMode @ 01c11c78

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::setMomentsForwardExcludeMode(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ID IVar11;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined1 auStack_108 [8];
  undefined *local_100;
  undefined **local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  char *local_c0;
  char *local_b8;
  SEL local_b0;
  ID local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCUIActionSheet";
  local_b0 = param_2;
  local_a8 = param_1;
  _objc_getClass();
  local_b8 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = &cf_title;
    local_50 = &cf_S_O;
    local_58 = &cf_value;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_60);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_title;
    local_70 = &cf_ch__;
    local_78 = &cf_value;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_80,2);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = &cf_title;
    local_90 = &cf__N;
    local_98 = &cf_value;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_88 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_a0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    for (local_d0 = (undefined *)0x0; puVar2 = local_d0, puVar3 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_d0 = local_d0 + 1) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectMomentsForwardExcludeMode_ld_);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar2;
      _NSSelectorFromString();
      puVar3 = local_c8;
      local_e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_e8 = puVar4;
      _objc_initWeak(auStack_f0,local_a8);
      ppuVar9 = &local_128;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc2000000;
      local_11c = 0;
      local_118 = FUN_01c123b0;
      local_110 = &DAT_0258bb40;
      local_100 = local_e8;
      _objc_copyWeak(auStack_108,auStack_f0);
      _objc_retainBlock();
      ppuVar10 = ppuVar9;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      IVar11 = local_a8;
      local_f8 = ppuVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar11,local_e0,local_f8,"v@:@");
      pcVar1 = local_c0;
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,puVar3,local_a8,local_e0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_f0);
      _objc_storeStrong(&local_d8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_c0;
    IVar11 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar11);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


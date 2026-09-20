// FUN_005815a8 @ 005815a8

void FUN_005815a8(long param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  cfstringStruct *local_1f8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  char *local_b0 [3];
  undefined *local_98;
  char *local_90;
  long local_88;
  long local_80;
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
  pcVar2 = "WCUIActionSheet";
  local_88 = param_1;
  local_80 = param_1;
  _objc_getClass();
  local_90 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    puVar3 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_005820e8();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_90;
    local_98 = puVar5;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b0[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_s_onLoopCount2_026a5400;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_onLoopCount3_026a5408;
    local_78 = puVar3;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_s_onLoopCount5_026a5410;
    local_70 = puVar4;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_onLoopCount10_026a5418;
    local_68 = puVar5;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_s_onLoopCountUnlimited_026a5420;
    local_60 = puVar6;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    for (local_c8 = (undefined *)0x0; puVar3 = local_c8, puVar4 = local_b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0), pcVar2 = local_b0[0],
        puVar3 < puVar4; local_c8 = local_c8 + 1) {
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_d0 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        local_1f8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_qQ);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_1f8;
      }
      else {
        local_1f8 = &cf_NP_kpe;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_1f8;
      if (puVar4 != (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      if (local_d0 == local_98) {
        pcVar9 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_d8;
        local_d8 = pcVar9;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar2 = local_b0[0];
      pcVar1 = local_d8;
      lVar10 = param_1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,lVar10,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(lVar10);
      _objc_storeStrong(&local_d8,0);
    }
    lVar10 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf__IN_kpe,lVar10,
               PTR_s_onLoopCountCustom_026a5428);
    (*(code *)PTR__objc_release_02578630)(lVar10);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0[0],PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_b0[0];
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar10 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(lVar10);
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


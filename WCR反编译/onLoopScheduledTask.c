// onLoopScheduledTask @ 00582268

/* Function Stack Size: 0x10 bytes */

void WCRMomentsScheduledTaskListViewController::onLoopScheduledTask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined *local_a0;
  SEL local_98;
  ID local_90;
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
  local_98 = param_2;
  local_90 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_a0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_b0 = 1;
  }
  else {
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    local_b8 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_b0 = 1;
    }
    else {
      puVar1 = local_a0;
      FUN_00582d30();
      pcVar2 = local_b8;
      local_c0 = puVar1;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_YEN_s);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_c8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xf);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1e);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x3c);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x78);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x168);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5a0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_s_onLoopInterval15_026a5430;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_s_onLoopInterval30_026a5438;
      local_88 = puVar1;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_s_onLoopInterval60_026a5440;
      local_80 = puVar3;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_s_onLoopInterval120_026a5448;
      local_78 = puVar4;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_s_onLoopInterval360_026a5450;
      local_70 = puVar5;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_s_onLoopInterval1440_026a5458;
      local_68 = puVar6;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_e0 = (undefined *)0x0;
      while( true ) {
        puVar1 = local_e0;
        puVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
        if (puVar3 <= puVar1) break;
        puVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_e8 = puVar3;
        FUN_00582f2c();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_a0;
        local_f0 = puVar3;
        FUN_0057aaf8();
        if ((((ulong)puVar1 & 1) != 0) && (local_e8 == local_c0)) {
          puVar3 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_f0;
          local_f0 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        IVar9 = local_90;
        pcVar2 = local_c8;
        puVar1 = local_f0;
        puVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,puVar1,IVar9,puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_f0,0);
        local_e0 = local_e0 + 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_addBtnTitle_target_sel__0269d278,&cf__IN,local_90,
                 PTR_s_onLoopIntervalCustom_026a5460);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar2 = local_c8;
      IVar9 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      local_b0 = 0;
    }
  }
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


// FUN_01e8b9c8 @ 01e8b9c8

void FUN_01e8b9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_queue_t pdVar8;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_94;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_1;
  _objc_storeStrong(&local_78);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_3);
  lVar1 = param_1 + 0x28;
  local_88 = param_1;
  _objc_loadWeakRetained();
  local_90 = lVar1;
  if ((((lVar1 == 0) || (local_78 == 0)) || (local_80 != 0)) ||
     ((uVar2 = DAT_028e47d8,
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e47d8,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
      (uVar2 & 1) == 0 ||
      (uVar2 = DAT_028e47e0,
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
      (uVar2 & 1) == 0)))) {
    local_94 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_01e891d8();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setAttemptedWebSnapshotSignature_026c70c0,uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setWebSnapshotSignature__026c70b8,local_a0)
    ;
    uStack_b8 = *(undefined8 *)(param_1 + 0x38);
    local_c0 = *(undefined8 *)(param_1 + 0x30);
    local_b0 = local_c0;
    uStack_a8 = uStack_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,uStack_b8,local_90,PTR_s_setWebSnapshotViewportSize__026c7298);
    lVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_webSnapshotImageView_026c6ec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_68 = &cf_signature;
    local_48 = local_a0;
    local_60 = &cf_width;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_height;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_style;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
               *(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pdVar8 = _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_78;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01e8be4c;
    local_e0 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_c8;
    local_d8 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = puVar4;
    _dispatch_async(pdVar8,&local_f8);
    (*(code *)PTR__objc_release_02578630)(pdVar8);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_a0,0);
    local_94 = 0;
  }
  _objc_storeStrong(&local_90,0);
  if (local_94 == 0) {
    local_94 = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


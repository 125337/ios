// FUN_00f1f09c @ 00f1f09c

void FUN_00f1f09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *local_118;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_1);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  pcVar2 = local_a8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_a8 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    else {
      local_118 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_118;
    local_b4 = 1;
  }
  else {
    local_98 = &cf___WCR_DATE_FMT_WEEKDAY_EN__;
    uVar3 = local_b0;
    FUN_00f206dc();
    _objc_retainAutoreleasedReturnValue();
    local_90 = &cf___WCR_DATE_FMT_WEEKDAY_ZH__;
    uVar4 = local_b0;
    local_60 = uVar3;
    FUN_00f207b8();
    _objc_retainAutoreleasedReturnValue();
    local_88 = &cf___WCR_DATE_FMT_WEEKDAY_ZH_SHORT__;
    uVar5 = local_b0;
    local_58 = uVar4;
    FUN_00f20894();
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf___WCR_DATE_FMT_MERIDIEM_LOWER__;
    uVar6 = local_b0;
    local_50 = uVar5;
    FUN_00f20970();
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf___WCR_DATE_FMT_MERIDIEM_UPPER__;
    uVar7 = local_b0;
    local_48 = uVar6;
    FUN_00f20a74();
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf___WCR_DATE_FMT_MERIDIEM_ZH__;
    uVar8 = local_b0;
    local_40 = uVar7;
    FUN_00f20b78();
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf___WCR_DATE_FMT_DAY_PERIOD__;
    uVar9 = local_b0;
    local_38 = uVar8;
    FUN_00f20c7c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    pcVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_mutableCopy_0269d8a0);
    puVar1 = local_c0;
    local_f0 = PTR___NSConcreteGlobalBlock_02578658;
    local_e8 = 0xd0800000;
    local_e4 = 0;
    local_e0 = FUN_00f21120;
    local_d8 = &DAT_025821d8;
    local_c8 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_f0);
    pcVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = pcVar2;
    local_b4 = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_008bf7a0 @ 008bf7a0

void FUN_008bf7a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_130;
  undefined *local_d8;
  undefined *local_c8;
  bool local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  byte local_61;
  undefined *local_60;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_1);
  puVar2 = local_40;
  local_61 = 0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (local_40 == (undefined *)0x0) {
      local_d8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_30 = local_40;
      local_d8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_d8;
    }
    local_c8 = local_d8;
  }
  else {
    local_c8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = 1;
    local_38 = puVar2;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_98 = PTR___NSConcreteGlobalBlock_02578658;
    local_90 = 0xd0800000;
    local_8c = 0;
    local_88 = FUN_008bfc10;
    local_80 = &DAT_0257aa90;
    local_70 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_98);
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_130 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_130 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      local_a0 = local_130;
    }
    local_a1 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_130;
    if (local_a1) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    local_68 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}


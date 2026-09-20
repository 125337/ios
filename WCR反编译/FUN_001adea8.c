// FUN_001adea8 @ 001adea8

void FUN_001adea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_c8;
  bool local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UINavigationItem_026ce3d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationItem_026ce3d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = 1;
    local_28 = puVar2;
    goto LAB_001ae1b4;
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rightBarButtonItems_0269eab0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
LAB_001ae064:
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rightBarButtonItem_0269feb8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_c8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_c8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_20 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_c8;
    }
    local_59 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_c8;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_40 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    puVar2 = local_48;
    if (puVar1 == (undefined *)0x0) goto LAB_001ae064;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_40 = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_001ae1b4:
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}


// FUN_008d8394 @ 008d8394

void FUN_008d8394(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_118;
  undefined *local_e8;
  undefined *local_80;
  undefined *local_70;
  undefined *local_68 [3];
  undefined4 local_4c;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  puVar3 = local_40;
  if (local_48 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar3;
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_40;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) == 0) {
        bVar1 = local_40 == (undefined *)0x0;
        if (bVar1) {
          local_30 = local_48;
          local_118 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_30,1);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_118;
        }
        else {
          local_118 = local_40;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = local_118;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        local_4c = 1;
      }
      else {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
        local_e8 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_70 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68[0] = local_e8;
        if (puVar3 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addObject__0269d180,local_48);
        puVar3 = local_68[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = puVar3;
        local_4c = 1;
        _objc_storeStrong(local_68,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_48);
      puVar3 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = puVar3;
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


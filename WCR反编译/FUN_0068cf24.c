// FUN_0068cf24 @ 0068cf24

void FUN_0068cf24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_188;
  undefined *local_180;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined4 local_e8;
  long local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar2 = local_d0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_d8 < 0)) {
    local_e8 = 1;
  }
  else {
    FUN_0068d2e0(local_d0);
    _memset(auStack_130,0,0x40);
    local_c8 = &cf_shop;
    local_c0 = &cf_shop_info;
    local_b8 = &cf_shop_data;
    local_b0 = &cf_current_shop;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != (undefined *)0x0) {
      lVar4 = *local_120;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,puVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_188 * 8);
          uVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_f0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_138 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar2 & 1) != 0) {
            FUN_0068cf24(local_138,local_d8 + -1);
          }
          _objc_storeStrong(&local_138,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_e8 = 0;
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_003e3354 @ 003e3354

void FUN_003e3354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8 [3];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = 0;
  local_d8 = param_1;
  local_d0 = param_1;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_UTF8String_026a2e68);
  _sel_registerName();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = 1;
  local_e0 = uVar2;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 2;
  local_48 = uVar1;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 3;
  local_40 = uVar2;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 4;
  local_38 = uVar3;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_f8[0] = puVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_140,0,0x40);
  puVar5 = local_f8[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,0x10);
  if (local_1b8 != (undefined *)0x0) {
    lVar6 = *local_130;
    local_1c0 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar6 != 0) {
          _objc_enumerationMutation(*local_130 - lVar6,puVar5);
        }
        uVar2 = *(undefined8 *)(local_138 + (long)local_1c0 * 8);
        local_100 = uVar2;
        _NSClassFromString();
        FUN_003e3774(uVar2,local_e0);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,0x10)
      ;
      local_1c0 = (undefined *)0x0;
    } while (local_1b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_004bf978 @ 004bf978

void FUN_004bf978(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_238;
  undefined *local_200;
  undefined *local_1f8;
  long local_168;
  long local_160;
  undefined4 local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8 [3];
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar7 = local_c8;
  FUN_004c1b44();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar7;
  if (lVar7 == 0) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e8[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_f1 = 0;
    local_101 = 0;
    puVar2 = local_e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
    bVar1 = false;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      bVar1 = puVar2 != (undefined *)0x0;
      local_100 = puVar2;
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if (bVar1) {
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_e8[0];
      local_e8[0] = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _memset(auStack_150,0,0x40);
    puVar2 = local_e8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,0x10);
    if (local_1f8 != (undefined *)0x0) {
      lVar7 = *local_140;
      local_200 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar7 != 0) {
            _objc_enumerationMutation(*local_140 - lVar7,puVar2);
          }
          lVar8 = *(long *)(local_148 + (long)local_200 * 8);
          local_110 = lVar8;
          FUN_004c1b44();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = local_d0;
          local_d0 = lVar8;
          (*(code *)PTR__objc_release_02578630)(lVar6);
          if (local_d0 != 0) {
            local_154 = 2;
            goto LAB_004bfed8;
          }
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,
                   0x10);
        local_200 = (undefined *)0x0;
      } while (local_1f8 != (undefined *)0x0);
    }
    local_154 = 0;
LAB_004bfed8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(local_e8,0);
  }
  if (local_d0 == 0) {
    local_154 = 1;
  }
  else {
    lVar7 = local_d0;
    FUN_004c17f8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      local_238 = &local_d0;
    }
    else {
      local_238 = &local_160;
    }
    lVar6 = *local_238;
    local_160 = lVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_wcrefine_attachLongPressToView__026a3ef0,lVar6);
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


// FUN_006e0238 @ 006e0238

void FUN_006e0238(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_208;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_b8;
  local_c0 = puVar2;
  _objc_getAssociatedObject(local_b8,&DAT_028cc300);
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = puVar3;
  if ((local_c0 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
    local_dc = 1;
  }
  else {
    puVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rightBarButtonItems_0269eab0);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    bVar1 = false;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rightBarButtonItem_0269feb8);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      bVar1 = puVar2 != (undefined *)0x0;
      local_f0 = puVar2;
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if (bVar1) {
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rightBarButtonItem_0269feb8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_e8;
      local_e8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_dc = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 0;
      local_100 = puVar2;
      _memset(auStack_150,0,0x40);
      puVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,0x10)
      ;
      if (local_1d0 != (undefined *)0x0) {
        lVar5 = *local_140;
        local_1d8 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar5 != 0) {
              _objc_enumerationMutation(*local_140 - lVar5,puVar2);
            }
            local_110 = *(undefined **)(local_148 + (long)local_1d8 * 8);
            if (local_110 == local_d8[0]) {
              local_101 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_110);
            }
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,
                     0x10);
          local_1d8 = (undefined *)0x0;
        } while (local_1d0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_101 & 1) == 0) {
        local_dc = 1;
      }
      else {
        puVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_208 = (undefined *)0x0;
        }
        else {
          local_208 = local_100;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setRightBarButtonItems__0269eac8,local_208);
        local_dc = 0;
      }
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


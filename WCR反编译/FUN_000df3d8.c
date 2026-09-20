// FUN_000df3d8 @ 000df3d8

void FUN_000df3d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_1f0;
  ulong local_1e8;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0 [3];
  undefined4 local_c4;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = (undefined *)(param_1 + 0x30);
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_loadWeakRetained();
  local_c0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_c4 = 1;
  }
  else {
    _objc_getAssociatedObject(puVar1,&DAT_028c837f);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = *(undefined **)(param_1 + 0x38);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 == puVar4) {
      _objc_setAssociatedObject(0,local_c0,&DAT_028c837a,0,1);
      puVar1 = local_c0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                 *(undefined4 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&DAT_028c837d,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_c0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                 *(undefined4 *)(param_1 + 0x44));
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&DAT_028c837e,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_c0,&DAT_028c837c,*(undefined8 *)(param_1 + 0x20),1);
      puVar1 = local_c0;
      if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar1,&DAT_028c8379,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar1 = local_c0;
      _objc_getAssociatedObject(local_c0,&DAT_028c837b);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_e0[0];
        local_e0[0] = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_c0,&DAT_028c837b,local_e0[0],1);
      }
      _memset(auStack_128,0,0x40);
      uVar3 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_1e8 != 0) {
        lVar5 = *local_118;
        local_1f0 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar3);
            }
            local_e8 = *(undefined8 *)(local_120 + local_1f0 * 8);
            puVar1 = local_c0;
            FUN_000dfb38(local_c0,local_e8);
            _objc_retainAutoreleasedReturnValue();
            local_130 = puVar1;
            if (puVar1 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,puVar1);
            }
            _objc_storeStrong(&local_130,0);
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1f0 = 0;
        } while (local_1e8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_count_0269cfe0);
      _NSLog(&
             cf__wcr__chat_member_search_file_loaddonecontroller__pbatch__luall__luend__dcursor__u__u
            );
      puVar1 = local_c0;
      FUN_000dc544();
      if (((ulong)puVar1 & 1) != 0) {
        FUN_000dfeb0(local_c0);
        FUN_000dc7ac(local_c0,0);
      }
      _objc_storeStrong(local_e0,0);
      local_c4 = 0;
    }
    else {
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


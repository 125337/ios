// FUN_006b9234 @ 006b9234

long FUN_006b9234(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1a8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0 [3];
  long local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  if (local_b8 == (undefined *)0x0) {
    local_b0 = 0;
  }
  else {
    local_c8 = 0;
    puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_b8;
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0[0] = puVar1;
      _objc_setAssociatedObject(puVar1,&DAT_028cc1b8,0,3);
      _objc_setAssociatedObject(local_e0[0],&DAT_028cc1b9,0,3);
      _objc_storeStrong(local_e0,0);
    }
    puVar2 = local_b8;
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_b8;
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = puVar1;
      _objc_getAssociatedObject(puVar1,&DAT_028cc1ba);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 == puVar2) {
          local_1a8 = (undefined *)0x0;
        }
        else {
          local_1a8 = local_f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = local_1a8;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setImage__026ca978,local_f8);
        _objc_setAssociatedObject(local_e8,&DAT_028cc1ba,0,1);
        _objc_setAssociatedObject(local_e8,&DAT_028cc1bb,0,3);
        local_c8 = local_c8 + 1;
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
    }
    _memset(auStack_140,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1d8 != (undefined *)0x0) {
      lVar3 = *local_130;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar3 != 0) {
            _objc_enumerationMutation(*local_130 - lVar3,puVar2);
          }
          lVar4 = *(long *)(local_138 + (long)local_1e0 * 8);
          local_100 = lVar4;
          FUN_006b9234();
          local_c8 = local_c8 + lVar4;
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_b0 = local_c8;
  }
  local_bc = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


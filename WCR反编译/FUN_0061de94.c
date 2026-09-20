// FUN_0061de94 @ 0061de94

void FUN_0061de94(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8 [3];
  char *local_c0;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    pcVar1 = "MMHeadImageView";
    _objc_getClass();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_c0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_d8[0] = puVar2;
    while (puVar2 = local_d8[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_count_0269cfe0),
          puVar2 != (undefined *)0x0) {
      puVar2 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_removeLastObject_0269e830);
      if ((local_c0 == (char *)0x0) ||
         (puVar2 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,local_c0),
         ((ulong)puVar2 & 1) == 0)) {
        _memset(auStack_128,0,0x40);
        puVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_178 != (undefined *)0x0) {
          lVar3 = *local_118;
          local_180 = (undefined *)0x0;
          do {
            do {
              if (*local_118 - lVar3 != 0) {
                _objc_enumerationMutation(*local_118 - lVar3,puVar2);
              }
              local_e8 = *(long *)(local_120 + (long)local_180 * 8);
              if (local_e8 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8[0],PTR_s_addObject__0269d180,local_e8);
              }
              local_180 = local_180 + 1;
            } while (local_180 < local_178);
            local_178 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8
                       ,0x10);
            local_180 = (undefined *)0x0;
          } while (local_178 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_b4 = 0;
      }
      else {
        puVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_checkAndUpdateImage_0269de70);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_updateHeadImage__0269de58);
          if (((ulong)puVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_updateHeadImage__0269de58,0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_checkAndUpdateImage_0269de70);
        }
        local_b4 = 2;
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(0,local_d8,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


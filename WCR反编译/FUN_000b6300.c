// FUN_000b6300 @ 000b6300

void FUN_000b6300(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  undefined *local_e0;
  int local_d8;
  byte local_d1;
  undefined *local_d0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  puVar3 = local_b8;
  local_d1 = 0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    bVar1 = puVar3 != (undefined *)0x0;
    local_d0 = puVar3;
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if (bVar1) {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_windows_0269dde0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar2);
          }
          puVar5 = *(undefined **)(local_120 + (long)local_198 * 8);
          puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
          local_e8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((((ulong)puVar5 & 1) != 0) &&
              (puVar3 = local_e8,
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isHidden_026ca768),
              ((ulong)puVar3 & 1) == 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_alpha_026ca4d8),
             puVar3 = local_e8, DAT_02323cd0 < param_1)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar3;
            local_d8 = 1;
            goto LAB_000b6780;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_d8 = 0;
LAB_000b6780:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d8 == 0) {
      puVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_keyWindow_0269d308);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = 1;
      local_b0 = puVar3;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


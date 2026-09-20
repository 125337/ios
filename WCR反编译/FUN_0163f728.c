// FUN_0163f728 @ 0163f728

void FUN_0163f728(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_178;
  undefined *local_170;
  undefined *local_140;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  undefined *local_d8;
  uint local_d0;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 0;
    local_140 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_140 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_140;
    }
    local_c9 = puVar2 == (undefined *)0x0;
    FUN_01686fa0();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = local_140;
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_c0;
    bVar1 = local_c0 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
    }
    local_d0 = (uint)bVar1;
    _objc_storeStrong(&local_c0,0);
    if (local_d0 != 0) goto LAB_0163fc74;
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_120,0,0x40);
  puVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_170 != (undefined *)0x0) {
    lVar4 = *local_110;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,puVar2);
        }
        puVar5 = *(undefined **)(local_118 + (long)local_178 * 8);
        local_e0 = puVar5;
        if ((puVar5 != (undefined *)0x0) && (puVar5 != DAT_028e3c70)) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (((ulong)puVar3 & 1) == 0) {
            puVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rootViewController_026ca820);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            FUN_01686fa0();
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar5 = local_128;
            bVar1 = local_128 != (undefined *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar5;
            }
            local_d0 = (uint)bVar1;
            _objc_storeStrong(&local_128,0);
            if (local_d0 != 0) goto LAB_0163fb50;
          }
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  local_d0 = 0;
LAB_0163fb50:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_d0 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_130 == (undefined *)0x0) || (local_130 == DAT_028e3c70)) {
      local_b0 = (undefined *)0x0;
    }
    else {
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      FUN_01686fa0();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_d0 = 1;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_d8,0);
LAB_0163fc74:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


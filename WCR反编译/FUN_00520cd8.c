// FUN_00520cd8 @ 00520cd8

byte FUN_00520cd8(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_258;
  undefined *local_250;
  void *local_200;
  void *local_1f8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  int local_188;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pvVar1 = _memset(auStack_178,0,0x40);
  FUN_00527da4();
  _objc_retainAutoreleasedReturnValue();
  pvVar2 = pvVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pvVar1);
  local_1f8 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
  if (local_1f8 != (void *)0x0) {
    lVar6 = *local_168;
    local_200 = (void *)0x0;
    do {
      do {
        if (*local_168 - lVar6 != 0) {
          _objc_enumerationMutation(*local_168 - lVar6,pvVar2);
        }
        uVar7 = *(ulong *)(local_170 + (long)local_200 * 8);
        local_138 = uVar7;
        FUN_00527e18();
        if ((uVar7 & 1) != 0) {
          local_129 = 1;
          local_188 = 1;
          goto LAB_00520ee8;
        }
        local_200 = (void *)((long)local_200 + 1);
      } while (local_200 < local_1f8);
      local_1f8 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      local_200 = (void *)0x0;
    } while (local_1f8 != (void *)0x0);
  }
  local_188 = 0;
LAB_00520ee8:
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  if (local_188 == 0) {
    _memset(auStack_1d0,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_250 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10);
    if (local_250 != (undefined *)0x0) {
      lVar6 = *local_1c0;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar6,puVar4);
          }
          uVar7 = *(ulong *)(local_1c8 + (long)local_258 * 8);
          local_190 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
          if ((uVar7 & 1) == 0) {
            uVar7 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_rootViewController_026ca820);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar7;
            FUN_005284ac();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar5 & 1) != 0) {
              local_129 = 1;
              local_188 = 1;
              goto LAB_00521194;
            }
          }
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    local_188 = 0;
LAB_00521194:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_188 == 0) {
      local_129 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


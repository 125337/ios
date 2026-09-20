// FUN_0019a838 @ 0019a838

void FUN_0019a838(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong local_148;
  ulong local_140;
  undefined *local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar5 = *local_f0;
    local_148 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar3);
        }
        puVar6 = *(undefined **)(local_f8 + local_148 * 8);
        local_c0 = puVar6;
        FUN_0019b744();
        _objc_retainAutoreleasedReturnValue();
        local_118[0] = puVar6;
        if (puVar6 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_c0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_118[0];
          local_118[0] = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_118[0];
          if (local_118[0] == (undefined *)0x0) {
            bVar1 = false;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar6;
            bVar1 = true;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          bVar1 = true;
          local_b0 = puVar6;
        }
        _objc_storeStrong(local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_0019aac4;
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  bVar2 = false;
LAB_0019aac4:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_b0 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


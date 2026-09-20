// FUN_01a93950 @ 01a93950

void FUN_01a93950(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_150;
  ulong local_148;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar7 = *local_f8;
    local_150 = 0;
    do {
      do {
        if (*local_f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar7,uVar3);
        }
        uVar4 = local_b8;
        uVar8 = *(undefined8 *)(local_100 + local_150 * 8);
        local_c8 = uVar8;
        _NSSelectorFromString(uVar8);
        FUN_01a91e98(uVar4,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_110 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar4 & 1) == 0) ||
           (uVar6 = local_110,
           (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0), uVar4 = local_110
           , uVar6 == 0)) {
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar4;
          bVar1 = true;
        }
        _objc_storeStrong(&local_110,0);
        bVar2 = true;
        if (bVar1) goto LAB_01a93b9c;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  bVar2 = false;
LAB_01a93b9c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


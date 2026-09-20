// FUN_008ebfa0 @ 008ebfa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ebfa0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_1a0;
  ulong local_198;
  undefined *local_150;
  undefined8 local_148;
  undefined1 local_131;
  undefined *local_130;
  undefined *local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  uint local_c4;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_b8 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar7 = *local_100;
      local_1a0 = 0;
      do {
        do {
          if (*local_100 - lVar7 != 0) {
            _objc_enumerationMutation(*local_100 - lVar7,uVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_1a0 * 8);
          puVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 0;
          bVar3 = false;
          uVar1 = puVar4 != (undefined *)0x0;
          local_128[0] = puVar4;
          if ((bool)uVar1) {
            puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = puVar4 != puVar5;
            local_131 = uVar1;
            local_130 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            uVar1 = local_131;
          }
          local_131 = uVar1;
          puVar4 = local_128[0];
          if (bVar3) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar4;
          }
          local_c4 = (uint)bVar3;
          _objc_storeStrong(local_128,0);
          if (local_c4 != 0) goto LAB_008ec494;
          uVar6 = local_d0;
          _NSSelectorFromString();
          puVar4 = local_b8;
          local_148 = uVar6;
          FUN_008e6088(local_b8,uVar6);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = false;
          local_150 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = puVar4 != puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          puVar4 = local_150;
          if (bVar3) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar4;
          }
          local_c4 = (uint)bVar3;
          _objc_storeStrong(&local_150,0);
          if (local_c4 != 0) goto LAB_008ec494;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    local_c4 = 0;
LAB_008ec494:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c4 == 0) {
      local_b0 = (undefined *)0x0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


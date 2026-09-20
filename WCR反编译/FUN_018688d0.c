// FUN_018688d0 @ 018688d0

void FUN_018688d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong local_160;
  ulong local_158;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar4 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar7 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar7,uVar4);
        }
        uVar8 = *(ulong *)(local_100 + local_160 * 8);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
           uVar8 != 0)) {
          uVar8 = local_c8;
          _NSSelectorFromString();
          pcVar6 = local_b8;
          local_110 = uVar8;
          FUN_018606cc(local_b8,uVar8);
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar6;
          FUN_018638e8();
          _objc_retainAutoreleasedReturnValue();
          local_120 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
          pcVar3 = local_120;
          if (pcVar6 == (cfstringStruct *)0x0) {
            pcVar6 = local_b8;
            FUN_0185ee7c(0,local_b8,local_c8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_118;
            local_118 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar6 = local_118;
            FUN_018638e8();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_120;
            local_120 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar6 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            pcVar3 = local_120;
            if (pcVar6 == (cfstringStruct *)0x0) {
              bVar1 = false;
              uVar9 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar3;
              uVar9 = 1;
              bVar1 = true;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar3;
            uVar9 = 1;
            bVar1 = true;
          }
          _objc_storeStrong(uVar9,&local_120);
          _objc_storeStrong(&local_118,0);
          bVar2 = true;
          if (bVar1) goto LAB_01868c00;
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  bVar2 = false;
LAB_01868c00:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
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


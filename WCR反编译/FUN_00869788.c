// FUN_00869788 @ 00869788

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00869788(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_228;
  ulong local_1d8;
  ulong local_1d0;
  bool local_179;
  ulong local_178;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  ulong local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_4;
  local_c8 = param_3;
  local_c0 = param_1;
  uStack_b8 = param_2;
  _objc_storeStrong(&local_d8,param_5);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_6);
  uVar4 = local_d8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) != 0) {
    uVar2 = (uint)local_d8;
    FUN_008890bc();
    if ((uVar2 & 1) != 0) {
      local_110 = 0;
      _memset(auStack_158,0,0x40);
      uVar4 = local_d8;
      FUN_00889204();
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1d0 != 0) {
        lVar6 = *local_148;
        local_1d8 = 0;
        do {
          do {
            if (*local_148 - lVar6 != 0) {
              _objc_enumerationMutation(*local_148 - lVar6,uVar4);
            }
            local_118 = *(undefined8 *)(local_150 + local_1d8 * 8);
            uVar5 = local_c8;
            (*DAT_028cd560)(local_c0,uStack_b8,local_c8,local_d0,local_118,local_e0);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_110;
            local_110 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            if (local_110 != 0) {
              local_104 = 2;
              goto LAB_00869ad0;
            }
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_1d8 = 0;
        } while (local_1d0 != 0);
      }
      local_104 = 0;
LAB_00869ad0:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_110;
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_179 = (uVar4 & 1) == 0;
      if (local_179) {
        local_228 = local_110;
      }
      else {
        local_228 = local_110;
        FUN_0088950c();
        _objc_retainAutoreleasedReturnValue();
        local_178 = local_228;
      }
      local_179 = !local_179;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_228;
      if (local_179) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      local_104 = 1;
      _objc_storeStrong(&local_110,0);
      goto LAB_00869c10;
    }
  }
  uStack_f8 = uStack_b8;
  local_100 = local_c0;
  uVar4 = local_c8;
  (*DAT_028cd560)(local_c0,uStack_b8,local_c8,local_d0,local_d8,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_104 = 1;
  local_b0 = uVar4;
LAB_00869c10:
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


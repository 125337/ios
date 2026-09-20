// FUN_001fcc94 @ 001fcc94

void FUN_001fcc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_268;
  ulong local_260;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined4 local_148;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  uVar2 = local_130;
  if (local_130 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_190,0,0x40);
      uVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_220 != 0) {
        lVar4 = *local_180;
        local_228 = 0;
        do {
          do {
            if (*local_180 - lVar4 != 0) {
              _objc_enumerationMutation(*local_180 - lVar4,uVar2);
            }
            local_150 = *(ulong *)(local_188 + local_228 * 8);
            FUN_001fd100(local_150,local_138);
            _memset(auStack_1d8,0,0x40);
            uVar3 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_260 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_260 != 0) {
              lVar5 = *local_1c8;
              local_268 = 0;
              do {
                do {
                  if (*local_1c8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1c8 - lVar5,uVar3);
                  }
                  local_198 = *(undefined8 *)(local_1d0 + local_268 * 8);
                  FUN_001fd100(local_198,local_138);
                  local_268 = local_268 + 1;
                } while (local_268 < local_260);
                local_260 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                           auStack_128,0x10);
                local_268 = 0;
              } while (local_260 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_228 = local_228 + 1;
          } while (local_228 < local_220);
          local_220 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                     0x10);
          local_228 = 0;
        } while (local_220 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_148 = 0;
      goto LAB_001fd044;
    }
  }
  local_148 = 1;
LAB_001fd044:
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


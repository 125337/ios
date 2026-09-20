// FUN_0157f538 @ 0157f538

void FUN_0157f538(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_2d0;
  long local_2c8;
  ulong local_290;
  ulong local_288;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  int local_14c;
  ulong local_148;
  byte local_139;
  long local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar2 = local_130;
  local_139 = param_3;
  local_138 = param_2;
  _objc_getAssociatedObject(local_130,DAT_028c5e80);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar2;
  if (uVar2 == 0) {
    local_14c = 1;
  }
  else {
    _memset(auStack_198,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_240 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar4 = *local_188;
      local_248 = 0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_190 + local_248 * 8);
          local_158 = uVar5;
          _objc_getAssociatedObject(uVar5,DAT_028c5fa8);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = uVar5;
          if (uVar5 == 0) {
            local_14c = 3;
          }
          else {
            lVar6 = local_138;
            FUN_0154c750(local_138,local_139 & 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setText__026caa88);
            (*(code *)PTR__objc_release_02578630)(lVar6);
            uVar5 = local_158;
            _objc_getAssociatedObject(local_158,DAT_028c5fb0);
            _objc_retainAutoreleasedReturnValue();
            local_1a8 = uVar5;
            _memset(auStack_1f0,0,0x40);
            uVar5 = local_1a8;
            (*(code *)PTR__objc_retain_02578638)();
            local_288 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128
                       ,0x10);
            if (local_288 != 0) {
              lVar6 = *local_1e0;
              local_290 = 0;
              do {
                do {
                  if (*local_1e0 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar6,uVar5);
                  }
                  uVar1 = DAT_028c5f38;
                  uVar7 = *(undefined8 *)(local_1e8 + local_290 * 8);
                  if ((local_139 & 1) == 0) {
                    if (local_138 < 1) {
                      local_2d0 = 0;
                    }
                    else {
                      local_2d0 = local_138;
                    }
                    local_2c8 = local_2d0;
                  }
                  else {
                    local_2c8 = -1;
                  }
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_1b0 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                             local_2c8);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_setAssociatedObject(uVar7,uVar1,puVar3,1);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  local_290 = local_290 + 1;
                } while (local_290 < local_288);
                local_288 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_290 = 0;
              } while (local_288 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_130;
            uVar1 = DAT_028c5ea0;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                       (local_139 ^ 1) & 1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_14c = 1;
            _objc_storeStrong(&local_1a8,0);
          }
          _objc_storeStrong(&local_1a0,0);
          if (local_14c != 3) goto LAB_0157fa28;
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    local_14c = 0;
LAB_0157fa28:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_14c == 0) {
      local_14c = 0;
    }
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


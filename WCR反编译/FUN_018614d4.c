// FUN_018614d4 @ 018614d4

void FUN_018614d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_298;
  ulong local_290;
  ulong local_248;
  ulong local_240;
  ulong local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  ulong local_150;
  undefined4 local_144;
  ulong local_140;
  long local_138;
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
  local_140 = param_3;
  if (((local_130 == 0) || (local_138 == 0)) || (4 < param_3)) {
    local_144 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_130;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_130;
      if ((uVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_130;
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar2 = local_130;
          if ((uVar3 & 1) == 0) {
            FUN_01868548();
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            if (uVar2 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_1f0);
            }
            _objc_storeStrong(&local_1f0,0);
            local_144 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_1a0 = uVar2;
            _memset(auStack_1e8,0,0x40);
            uVar2 = local_1a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_290 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128
                       ,0x10);
            if (local_290 != 0) {
              lVar4 = *local_1d8;
              local_298 = 0;
              do {
                do {
                  if (*local_1d8 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_1d8 - lVar4,uVar2);
                  }
                  local_1a8 = *(undefined8 *)(local_1e0 + local_298 * 8);
                  FUN_018614d4(local_1a8,local_138,local_140 + 1);
                  uVar3 = local_1a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,local_1a8);
                  _objc_retainAutoreleasedReturnValue();
                  FUN_018614d4();
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  local_298 = local_298 + 1;
                } while (local_298 < local_290);
                local_290 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                           auStack_128,0x10);
                local_298 = 0;
              } while (local_290 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_144 = 1;
            _objc_storeStrong(&local_1a0,0);
          }
          goto LAB_01861a6c;
        }
      }
      _memset(auStack_198,0,0x40);
      uVar2 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_240 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      if (local_240 != 0) {
        lVar4 = *local_188;
        local_248 = 0;
        do {
          do {
            if (*local_188 - lVar4 != 0) {
              _objc_enumerationMutation(*local_188 - lVar4,uVar2);
            }
            local_158 = *(undefined8 *)(local_190 + local_248 * 8);
            FUN_018614d4(local_158,local_138,local_140 + 1);
            local_248 = local_248 + 1;
          } while (local_248 < local_240);
          local_240 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_248 = 0;
        } while (local_240 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_144 = 1;
    }
    else {
      uVar2 = local_130;
      FUN_01860804();
      _objc_retainAutoreleasedReturnValue();
      local_150 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_150);
      }
      local_144 = 1;
      _objc_storeStrong(&local_150,0);
    }
  }
LAB_01861a6c:
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_004d5280 @ 004d5280

void FUN_004d5280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_298;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  char *local_e0;
  undefined4 local_d8;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
      uVar2 == 0)) || (FUN_004d7600(), (uVar2 & 1) == 0)) {
    (*DAT_028cad18)(local_b0,local_b8,local_c0,local_c8);
    local_d8 = 1;
  }
  else {
    pcVar3 = "CMessageWrap";
    _objc_getClass();
    uVar4 = local_c0;
    local_e0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
    uVar2 = local_c8;
    local_f0 = 0;
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_e8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = local_c8;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
        uVar2 = local_f0;
        local_f0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
      uVar2 = local_f0;
      local_f0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_f1 = 0;
    _memset(auStack_140,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1f0 != 0) {
      lVar5 = *local_130;
      local_1f8 = 0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_138 + local_1f8 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_100 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar4 = local_100;
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = uVar4;
            uVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectForKeyedSubscript__0269d098,uVar4);
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar6;
            if (((local_e0 == (char *)0x0) || (uVar6 == 0)) ||
               ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,local_e0),
               (uVar6 & 1) != 0)) {
              uVar4 = local_150;
              FUN_004d5f78(local_150,local_148,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar4 == 0) {
                local_d8 = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_removeObjectForKey__0269d700,local_148);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_removeObject__0269d678,local_148);
                local_f1 = 1;
                local_d8 = 0;
              }
            }
            else {
              local_d8 = 3;
            }
            _objc_storeStrong(&local_150);
            _objc_storeStrong(&local_148,0);
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_f1 & 1) == 0) {
      (*DAT_028cad18)(local_b0,local_b8,local_c0,local_c8);
      local_d8 = 1;
    }
    else {
      uVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      if (uVar2 == 0) {
        local_d8 = 1;
      }
      else {
        if (local_f0 == 0) {
          local_298 = local_c8;
        }
        else {
          local_298 = local_f0;
        }
        (*DAT_028cad18)(local_b0,local_b8,local_e8,local_298);
        local_d8 = 0;
      }
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


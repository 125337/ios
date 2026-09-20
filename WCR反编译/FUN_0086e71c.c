// FUN_0086e71c @ 0086e71c

void FUN_0086e71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_230;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_198;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  byte local_f2;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
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
  if ((DAT_028cd85d & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
      uVar2 = local_c8;
      local_f1 = 0;
      puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
      local_e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        local_198 = 0;
      }
      else {
        local_198 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
        local_f1 = 1;
        local_f0 = local_198;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_198;
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      local_f2 = 0;
      _memset(auStack_140,0,0x40);
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c0 != 0) {
        lVar4 = *local_130;
        local_1c8 = 0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,uVar2);
            }
            local_100 = *(undefined8 *)(local_138 + local_1c8 * 8);
            uVar3 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKey__0269e048,local_100);
            _objc_retainAutoreleasedReturnValue();
            local_148 = uVar3;
            FUN_0088d270();
            if ((uVar3 & 1) == 0) {
              local_d8 = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_removeObjectForKey__0269d700,local_100);
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeObject__0269d678,local_100)
              ;
              local_f2 = 1;
              local_d8 = 0;
            }
            _objc_storeStrong(&local_148,0);
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c8 = 0;
        } while (local_1c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_f2 & 1) == 0) {
        (*DAT_028cd720)(local_b0,local_b8,local_c0,local_c8);
        local_d8 = 0;
      }
      else {
        uVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        if (uVar2 != 0) {
          if (local_e8 == 0) {
            local_230 = local_c8;
          }
          else {
            local_230 = local_e8;
          }
          (*DAT_028cd720)(local_b0,local_b8,local_e0,local_230);
        }
        local_d8 = 1;
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      goto LAB_0086ecb8;
    }
  }
  (*DAT_028cd720)(local_b0,local_b8,local_c0,local_c8);
  local_d8 = 1;
LAB_0086ecb8:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


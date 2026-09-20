// FUN_007c4058 @ 007c4058

void FUN_007c4058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_208;
  ulong local_200;
  ulong local_1c0;
  uint local_1a8;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  ulong local_118;
  byte local_109;
  ulong local_108;
  ulong local_100;
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
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = &local_c8;
  local_c8 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_007d92bc();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccdc8)(local_b0,local_b8,local_c0,local_c8);
    local_d8 = 1;
    goto LAB_007c47bc;
  }
  if ((local_c0 == 0) || (local_c8 == 0)) {
    (*DAT_028ccdc8)(local_b0,local_b8,local_c0,local_c8);
    local_d8 = 1;
    goto LAB_007c47bc;
  }
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  uVar7 = local_c8;
  local_e0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
  local_f1 = 0;
  local_e8 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
  if (uVar7 == 0) {
LAB_007c4234:
    local_1c0 = local_e0;
    FUN_007daac4();
    local_1a8 = (uint)local_1c0;
  }
  else {
    FUN_007d5940(uVar7);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1c0 = 1;
    local_1a8 = 1;
    if ((uVar7 & 1) == 0) goto LAB_007c4234;
  }
  if ((local_f1 & 1) != 0) {
    local_1c0 = local_f0;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_1a8 & 1) == 0) {
    local_109 = 0;
    FUN_007d92bc();
    if ((local_1c0 & 1) == 0) {
      FUN_007d9414();
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = local_1c0;
    }
    else {
      local_1c0 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1c0;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    uVar7 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    uVar3 = local_e0;
    if (uVar7 == 0) {
      (*DAT_028ccdc8)(local_b0,local_b8,local_e0,local_e8);
      local_d8 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = uVar3;
      _memset(auStack_160,0,0x40);
      uVar3 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
      if (local_200 != 0) {
        lVar6 = *local_150;
        local_208 = 0;
        do {
          do {
            if (*local_150 - lVar6 != 0) {
              _objc_enumerationMutation(*local_150 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_158 + local_208 * 8);
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_120 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = local_120,
               (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0), uVar7 != 0))
            {
              uVar7 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_objectForKey__0269e048,local_120);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_168 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar7 & 1) == 0) {
                local_d8 = 4;
              }
              else {
                uVar7 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_containsString__0269d0b0,local_120);
                if ((uVar7 & 1) != 0) {
                  uVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,local_120,
                             local_168);
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_118;
                  local_118 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                }
                local_d8 = 0;
              }
              _objc_storeStrong(&local_168,0);
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*DAT_028ccdc8)(local_b0,local_b8,local_118,local_e8);
      _objc_storeStrong(&local_118,0);
      local_d8 = 0;
    }
    _objc_storeStrong(&local_100,0);
  }
  else {
    local_d8 = 1;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
LAB_007c47bc:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


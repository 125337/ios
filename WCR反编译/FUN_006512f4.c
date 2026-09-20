// FUN_006512f4 @ 006512f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_006512f4(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  uint local_2a8;
  ulong local_228;
  ulong local_220;
  bool local_179;
  long local_178;
  undefined *local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  ulong local_110;
  ulong local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0;
  double local_e8;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  local_c0 = param_3;
  FUN_0064f7f4(local_b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    uVar2 = local_b8;
    FUN_00654a24(local_b8,local_c0);
    uVar1 = local_b8;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_c0;
      FUN_006549f8(local_c0);
      _objc_getAssociatedObject(uVar1,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_e0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar1 & 1) == 0) {
        local_a9 = 0;
        local_d8 = 1;
      }
      else {
        _CFAbsoluteTimeGetCurrent();
        dVar9 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_doubleValue_026ca608);
        local_e8 = param_1 - dVar9;
        if (1.2 <= local_e8) {
          puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
          local_f0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar5;
          FUN_00654cf0(local_b8,local_f0,puVar5);
          local_f9 = 0;
          uVar1 = local_b8;
          FUN_0064fac4(local_b8,local_c0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_b8;
          local_108 = uVar1;
          FUN_0064f9ac();
          _objc_retainAutoreleasedReturnValue();
          local_110 = uVar2;
          _memset(auStack_158,0,0x40);
          uVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
          local_220 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          if (local_220 != 0) {
            lVar7 = *local_148;
            local_228 = 0;
            do {
              do {
                if (*local_148 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_148 - lVar7,uVar1);
                }
                lVar8 = *(long *)(local_150 + local_228 * 8);
                local_118 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                lVar6 = local_118;
                local_160 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_section);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                lVar8 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_row);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
                _objc_retainAutoreleasedReturnValue();
                local_168 = puVar4;
                (*(code *)PTR__objc_release_02578630)(lVar8);
                (*(code *)PTR__objc_release_02578630)(lVar6);
                lVar6 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_hasPosition);
                _objc_retainAutoreleasedReturnValue();
                if (lVar6 == 0) {
                  local_2a8 = 1;
                }
                else {
                  local_178 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_hasPosition);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = local_178;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_2a8 = (uint)lVar8;
                }
                local_179 = lVar6 != 0;
                if (local_179) {
                  (*(code *)PTR__objc_release_02578630)(local_178);
                }
                (*(code *)PTR__objc_release_02578630)(lVar6);
                if (((local_160 != 0) &&
                    (puVar4 = local_f8,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f8,PTR_s_containsObject__0269cbb8,local_160),
                    ((ulong)puVar4 & 1) != 0)) ||
                   (((local_2a8 & 1) != 0 &&
                    (puVar4 = local_f0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_containsObject__0269cbb8,local_168),
                    ((ulong)puVar4 & 1) != 0)))) {
                  if (local_160 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_addObject__0269d180,local_160);
                    FUN_0064fc7c(local_c0,local_110,local_160);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_removeObject__0269d678,local_118);
                  local_f9 = 1;
                }
                _objc_storeStrong(&local_168);
                _objc_storeStrong(&local_160,0);
                local_228 = local_228 + 1;
              } while (local_228 < local_220);
              local_220 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                         auStack_a8,0x10);
              local_228 = 0;
            } while (local_220 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if ((local_f9 & 1) != 0) {
            FUN_0065020c(local_c0,local_110);
          }
          local_a9 = local_f9 & 1;
          local_d8 = 1;
          _objc_storeStrong(&local_110);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_f8,0);
          _objc_storeStrong(&local_f0,0);
        }
        else {
          local_a9 = 0;
          local_d8 = 1;
        }
      }
      _objc_storeStrong(&local_e0,0);
    }
    else {
      local_a9 = 0;
      local_d8 = 1;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}


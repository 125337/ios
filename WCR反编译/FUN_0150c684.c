// FUN_0150c684 @ 0150c684

void FUN_0150c684(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_270;
  ulong local_268;
  ulong local_228;
  ulong local_220;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  ulong local_1a8;
  int local_19c;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined2 local_13c;
  undefined1 local_13a;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_13c = DAT_02332d51;
  local_13a = DAT_02332d53;
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,&local_13c,3);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_190,0,0x40);
  uVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_220 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_220 != 0) {
    lVar5 = *local_180;
    local_228 = 0;
    do {
      do {
        if (*local_180 - lVar5 != 0) {
          _objc_enumerationMutation(*local_180 - lVar5,uVar1);
        }
        uVar6 = *(ulong *)(local_188 + local_228 * 8);
        local_150 = uVar6;
        FUN_0150c2ac(uVar6,0xa3);
        _objc_retainAutoreleasedReturnValue();
        local_198 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
        if (uVar6 == 1) {
          uVar6 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          FUN_0150c2ac();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          _memset(auStack_1f0,0,0x40);
          uVar6 = local_1a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_268 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          if (local_268 != 0) {
            lVar7 = *local_1e0;
            local_270 = 0;
            do {
              do {
                if (*local_1e0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_1e0 - lVar7,uVar6);
                }
                uVar8 = *(ulong *)(local_1e8 + local_270 * 8);
                local_1b0 = uVar8;
                FUN_0150c2ac(uVar8,0x30);
                _objc_retainAutoreleasedReturnValue();
                local_1f8 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_count_0269cfe0);
                if ((uVar8 < 2) ||
                   (uVar8 = local_1f8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0), 3 < uVar8)
                   ) {
                  local_130 = 0;
                  local_19c = 1;
                }
                else {
                  uVar8 = local_1f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar8;
                  FUN_0150c520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  if ((uVar4 & 1) == 0) {
                    local_19c = 0;
                  }
                  else {
                    uVar8 = local_1f8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_lastObject_0269d200);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar8;
                    FUN_0150c520();
                    _objc_retainAutoreleasedReturnValue();
                    local_200 = uVar3;
                    (*(code *)PTR__objc_release_02578630)(uVar8);
                    uVar8 = local_200;
                    FUN_0150c520(local_200,4);
                    _objc_retainAutoreleasedReturnValue();
                    local_19c = 1;
                    local_130 = uVar8;
                    _objc_storeStrong(&local_200,0);
                  }
                }
                _objc_storeStrong(&local_1f8,0);
                if (local_19c != 0) goto LAB_0150cb18;
                local_270 = local_270 + 1;
              } while (local_270 < local_268);
              local_268 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                         auStack_128,0x10);
              local_270 = 0;
            } while (local_268 != 0);
          }
          local_19c = 0;
LAB_0150cb18:
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_19c == 0) {
            local_19c = 0;
          }
          _objc_storeStrong(&local_1a8,0);
        }
        else {
          local_19c = 3;
        }
        _objc_storeStrong(&local_198,0);
        if ((local_19c != 0) && (local_19c != 3)) goto LAB_0150cbe4;
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  local_19c = 0;
LAB_0150cbe4:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_19c == 0) {
    local_130 = 0;
    local_19c = 1;
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_00396c98 @ 00396c98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00396c98(long param_1,cfstringStruct *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  cfstringStruct *local_300;
  long local_2d0;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_288;
  cfstringStruct *local_278;
  ulong local_248;
  ulong local_240;
  long local_208;
  long local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  undefined *local_1a0;
  undefined4 local_194;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  cfstringStruct *local_148;
  long local_140;
  cfstringStruct *local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_1;
  local_138 = param_2;
  local_130 = param_1;
  _memset(auStack_188,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_240 != 0) {
    lVar4 = *local_178;
    local_248 = 0;
    do {
      do {
        if (*local_178 - lVar4 != 0) {
          _objc_enumerationMutation(*local_178 - lVar4,uVar1);
        }
        pcVar8 = *(cfstringStruct **)(local_180 + local_248 * 8);
        local_148 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_disabled_026a2c20);
        if (((((ulong)pcVar8 & 1) == 0) &&
            (pcVar8 = local_148,
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_kind_026a27e8),
            pcVar8 == (cfstringStruct *)0x3)) &&
           (pcVar8 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_scope_0269ea90),
           pcVar8 == local_138)) {
          uVar9 = *(ulong *)(param_1 + 0x28);
          pcVar8 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          local_278 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_278 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_objectForKeyedSubscript__0269d098,local_278);
          _objc_retainAutoreleasedReturnValue();
          local_190 = uVar9;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          uVar9 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
          if (uVar9 == 0) {
            local_194 = 3;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = puVar2;
            _memset(auStack_1e8,0,0x40);
            if (local_190 == 0) {
              local_288 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_288 = local_190;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_2a0 = local_288;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_288,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                       auStack_128,0x10);
            if (local_2a0 != 0) {
              lVar5 = *local_1d8;
              local_2a8 = 0;
              do {
                do {
                  if (*local_1d8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1d8 - lVar5,local_288);
                  }
                  lVar6 = *(long *)(local_1e0 + local_2a8 * 8);
                  local_1a8 = lVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_username_026a2238);
                  _objc_retainAutoreleasedReturnValue();
                  local_2d0 = lVar6;
                  if (lVar6 == 0) {
                    local_1f8 = local_1a8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_session_0269d000);
                    _objc_retainAutoreleasedReturnValue();
                    local_208 = local_1f8;
                    FUN_00366324();
                    _objc_retainAutoreleasedReturnValue();
                    local_2d0 = local_208;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1f0 = local_2d0;
                  if (lVar6 == 0) {
                    (*(code *)PTR__objc_release_02578630)(local_208);
                    (*(code *)PTR__objc_release_02578630)(local_1f8);
                  }
                  (*(code *)PTR__objc_release_02578630)(lVar6);
                  lVar6 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
                  if (lVar6 == 0) {
LAB_00397170:
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1a0,PTR_s_addObject__0269d180,local_1a8);
                    lVar6 = local_1f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
                    if (lVar6 != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_1f0
                                );
                    }
                    local_194 = 0;
                  }
                  else {
                    uVar9 = *(ulong *)(param_1 + 0x30);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar9,PTR_s_containsObject__0269cbb8,local_1f0);
                    if ((uVar9 & 1) == 0) goto LAB_00397170;
                    local_194 = 5;
                  }
                  _objc_storeStrong(&local_1f0,0);
                  local_2a8 = local_2a8 + 1;
                } while (local_2a8 < local_2a0);
                local_2a0 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_288,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                           auStack_128,0x10);
                local_2a8 = 0;
              } while (local_2a0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(local_288);
            puVar3 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
            puVar2 = local_1a0;
            ppuVar7 = (undefined **)0x0;
            if (puVar3 != (undefined *)0x0) {
              uVar10 = *(undefined8 *)(param_1 + 0x38);
              pcVar8 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              local_300 = pcVar8;
              if (pcVar8 == (cfstringStruct *)0x0) {
                local_300 = &cf___;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_300);
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              pcVar8 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_scope_0269ea90);
              ppuVar7 = &pcVar8[-1].field2_0x10;
              if (ppuVar7 == (undefined **)0x0) {
                ppuVar7 = (undefined **)0x1;
                *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
              }
            }
            _objc_storeStrong(ppuVar7,&local_1a0,0);
            local_194 = 0;
          }
          _objc_storeStrong(&local_190,0);
        }
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_00836e74 @ 00836e74

void FUN_00836e74(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  long lVar4;
  segment_command *psVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  cfstringStruct *local_288;
  segment_command *local_208;
  segment_command *local_200;
  segment_command *local_160;
  segment_command *local_158;
  segment_command *local_150;
  segment_command *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  long local_f8;
  long local_f0;
  segment_command *local_e8 [3];
  segment_command *local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_c0 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_no_wcr;
    local_c4 = 1;
  }
  else if (local_b8 == local_c0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_wcr;
    local_c4 = 1;
  }
  else {
    psVar2 = (segment_command *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    psVar3 = (segment_command *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = psVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = local_b8;
    local_e8[0] = psVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = lVar9;
    while( true ) {
      bVar1 = false;
      if (local_f0 != 0) {
        psVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
        bVar1 = psVar2 < &segment_command_00000020;
      }
      if (!bVar1) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_f0);
      lVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_f0;
      local_f0 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar9);
    }
    local_c4 = 2;
    _objc_storeStrong(&local_f0,0);
    lVar9 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = lVar9;
    while( true ) {
      bVar1 = false;
      if (local_f8 != 0) {
        psVar2 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
        bVar1 = psVar2 < &segment_command_00000020;
      }
      if (!bVar1) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_addObject__0269d180,local_f8);
      lVar4 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_f8;
      local_f8 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar9);
    }
    local_c4 = 5;
    _objc_storeStrong(&local_f8,0);
    _memset(auStack_140,0,0x40);
    psVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_200 = psVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (psVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_200 != (segment_command *)0x0) {
      lVar9 = *local_130;
      local_208 = (segment_command *)0x0;
      do {
        do {
          if (*local_130 - lVar9 != 0) {
            _objc_enumerationMutation(*local_130 - lVar9,psVar2);
          }
          local_100 = *(ulong *)(local_138 + (long)local_208 * 8);
          psVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_indexOfObjectIdenticalTo__0269e160,local_100);
          psVar5 = local_e8[0];
          local_148 = psVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8[0],PTR_s_indexOfObjectIdenticalTo__0269e160,local_100);
          local_150 = psVar5;
          if (psVar5 != (segment_command *)0x7fffffffffffffff) {
            if ((local_148 == (segment_command *)0x0) || (psVar5 == (segment_command *)0x0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = &cf_nested_with_wcr;
              local_c4 = 1;
            }
            else {
              psVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,
                         (undefined1 *)((long)&local_148[-1].flags + 3));
              _objc_retainAutoreleasedReturnValue();
              psVar5 = local_e8[0];
              local_158 = psVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8[0],PTR_s_objectAtIndexedSubscript__0269cc78,
                         (undefined1 *)((long)&local_150[-1].flags + 3));
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_100;
              local_160 = psVar5;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar6 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((uVar7 == 0x7fffffffffffffff) || (uVar8 == 0x7fffffffffffffff)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = &cf_unknown;
              }
              else {
                if (uVar8 < uVar7) {
                  local_288 = &cf_above_wcr;
                }
                else {
                  local_288 = &cf_below_wcr;
                  if (uVar8 <= uVar7) {
                    local_288 = &cf_same_z;
                  }
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = local_288;
              }
              local_c4 = 1;
              _objc_storeStrong(&local_160);
              _objc_storeStrong(&local_158,0);
            }
            goto LAB_00837694;
          }
          local_208 = (segment_command *)((long)&local_208->cmd + 1);
        } while (local_208 < local_200);
        local_200 = psVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (psVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_208 = (segment_command *)0x0;
      } while (local_200 != (segment_command *)0x0);
    }
    local_c4 = 0;
LAB_00837694:
    (*(code *)PTR__objc_release_02578630)(psVar2);
    if (local_c4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf_different_tree;
      local_c4 = 1;
    }
    _objc_storeStrong(local_e8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


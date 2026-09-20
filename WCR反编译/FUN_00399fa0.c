// FUN_00399fa0 @ 00399fa0

void FUN_00399fa0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong local_4d0;
  ulong local_4c8;
  ulong local_438;
  ulong local_430;
  ulong local_418;
  uint local_404;
  ulong local_3a8;
  ulong local_3a0;
  ulong local_388;
  undefined8 local_308;
  cfstringStruct *local_2f8;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  undefined8 local_2a8;
  ulong local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  undefined8 local_258;
  byte local_249;
  ulong local_248;
  byte local_239;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_2);
  if ((local_1b8 == 0) ||
     (uVar1 = local_1b8,
     (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_budgetFallback_026a25d8),
     (uVar1 & 1) != 0)) {
    local_1b0 = (undefined *)0x0;
    local_1bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x400);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_1c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_homeGroupingInlineExpandedGroupI_026a25c8);
    _objc_retainAutoreleasedReturnValue();
    local_2f8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_2f8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = local_2f8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_builtForInlineMode_026a2f18);
    if (((uVar1 & 1) == 0) ||
       (pcVar3 = local_1d0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_homeGroupingInlineAvatarShown_026a31f8)
       , ((ulong)pcVar3 & 1) != 0)) {
      local_308 = 0;
    }
    else {
      FUN_003cb0c8();
      local_308 = param_1;
    }
    local_1e0 = local_308;
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_preservedOriginalRows_026a2ce0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar4 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar6 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_trailingOriginalRows_026a2cd8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_1c8;
    local_1e8 = uVar9 + uVar5 + uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_builtForInlineMode_026a2f18);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_targetSection_026a2d68);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_pinnedAreaTakenOver_026a2e90);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_homeGroupingInlineAvatarShown_026a31f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf_i_d_x___s_ld_p_d_a_d_h__0f_r_ld_);
    _memset(auStack_230,0,0x40);
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    local_388 = uVar1;
    if (uVar1 == 0) {
      local_388 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_3a0 = local_388;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_388,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,0x10
              );
    if (local_3a0 != 0) {
      lVar8 = *local_220;
      local_3a8 = 0;
      do {
        do {
          if (*local_220 - lVar8 != 0) {
            _objc_enumerationMutation(*local_220 - lVar8,local_388);
          }
          uVar9 = *(ulong *)(local_228 + local_3a8 * 8);
          local_1f0 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_nativeOriginalIndexPath_026a3078);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_1c8;
          uVar1 = local_1f0;
          local_238 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_nativePassthrough_026a2e00);
          if (local_238 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_section_0269e988);
          }
          if (local_238 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_row_0269e210);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_appendFormat__0269d148,&cf_G____d__ld__ld_);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_builtForInlineMode_026a2f18);
          local_249 = 0;
          local_404 = 0;
          if ((uVar1 & 1) != 0) {
            pcVar3 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
            local_404 = 0;
            if (pcVar3 != (cfstringStruct *)0x0) {
              uVar1 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              local_249 = 1;
              local_248 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_404 = (uint)uVar1;
            }
          }
          if ((local_249 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_248);
          }
          local_239 = (byte)local_404 & 1;
          if ((local_404 & 1) != 0) {
            _memset(auStack_298,0,0x40);
            uVar1 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_items_0269e4b0);
            _objc_retainAutoreleasedReturnValue();
            local_418 = uVar1;
            if (uVar1 == 0) {
              local_418 = *(ulong *)PTR____NSArray0___02578280;
            }
            (*(code *)PTR__objc_retain_02578638)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_430 = local_418;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_418,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                       auStack_128,0x10);
            if (local_430 != 0) {
              lVar10 = *local_288;
              local_438 = 0;
              do {
                do {
                  if (*local_288 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_288 - lVar10,local_418);
                  }
                  puVar2 = local_1c8;
                  uVar11 = *(undefined8 *)(local_290 + local_438 * 8);
                  local_258 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_username_026a2238);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf____)
                  ;
                  (*(code *)PTR__objc_release_02578630)(uVar11);
                  local_438 = local_438 + 1;
                } while (local_438 < local_430);
                local_430 = local_418;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_418,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                           auStack_128,0x10);
                local_438 = 0;
              } while (local_430 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(local_418);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_appendString__0269ccb0,&cf___);
          _objc_storeStrong(&local_238,0);
          local_3a8 = local_3a8 + 1;
        } while (local_3a8 < local_3a0);
        local_3a0 = local_388;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_388,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                   0x10);
        local_3a8 = 0;
      } while (local_3a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_388);
    puVar2 = local_1c8;
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_preservedOriginalRows_026a2ce0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_trailingOriginalRows_026a2cd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_P___T___);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_hiddenOriginalRowsBySection_026a31e8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_2e8,0,0x40);
    uVar1 = local_2a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_4c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_1a8,0x10);
    if (local_4c8 != 0) {
      lVar8 = *local_2d8;
      local_4d0 = 0;
      do {
        do {
          if (*local_2d8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar8,uVar1);
          }
          puVar2 = local_1c8;
          local_2a8 = *(undefined8 *)(local_2e0 + local_4d0 * 8);
          uVar9 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_hiddenOriginalRowsBySection_026a31e8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_H______);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          local_4d0 = local_4d0 + 1;
        } while (local_4d0 < local_4c8);
        local_4c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_1a8,
                   0x10);
        local_4d0 = 0;
      } while (local_4c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
    local_1bc = 1;
    local_1b0 = puVar2;
    _objc_storeStrong(&local_2a0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}


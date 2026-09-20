// FUN_0009920c @ 0009920c

void FUN_0009920c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  ulong local_d0 [3];
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c7fb0)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_b0;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0[0] = uVar4;
    local_d1 = 0;
    while (uVar4 = local_d0[0], local_d0[0] != 0) {
      pcVar3 = &cf_WCTimeLineViewController;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar3);
      uVar5 = local_d0[0];
      if ((uVar4 & 1) != 0) {
LAB_00099398:
        local_d1 = 1;
        break;
      }
      pcVar3 = &cf_WCListViewController;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((uVar5 & 1) != 0) goto LAB_00099398;
      uVar5 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_d0[0];
      local_d0[0] = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if ((local_d1 & 1) != 0) {
      _memset(auStack_120,0,0x40);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != 0) {
        lVar6 = *local_110;
        local_198 = 0;
        do {
          do {
            if (*local_110 - lVar6 != 0) {
              _objc_enumerationMutation(*local_110 - lVar6,uVar4);
            }
            uVar7 = *(ulong *)(local_118 + local_198 * 8);
            pcVar3 = &cf_MMHeadImageView;
            local_e0 = uVar7;
            _NSClassFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar3);
            uVar5 = local_e0;
            if ((uVar7 & 1) == 0) {
              pcVar3 = &cf_TLProfileNicknameContainerView;
              _NSClassFromString();
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
              if ((uVar5 & 1) != 0) goto LAB_0009957c;
            }
            else {
LAB_0009957c:
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,1);
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    _objc_storeStrong(local_d0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


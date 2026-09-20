// FUN_00048998 @ 00048998

void FUN_00048998(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double local_1f0;
  undefined *local_198;
  undefined *local_190;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  int local_d0;
  undefined *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoAcceptTransferEnabled_0269d668);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_autoAcceptTransferFixedInviteEna_0269d8a8)
     , ((ulong)puVar1 & 1) == 0)) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_autoAcceptTransferFixedInviteRul_0269d8b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
       puVar1 == (undefined *)0x0)) {
      local_b0 = 0;
      local_d0 = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      puVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_190 != (undefined *)0x0) {
        lVar4 = *local_110;
        local_198 = (undefined *)0x0;
        do {
          do {
            local_1f0 = param_1;
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,puVar1);
              local_1f0 = param_1;
            }
            uVar5 = *(ulong *)(local_118 + (long)local_198 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_e0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar3 = local_e0;
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_128 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
              _objc_retainAutoreleasedReturnValue();
              local_130 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
              if ((uVar3 & 1) == 0) {
                local_1f0 = 0.0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_doubleValue_026ca608);
              }
              if (0.0 < local_1f0) {
                uVar5 = local_b8;
                FUN_00048f98();
                uVar3 = local_128;
                if ((uVar5 & 1) == 0) {
                  local_d0 = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = uVar3;
                  local_d0 = 1;
                }
              }
              else {
                local_d0 = 3;
              }
              _objc_storeStrong(&local_130);
              _objc_storeStrong(&local_128,0);
              if ((local_d0 != 0) && (local_d0 != 3)) goto LAB_00048ea4;
            }
            local_198 = local_198 + 1;
            param_1 = local_1f0;
          } while (local_198 < local_190);
          local_190 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
          param_1 = local_1f0;
        } while (local_190 != (undefined *)0x0);
      }
      local_d0 = 0;
LAB_00048ea4:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_d0 == 0) {
        local_b0 = 0;
        local_d0 = 1;
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


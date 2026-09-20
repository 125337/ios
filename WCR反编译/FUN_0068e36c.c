// FUN_0068e36c @ 0068e36c

void FUN_0068e36c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_328;
  ulong local_320;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_220;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  int local_150;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar1 = local_138;
  FUN_0068fa00();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_receipt_id);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar9 & 1) == 0) {
      local_220 = 0;
    }
    else {
      local_220 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_220;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_150 = 1;
    goto LAB_0068ed30;
  }
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)();
  FUN_0067e194();
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_0067e29c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_160;
    local_160 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar2 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
LAB_0068e994:
    puVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      uVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_150 = 1;
      local_130 = uVar1;
    }
    else {
      _memset(auStack_1f0,0,0x40);
      uVar1 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_320 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      if (local_320 != 0) {
        lVar8 = *local_1e0;
        local_328 = 0;
        do {
          do {
            if (*local_1e0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar8,uVar1);
            }
            uVar10 = *(ulong *)(local_1e8 + local_328 * 8);
            local_1b0 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_receipt_id);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar10;
            FUN_0068b784();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar9;
            FUN_0067d82c();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            (*(code *)PTR__objc_release_02578630)(uVar10);
            uVar9 = local_1b0;
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar9;
              local_150 = 1;
              goto LAB_0068ec70;
            }
            local_328 = local_328 + 1;
          } while (local_328 < local_320);
          local_320 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          local_328 = 0;
        } while (local_320 != 0);
      }
      local_150 = 0;
LAB_0068ec70:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_150 == 0) {
        local_130 = 0;
        local_150 = 1;
      }
    }
  }
  else {
    _memset(auStack_1a8,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_2b0 != 0) {
      lVar8 = *local_198;
      local_2b8 = 0;
      do {
        do {
          if (*local_198 - lVar8 != 0) {
            _objc_enumerationMutation(*local_198 - lVar8,uVar1);
          }
          uVar9 = *(ulong *)(local_1a0 + local_2b8 * 8);
          local_168 = uVar9;
          FUN_006900a8();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          uVar9 = local_168;
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar9;
            local_150 = 1;
            goto LAB_0068e95c;
          }
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    local_150 = 0;
LAB_0068e95c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_150 == 0) goto LAB_0068e994;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
LAB_0068ed30:
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


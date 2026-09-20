// FUN_0018d720 @ 0018d720

void FUN_0018d720(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_3e0;
  ulong local_3d8;
  ulong local_3a0;
  ulong local_398;
  uint local_34c;
  ulong local_320;
  ulong local_318;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  byte local_239;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  uint local_1d0;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  uVar2 = local_1b8;
  FUN_0018e014();
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_1b0 = 0;
    local_1d0 = 1;
    goto LAB_0018df94;
  }
  FUN_0018e2c0();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = uVar2;
  FUN_0018e334();
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
LAB_0018db8c:
    _memset(auStack_288,0,0x40);
    uVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_398 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,0x10);
    if (local_398 != 0) {
      lVar6 = *local_278;
      local_3a0 = 0;
      do {
        do {
          if (*local_278 - lVar6 != 0) {
            _objc_enumerationMutation(*local_278 - lVar6,uVar2);
          }
          local_248 = *(ulong *)(local_280 + local_3a0 * 8);
          _memset(auStack_2d0,0,0x40);
          uVar4 = local_248;
          FUN_0018e860();
          _objc_retainAutoreleasedReturnValue();
          local_3d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3d8 != 0) {
            lVar7 = *local_2c0;
            local_3e0 = 0;
            do {
              do {
                if (*local_2c0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_2c0 - lVar7,uVar4);
                }
                uVar5 = local_1c0;
                uVar8 = *(undefined8 *)(local_2c8 + local_3e0 * 8);
                local_290 = uVar8;
                FUN_0018e014();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
                (*(code *)PTR__objc_release_02578630)(uVar8);
                uVar3 = local_248;
                if ((uVar5 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b0 = uVar3;
                  local_1d0 = 1;
                  goto LAB_0018de68;
                }
                local_3e0 = local_3e0 + 1;
              } while (local_3e0 < local_3d8);
              local_3d8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                         auStack_1a8,0x10);
              local_3e0 = 0;
            } while (local_3d8 != 0);
          }
          local_1d0 = 0;
LAB_0018de68:
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (local_1d0 != 0) goto LAB_0018defc;
          local_3a0 = local_3a0 + 1;
        } while (local_3a0 < local_398);
        local_398 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,
                   0x10);
        local_3a0 = 0;
      } while (local_398 != 0);
    }
    local_1d0 = 0;
LAB_0018defc:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_1d0 == 0) {
      local_1b0 = 0;
      local_1d0 = 1;
    }
  }
  else {
    _memset(auStack_228,0,0x40);
    uVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_318 != 0) {
      lVar6 = *local_218;
      local_320 = 0;
      do {
        do {
          if (*local_218 - lVar6 != 0) {
            _objc_enumerationMutation(*local_218 - lVar6,uVar2);
          }
          local_1e8 = *(ulong *)(local_220 + local_320 * 8);
          uVar3 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          local_239 = 0;
          local_230 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          uVar4 = local_1c0;
          local_34c = 0;
          if (uVar3 != 0) {
            uVar3 = local_230;
            FUN_0018e014();
            _objc_retainAutoreleasedReturnValue();
            local_239 = 1;
            local_238 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
            local_34c = (uint)uVar4;
          }
          if ((local_239 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_238);
          }
          uVar4 = local_1e8;
          bVar1 = (local_34c & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar4;
          }
          local_1d0 = (uint)bVar1;
          _objc_storeStrong(&local_230,0);
          if (local_1d0 != 0) goto LAB_0018db44;
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10
                  );
        local_320 = 0;
      } while (local_318 != 0);
    }
    local_1d0 = 0;
LAB_0018db44:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_1d0 == 0) goto LAB_0018db8c;
  }
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
LAB_0018df94:
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


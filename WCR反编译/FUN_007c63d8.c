// FUN_007c63d8 @ 007c63d8

void FUN_007c63d8(undefined8 ***param_1,undefined8 param_2,undefined8 param_3)

{
  ulong **ppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  ulong **ppuVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 **local_300;
  ulong **local_270;
  ulong **local_268;
  undefined8 **local_1c8;
  undefined *local_198;
  byte local_189;
  undefined8 **local_188;
  undefined8 **local_180;
  ulong **local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  ulong local_130;
  ulong **local_128;
  undefined8 **local_120;
  undefined8 **local_118;
  ulong **local_110;
  undefined8 **local_108;
  undefined *local_100;
  byte local_f1;
  undefined8 **local_f0;
  undefined8 **local_e8;
  ulong **local_e0;
  undefined8 **local_d8;
  int local_d0;
  undefined8 **local_c0;
  undefined8 local_b8;
  ulong **local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (ulong **)0x0;
  local_b8 = param_2;
  local_b0 = (ulong **)param_1;
  _objc_storeStrong(&local_c0,param_3);
  if (local_c0 == (ulong **)0x0) {
    (*DAT_028ccdf8)(local_b0,local_b8,0);
    local_d0 = 1;
  }
  else if ((DAT_026f46b8 & 1) == 0) {
    ppuVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = (undefined8 ***)local_b0;
    local_d8 = ppuVar1;
    _WCRefineMaybeReplaceTransferAmountText(local_b0,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_isEqualToString__0269ccc8,local_d8);
    if (((ulong)pppuVar2 & 1) == 0) {
      local_f1 = 0;
      ppuVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if (ppuVar1 == (ulong **)0x0) {
        local_1c8 = (ulong **)0x0;
      }
      else {
        local_1c8 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = local_1c8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_1c8;
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithString_attributes__026a02b0,local_e0,local_e8);
      local_100 = puVar3;
      (*DAT_028ccdf8)(local_b0,local_b8,puVar3);
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*DAT_028ccdf8)(local_b0,local_b8,local_c0);
    }
    local_d0 = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  else {
    ppuVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_108 = ppuVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pppuVar2 = (undefined8 ***)local_b0;
    local_110 = ppuVar1;
    FUN_007ce104();
    if (((ulong)pppuVar2 & 1) != 0) {
      ppuVar1 = local_110;
      FUN_007ce1d4();
      _objc_retainAutoreleasedReturnValue();
      local_118 = ppuVar1;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar1,PTR_s_length_0269cca0);
      if (ppuVar1 != (ulong **)0x0) {
        _objc_storeStrong(ppuVar1,&local_110,local_118);
      }
      _objc_storeStrong(&local_118,0);
    }
    pppuVar2 = (undefined8 ***)local_b0;
    FUN_007cf428();
    if (((ulong)pppuVar2 & 1) != 0) {
      ppuVar1 = local_110;
      FUN_007cf5a8();
      _objc_retainAutoreleasedReturnValue();
      local_120 = ppuVar1;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar1,PTR_s_length_0269cca0);
      if (ppuVar1 != (ulong **)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isEqualToString__0269ccc8,local_110);
        _objc_storeStrong(&local_110,local_120);
      }
      pppuVar2 = &local_120;
      _objc_storeStrong(pppuVar2,0);
    }
    FUN_007defa0();
    _objc_retainAutoreleasedReturnValue();
    local_128 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_count_0269cfe0);
    iVar5 = 0;
    if (pppuVar2 != (undefined8 ***)0x0) {
      _memset(auStack_170,0,0x40);
      ppuVar1 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = ppuVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (ppuVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10
                );
      if ((undefined8 ***)local_268 != (undefined8 ***)0x0) {
        lVar6 = *local_160;
        local_270 = (ulong **)0x0;
        do {
          do {
            if (*local_160 - lVar6 != 0) {
              _objc_enumerationMutation(*local_160 - lVar6,ppuVar1);
            }
            uVar7 = *(ulong *)(local_168 + (long)local_270 * 8);
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_130 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = local_130,
               (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0), uVar7 != 0))
            {
              pppuVar2 = (undefined8 ***)local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_objectForKey__0269e048,local_130);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_178 = (ulong **)pppuVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)pppuVar2 & 1) == 0) {
                local_d0 = 5;
              }
              else {
                ppuVar4 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_110,PTR_s_isEqualToString__0269ccc8,local_130);
                if (((ulong)ppuVar4 & 1) == 0) {
                  local_d0 = 0;
                }
                else {
                  _objc_storeStrong(&local_110,local_178);
                  local_d0 = 4;
                }
              }
              _objc_storeStrong(&local_178,0);
              if ((local_d0 != 0) && (local_d0 != 5)) goto LAB_007c6c60;
            }
            local_270 = (ulong **)((long)local_270 + 1);
          } while (local_270 < local_268);
          local_268 = ppuVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (ppuVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          local_270 = (ulong **)0x0;
        } while ((undefined8 ***)local_268 != (undefined8 ***)0x0);
      }
      local_d0 = 0;
LAB_007c6c60:
      (*(code *)PTR__objc_release_02578630)(ppuVar1);
      iVar5 = local_d0;
    }
    pppuVar2 = (undefined8 ***)local_b0;
    FUN_007df274(iVar5,local_b0,local_110);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_110;
    local_110 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    pppuVar2 = (undefined8 ***)local_b0;
    _WCRefineMaybeReplaceTransferAmountText(local_b0,local_110);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_110;
    local_110 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    pppuVar2 = (undefined8 ***)local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isEqualToString__0269ccc8,local_108);
    if (((ulong)pppuVar2 & 1) == 0) {
      local_189 = 0;
      ppuVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if (ppuVar1 == (ulong **)0x0) {
        local_300 = (ulong **)0x0;
      }
      else {
        local_300 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_189 = 1;
        local_188 = local_300;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = local_300;
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_188);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithString_attributes__026a02b0,local_110,local_180);
      local_198 = puVar3;
      (*DAT_028ccdf8)(local_b0,local_b8,puVar3);
      _objc_storeStrong(&local_198);
      _objc_storeStrong(&local_180,0);
    }
    else {
      (*DAT_028ccdf8)(local_b0,local_b8,local_c0);
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


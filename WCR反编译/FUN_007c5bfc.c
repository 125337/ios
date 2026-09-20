// FUN_007c5bfc @ 007c5bfc

void FUN_007c5bfc(undefined8 ***param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  ulong **ppuVar3;
  undefined *puVar4;
  ulong **ppuVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong **local_1c8;
  ulong **local_1c0;
  ulong **local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong **local_f8;
  undefined8 **local_f0;
  undefined8 **local_e8;
  ulong **local_e0;
  ulong **local_d8;
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
  ppuVar1 = local_c0;
  if (local_c0 == (ulong **)0x0) {
    (*DAT_028ccdf0)(local_b0,local_b8,0);
    local_d0 = 1;
  }
  else if ((DAT_026f46b8 & 1) == 0) {
    pppuVar2 = (undefined8 ***)local_b0;
    _WCRefineMaybeReplaceTransferAmountText(local_b0,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_isEqualToString__0269ccc8,local_c0);
    if (((ulong)pppuVar2 & 1) == 0) {
      (*DAT_028ccdf0)(local_b0,local_b8,local_d8);
    }
    else {
      (*DAT_028ccdf0)(local_b0,local_b8,local_c0);
    }
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = ppuVar1;
    pppuVar2 = (undefined8 ***)local_b0;
    FUN_007ce104();
    if (((ulong)pppuVar2 & 1) != 0) {
      ppuVar3 = local_e0;
      FUN_007ce1d4();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar3,PTR_s_length_0269cca0);
      if (ppuVar3 != (ulong **)0x0) {
        _objc_storeStrong(ppuVar3,&local_e0,local_e8);
      }
      _objc_storeStrong(&local_e8,0);
    }
    pppuVar2 = (undefined8 ***)local_b0;
    FUN_007cf428();
    if (((ulong)pppuVar2 & 1) != 0) {
      ppuVar3 = local_e0;
      FUN_007cf5a8();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar3,PTR_s_length_0269cca0);
      if (ppuVar3 != (ulong **)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToString__0269ccc8,local_e0);
        _objc_storeStrong(&local_e0,local_f0);
      }
      pppuVar2 = &local_f0;
      _objc_storeStrong(pppuVar2,0);
    }
    FUN_007defa0();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_count_0269cfe0);
    iVar6 = 0;
    if (pppuVar2 != (undefined8 ***)0x0) {
      _memset(auStack_140,0,0x40);
      ppuVar3 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (ppuVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                );
      if ((undefined8 ***)local_1c0 != (undefined8 ***)0x0) {
        lVar7 = *local_130;
        local_1c8 = (ulong **)0x0;
        do {
          do {
            if (*local_130 - lVar7 != 0) {
              _objc_enumerationMutation(*local_130 - lVar7,ppuVar3);
            }
            uVar8 = *(ulong *)(local_138 + (long)local_1c8 * 8);
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_100 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = local_100,
               (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0), uVar8 != 0))
            {
              pppuVar2 = (undefined8 ***)local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_objectForKey__0269e048,local_100)
              ;
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_148 = (ulong **)pppuVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((ulong)pppuVar2 & 1) == 0) {
                local_d0 = 5;
              }
              else {
                ppuVar5 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_isEqualToString__0269ccc8,local_100);
                if (((ulong)ppuVar5 & 1) == 0) {
                  local_d0 = 0;
                }
                else {
                  _objc_storeStrong(&local_e0,local_148);
                  local_d0 = 4;
                }
              }
              _objc_storeStrong(&local_148,0);
              if ((local_d0 != 0) && (local_d0 != 5)) goto LAB_007c6278;
            }
            local_1c8 = (ulong **)((long)local_1c8 + 1);
          } while (local_1c8 < local_1c0);
          local_1c0 = ppuVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (ppuVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c8 = (ulong **)0x0;
        } while ((undefined8 ***)local_1c0 != (undefined8 ***)0x0);
      }
      local_d0 = 0;
LAB_007c6278:
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      iVar6 = local_d0;
    }
    pppuVar2 = (undefined8 ***)local_b0;
    FUN_007df274(iVar6,local_b0,local_e0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_e0;
    local_e0 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    pppuVar2 = (undefined8 ***)local_b0;
    _WCRefineMaybeReplaceTransferAmountText(local_b0,local_e0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_e0;
    local_e0 = (ulong **)pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    (*DAT_028ccdf0)(local_b0,local_b8,local_e0);
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_e0,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


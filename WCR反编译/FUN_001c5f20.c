// FUN_001c5f20 @ 001c5f20

void FUN_001c5f20(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c8c78)(param_1,param_2);
  FUN_00204478();
  if (((param_1 & 1) != 0) || (FUN_00204514(), (param_1 & 1) != 0)) {
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_valueForKey__0269d128,&cf_revokeContentView);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_c0;
        FUN_002045b0();
        uVar1 = (uint)uVar2;
        FUN_00204514();
        if ((uVar1 & 1) != 0) {
          if (DAT_028c9180 == (cfstringStruct *)0x0) {
            pcVar4 = &cf_UIVisualEffectView;
            _NSClassFromString();
            DAT_028c9180 = pcVar4;
          }
          if (DAT_028c9180 != (cfstringStruct *)0x0) {
            _memset(auStack_118,0,0x40);
            uVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_158 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_158 != 0) {
              lVar5 = *local_108;
              local_160 = 0;
              do {
                do {
                  if (*local_108 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_108 - lVar5,uVar2);
                  }
                  uVar6 = *(ulong *)(local_110 + local_160 * 8);
                  local_d8 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isKindOfClass__0269cd68,DAT_028c9180);
                  if (((uVar6 & 1) != 0) &&
                     (uVar6 = local_d8,
                     (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isHidden_026ca768),
                     (uVar6 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setHidden__026ca970,1);
                  }
                  local_160 = local_160 + 1;
                } while (local_160 < local_158);
                local_158 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,
                           auStack_a8,0x10);
                local_160 = 0;
              } while (local_158 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
        }
      }
    }
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


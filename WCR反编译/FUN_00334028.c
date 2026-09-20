// FUN_00334028 @ 00334028

void FUN_00334028(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*DAT_028c9eb8)(local_b0,local_b8,local_c0);
  if (((local_c0 == 0) ||
      (uVar2 = local_c0,
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,&cf__),
      (uVar2 & 1) == 0)) || (uVar2 = local_b0, FUN_0033441c(), (uVar2 & 1) != 0)) {
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar5 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_110 + local_148 * 8);
          pcVar3 = "MMMsgCommonTipsView";
          local_d8 = uVar6;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar3);
          uVar1 = local_b0;
          if ((uVar6 & 1) != 0) {
            puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
            local_d0 = 2;
            goto LAB_00334388;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_d0 = 0;
LAB_00334388:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


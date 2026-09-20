// FUN_006064c8 @ 006064c8

void FUN_006064c8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_180;
  ulong local_178;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d8;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  if (DAT_028cb948 == (char *)0x0) {
    pcVar2 = "BaseMsgContentViewController";
    _objc_getClass();
    DAT_028cb948 = pcVar2;
  }
  pcVar2 = DAT_028cb948;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  uVar4 = local_c8;
  if ((uVar3 & 1) == 0) {
    _memset(auStack_120,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar5 = *local_110;
      local_180 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar3);
          }
          local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
          uVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_findBaseMsgViewControllerFromVie_026a5e50,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar4;
          if (uVar4 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar4;
          }
          local_d8 = (uint)(uVar4 != 0);
          _objc_storeStrong(&local_128,0);
          if (local_d8 != 0) goto LAB_006067b8;
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    local_d8 = 0;
LAB_006067b8:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d8 == 0) {
      uVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar3 = local_b8;
      if (uVar4 != 0) {
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_findBaseMsgViewControllerFromVie_026a5e50)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_130 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar3 = local_130;
        bVar1 = local_130 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar3;
        }
        local_d8 = (uint)bVar1;
        _objc_storeStrong(&local_130,0);
        if (local_d8 != 0) goto LAB_0060692c;
      }
      local_b0 = 0;
      local_d8 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar4;
    local_d8 = 1;
  }
LAB_0060692c:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// FUN_00790408 @ 00790408

byte FUN_00790408(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_190;
  ulong local_188;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 0;
  local_c0 = uVar3;
  while (uVar3 = local_c0, local_c0 != 0 && local_d8 < 8) {
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar5 = local_c0;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = uVar5;
      _memset(auStack_128,0,0x40);
      uVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_allTargets_026a46d0);
      _objc_retainAutoreleasedReturnValue();
      local_188 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_188 != 0) {
        lVar6 = *local_118;
        local_190 = 0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,uVar3);
            }
            local_e8 = *(undefined8 *)(local_120 + local_190 * 8);
            uVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_actionsForTarget_forControlEvent_026a46d8,local_e8,0x40);
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_containsObject__0269cbb8,&cf_onClickMoreButton_);
            bVar1 = (uVar5 & 1) != 0;
            if (bVar1) {
              local_a9 = 1;
            }
            _objc_storeStrong(&local_130,0);
            bVar2 = true;
            if (bVar1) goto LAB_00790770;
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_190 = 0;
        } while (local_188 != 0);
      }
      bVar2 = false;
LAB_00790770:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (!bVar2) {
        bVar2 = false;
      }
      _objc_storeStrong(&local_e0,0);
      if (bVar2) goto LAB_00790848;
    }
    local_d8 = local_d8 + 1;
    uVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c0;
    local_c0 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  local_a9 = 0;
LAB_00790848:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}


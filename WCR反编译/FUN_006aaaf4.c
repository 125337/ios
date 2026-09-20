// FUN_006aaaf4 @ 006aaaf4

void FUN_006aaaf4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  uint local_164;
  ulong local_148;
  ulong local_140;
  undefined *local_118;
  int local_110;
  byte local_109;
  undefined *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_f0;
    local_148 = 0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,uVar2);
        }
        puVar5 = *(undefined **)(local_f8 + local_148 * 8);
        puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
        local_c0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_109 = 0;
        local_164 = 0;
        if (((ulong)puVar5 & 1) != 0) {
          puVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 1;
          local_108 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_164 = (uint)puVar3;
        }
        if ((local_109 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_108);
        }
        puVar3 = local_c0;
        if ((local_164 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar3;
          local_110 = 1;
          goto LAB_006aada4;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  local_110 = 0;
LAB_006aada4:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_110 == 0) {
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setName__0269e0c8,&cf_wcr_pf_unreadDot);
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setContentsScale__026ca8f0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_110 = 1;
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


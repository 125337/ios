// FUN_0030ee74 @ 0030ee74

void FUN_0030ee74(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_280;
  ulong local_278;
  ulong local_210;
  ulong local_208;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*DAT_028c9b40)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_0031bdd8(local_130);
    _memset(auStack_190,0,0x40);
    uVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_208 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_208 != 0) {
      lVar5 = *local_180;
      local_210 = 0;
      do {
        do {
          if (*local_180 - lVar5 != 0) {
            _objc_enumerationMutation(*local_180 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_188 + local_210 * 8);
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_150 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isMemberOfClass__026a2030,puVar1);
          uVar4 = local_150;
          if ((uVar6 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar4 & 1) != 0) goto LAB_0030f0cc;
          }
          else {
LAB_0030f0cc:
            FUN_0031bdd8(local_150);
          }
          _memset(auStack_1d8,0,0x40);
          uVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_278 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_278 != 0) {
            lVar7 = *local_1c8;
            local_280 = 0;
            do {
              do {
                if (*local_1c8 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_1c8 - lVar7,uVar4);
                }
                uVar8 = *(ulong *)(local_1d0 + local_280 * 8);
                puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
                local_198 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isMemberOfClass__026a2030,puVar1);
                uVar6 = local_198;
                if ((uVar8 & 1) == 0) {
                  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
                  if ((uVar6 & 1) != 0) goto LAB_0030f280;
                }
                else {
LAB_0030f280:
                  FUN_0031bdd8(local_198);
                }
                local_280 = local_280 + 1;
              } while (local_280 < local_278);
              local_278 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                         auStack_128,0x10);
              local_280 = 0;
            } while (local_278 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_210 = 0;
      } while (local_208 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// nicknameTextLabelFromView: @ 010df4e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::nicknameTextLabelFromView_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  dVar7 = DAT_02323d38;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar4 = local_c8;
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar6 = local_c8;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar6 & 1) != 0) {
      uVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar4;
      if (((uVar4 == 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isHidden_026ca768), (uVar4 & 1) != 0))
         || ((*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_alpha_026ca4d8), uVar4 = local_d8,
            dVar7 < dVar1)) {
        local_cc = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar4;
        local_cc = 1;
      }
      _objc_storeStrong(&local_d8,0);
      if (local_cc != 0) goto LAB_010df8c0;
    }
    _memset(auStack_120,0,0x40);
    uVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar5 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar4);
          }
          uVar6 = *(ulong *)(local_118 + local_170 * 8);
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
          if (((uVar6 & 1) == 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_alpha_026ca4d8), uVar6 = local_e0
             , dVar1 <= dVar7)) {
            puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar2 = local_e0;
            if ((uVar6 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar2;
              local_cc = 1;
              goto LAB_010df890;
            }
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_cc = 0;
LAB_010df890:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar6;
    local_cc = 1;
  }
LAB_010df8c0:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}


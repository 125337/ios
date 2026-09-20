// backgroundImageViewForTableView: @ 0178480c

/* Function Stack Size: 0x18 bytes */

ID WCPluginsViewControllerBehavior::backgroundImageViewForTableView_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined8 in_d1;
  double dVar9;
  double dVar10;
  ulong local_358;
  ulong local_350;
  ulong local_2f0;
  ulong local_2e8;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  ulong local_210;
  double local_208;
  double local_200;
  double local_1e8;
  double local_1e0;
  double local_1c0;
  undefined1 local_1b1;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  int local_160;
  undefined1 local_159;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar9 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  dVar7 = DAT_02323d00;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  local_150 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_159 = 0;
  bVar2 = false;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    uVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != 0;
    local_159 = uVar1;
    local_158 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_159;
  }
  local_159 = uVar1;
  uVar3 = local_150;
  if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = uVar3;
    local_160 = 1;
  }
  else {
    _memset(auStack_1a8,0,0x40);
    uVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2e8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2e8 != 0) {
      lVar5 = *local_198;
      local_2f0 = 0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_1a0 + local_2f0 * 8);
          puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_168 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_1b1 = 0;
          bVar2 = false;
          uVar1 = (uVar6 & 1) != 0;
          if ((bool)uVar1) {
            uVar6 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar6 != 0;
            local_1b1 = uVar1;
            local_1b0 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar1 = local_1b1;
          }
          local_1b1 = uVar1;
          uVar6 = local_168;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar6;
            local_160 = 1;
            goto LAB_01784bb0;
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_2f0 = 0;
      } while (local_2e8 != 0);
    }
    local_160 = 0;
LAB_01784bb0:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_160 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
      local_1e0 = dVar7;
      _CGRectGetWidth(dVar7,in_d1);
      dVar7 = dVar7 * dVar9;
      dVar8 = dVar9;
      local_1c0 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
      local_208 = dVar7;
      local_200 = dVar8;
      _CGRectGetHeight(dVar7,dVar8);
      dVar7 = dVar7 * dVar9;
      local_1e8 = dVar7;
      _memset(auStack_250,0,0x40);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_350 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_350 != 0) {
        lVar5 = *local_240;
        local_358 = 0;
        do {
          do {
            dVar8 = dVar7;
            dVar10 = dVar9;
            if (*local_240 - lVar5 != 0) {
              _objc_enumerationMutation(*local_240 - lVar5,uVar3);
              dVar8 = dVar7;
              dVar10 = dVar9;
            }
            uVar6 = *(ulong *)(local_248 + local_358 * 8);
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_210 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            bVar2 = true;
            if ((uVar6 & 1) != 0) {
              uVar6 = local_210;
              (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = uVar6 == 0;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            uVar6 = local_210;
            dVar7 = dVar8;
            dVar9 = dVar10;
            if (!bVar2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_bounds_026ca548);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_convertRect_toView__0269ded8,local_148);
              dVar7 = dVar8;
              _CGRectGetWidth(dVar8,dVar10);
              dVar9 = local_1c0;
              if ((local_1c0 <= dVar7) &&
                 (_CGRectGetHeight(dVar8,dVar10), uVar6 = local_210, dVar7 = dVar8,
                 dVar9 = local_1e8, local_1e8 <= dVar8)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = uVar6;
                local_160 = 1;
                goto LAB_01784f50;
              }
            }
            local_358 = local_358 + 1;
          } while (local_358 < local_350);
          local_350 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                     0x10);
          local_358 = 0;
        } while (local_350 != 0);
      }
      local_160 = 0;
LAB_01784f50:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_160 == 0) {
        local_130 = 0;
        local_160 = 1;
      }
    }
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


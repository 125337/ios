// resolvedBaseHeight:width: @ 00fce8c0

/* Function Stack Size: 0x20 bytes */

double WCRefineHomeTableHeaderHost::resolvedBaseHeight_width_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  double dVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double in_d3;
  double local_288;
  double local_280;
  ulong local_260;
  ulong local_258;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  double local_178;
  byte local_169;
  ulong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  double local_100;
  double local_e0;
  undefined4 local_d4;
  double local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar4 = local_c8;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_b0 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    uVar6 = 0x3fe0000000000000;
    local_100 = param_4;
    if (in_d3 < 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
      local_118 = uVar6;
    }
    uVar4 = local_c8;
    local_e0 = in_d3;
    if (in_d3 < 0.5) {
      dVar7 = 1.7976931348623157e+308;
      dVar8 = local_d0;
      FUN_00fcee38();
      local_140 = dVar8;
      local_138 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_sizeThatFits__0269ec10);
      local_130 = dVar8;
      local_128 = dVar7;
      local_e0 = dVar7;
    }
    uVar4 = local_c8;
    if (local_e0 < 0.5) {
      dVar7 = *(double *)(PTR__UILayoutFittingCompressedSize_025781e0 + 8);
      dVar8 = local_d0;
      FUN_00fcee38();
      local_160 = dVar8;
      local_158 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_systemLayoutSizeFittingSize_with_026ad168);
      local_150 = dVar8;
      local_148 = dVar7;
      local_e0 = dVar7;
    }
    dVar8 = 0.5;
    local_169 = 0;
    bVar1 = false;
    if (local_e0 < 0.5) {
      uVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 != 0;
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if (bVar1) {
      local_178 = 0.0;
      _memset(auStack_1c0,0,0x40);
      uVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_258 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_258 != 0) {
        lVar5 = *local_1b0;
        local_260 = 0;
        do {
          do {
            dVar7 = dVar8;
            if (*local_1b0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar5,uVar4);
              dVar7 = dVar8;
            }
            dVar2 = local_178;
            local_180 = *(undefined8 *)(local_1b8 + local_260 * 8);
            dVar8 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_frame_026ca640);
            _CGRectGetMaxY(dVar8,dVar7);
            local_280 = dVar8;
            if (dVar8 <= dVar2) {
              local_280 = dVar2;
            }
            local_178 = local_280;
            local_260 = local_260 + 1;
          } while (local_260 < local_258);
          local_258 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_260 = 0;
        } while (local_258 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_e0 = local_178;
    }
    if ((local_e0 < 0.5) && (uVar4 = local_c8, FUN_00fcee64(), (uVar4 & 1) != 0)) {
      local_e0 = 56.0;
    }
    if (local_e0 <= 0.0) {
      local_288 = 0.0;
    }
    else {
      local_288 = local_e0;
    }
    local_b0 = local_288;
  }
  local_d4 = 1;
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}


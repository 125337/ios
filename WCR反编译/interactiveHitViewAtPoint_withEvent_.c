// interactiveHitViewAtPoint:withEvent: @ 00fef788

/* Function Stack Size: 0x28 bytes */

ID WCRKeywordAlertDanmakuPassThroughView::interactiveHitViewAtPoint_withEvent_
             (ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  undefined8 in_d1;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_d3;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1a8 [4];
  double dStack_188;
  double local_180;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  double local_f8;
  double local_f0;
  int local_dc;
  undefined8 local_d8;
  SEL local_d0;
  ID local_c8;
  double local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  dVar10 = DAT_02323d38;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = in_d0;
  local_b8 = in_d1;
  _objc_storeStrong(&local_d8,param_3.field0_0x0,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isUserInteractionEnabled_026ca770);
  if ((((IVar2 & 1) == 0) ||
      (IVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isHidden_026ca768),
      (IVar2 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_alpha_026ca4d8), in_d0 < dVar1)) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    IVar2 = local_c8;
    dVar8 = dVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    local_f8 = dVar8;
    local_f0 = dVar10;
    _CGRectContainsPoint(in_d0,dVar8,dVar10,in_d3,local_c0,local_b8);
    if ((IVar2 & 1) == 0) {
      local_b0 = 0;
      local_dc = 1;
    }
    else {
      _memset(auStack_148,0,0x40);
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_1d8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_1d8 != 0) {
        lVar6 = *local_138;
        local_1e0 = 0;
        do {
          do {
            if (*local_138 - lVar6 != 0) {
              _objc_enumerationMutation(*local_138 - lVar6,IVar3);
            }
            uVar7 = *(ulong *)(local_140 + local_1e0 * 8);
            local_108 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
            if (((uVar7 & 1) == 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_alpha_026ca4d8),
               dVar1 <= in_d0)) {
              uVar7 = local_108;
              dVar8 = dVar1;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if (local_150 == 0) {
                uVar7 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_frame_026ca640);
                local_170 = in_d0;
                dStack_168 = dVar8;
                local_160 = dVar10;
                uStack_158 = in_d3;
              }
              else {
                uVar7 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_frame_026ca640);
                local_170 = in_d0;
                dStack_168 = dVar8;
                local_160 = dVar10;
                uStack_158 = in_d3;
              }
              _CGRectInset();
              dVar10 = local_160;
              dStack_188 = dStack_168;
              local_180 = local_160;
              _CGRectContainsPoint(local_170,dStack_168,local_160,uStack_158,local_c0,local_b8);
              if ((uVar7 & 1) == 0) {
                local_dc = 3;
                in_d0 = local_170;
                in_d3 = uStack_158;
              }
              else {
                in_d0 = local_c0;
                uVar9 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_convertPoint_fromView__026a1c40,local_c8);
                uVar4 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (in_d0,uVar9,local_108,PTR_s_hitTest_withEvent__026ca670,local_d8);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = local_108;
                local_1a8[0] = uVar4;
                if (uVar4 == 0) {
                  puVar5 = PTR_WCRKeywordAlertDanmakuBubbleView_026cec60;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRKeywordAlertDanmakuBubbleView_026cec60,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
                  uVar4 = local_108;
                  if ((uVar7 & 1) == 0) {
                    local_dc = 0;
                    in_d3 = uStack_158;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b0 = uVar4;
                    local_dc = 1;
                    in_d3 = uStack_158;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_dc = 1;
                  in_d3 = uStack_158;
                  local_b0 = uVar4;
                }
                _objc_storeStrong(local_1a8,0);
              }
              _objc_storeStrong(&local_150,0);
              if ((local_dc != 0) && (local_dc != 3)) goto LAB_00fefccc;
            }
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1e0 = 0;
        } while (local_1d8 != 0);
      }
      local_dc = 0;
LAB_00fefccc:
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (local_dc == 0) {
        local_b0 = 0;
        local_dc = 1;
      }
    }
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}


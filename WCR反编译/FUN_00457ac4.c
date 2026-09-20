// FUN_00457ac4 @ 00457ac4

void FUN_00457ac4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_2b8;
  ulong local_278;
  ulong local_270;
  undefined *local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  ulong local_d0;
  byte local_c1;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_accessibilityIdentifier_0269ec20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if ((uVar3 & 1) == 0) {
    local_c0 = 1;
  }
  else if (DAT_028ca9b8 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
    local_c0 = 1;
  }
  else {
    FUN_0045839c();
    local_c1 = (byte)uVar2;
    FUN_0043c204();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_d0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__b_);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_FG_1_026a1018;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    FUN_004584a0();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = PTR_s_Link_100_026a1028;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar10 = DAT_02323da0;
    uVar11 = DAT_02323d98;
    uVar9 = DAT_02323d90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    FUN_004584a0();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setUserInteractionEnabled__026caad8,local_c1 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAccessibilityLabel__0269e968,local_d8);
    _memset(auStack_130,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_270 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != 0) {
      lVar7 = *local_120;
      local_278 = 0;
      do {
        do {
          if (*local_120 - lVar7 != 0) {
            _objc_enumerationMutation(*local_120 - lVar7,uVar2);
          }
          uVar8 = *(ulong *)(local_128 + local_278 * 8);
          puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          local_f0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar3 = local_f0;
          if ((uVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setText__026caa88,local_d8);
            bVar1 = (local_c1 & 1) == 0;
            if (bVar1) {
              uVar10 = 0x3fd6666666666666;
              local_2b8 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_colorWithAlphaComponent__026ca578);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar9;
              local_140 = local_2b8;
            }
            else {
              local_2b8 = local_e8;
              uVar12 = uVar9;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextColor__026caa98,local_2b8);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_sizeToFit_0269ec08);
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_frame_026ca640);
            uVar9 = 0;
            uVar13 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
            _CGRectGetWidth(uVar9,uVar12,uVar13,uVar10);
            uVar10 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setFrame__026ca960);
            _objc_storeStrong(&local_138,0);
          }
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_278 = 0;
      } while (local_270 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


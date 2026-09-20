// FUN_00455ae0 @ 00455ae0

void FUN_00455ae0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  double dVar25;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  double local_98;
  ulong local_90;
  undefined4 local_88;
  byte local_71;
  ulong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  uVar2 = local_70;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_71 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_88 = 1;
  }
  else {
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0x2c644);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    if ((local_71 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setHidden__026ca970,1);
      local_88 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        local_98 = 22.0;
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uStack_b8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
        local_c0 = *(undefined8 *)PTR__CGRectZero_025782f0;
        uStack_a8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
        local_b0 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,uStack_b8,local_b0,uStack_a8,puVar1,PTR_s_initWithFrame__026ca6e8);
        local_a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02324190);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323da0,DAT_02323d98,DAT_02323d90,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        dVar25 = local_98 * 0.5;
        puVar1 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar25);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setUserInteractionEnabled__026caad8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar1,
                   PTR_s_initWithFrame__026ca6e8);
        local_c8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf__);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextAlignment__026caa90,1);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightBold_02578140,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_a0);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_widthAnchor_0269ce40);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_98);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_a0;
        local_68 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_heightAnchor_0269ce50);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_98);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_a0;
        local_60 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc008000000000000,puVar7,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_a0;
        local_58 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc008000000000000,puVar9,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_c8;
        local_50 = puVar11;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = local_c8;
        local_48 = puVar14;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar15;
        (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = local_c8;
        local_40 = puVar17;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar18;
        (*(code *)PTR__objc_msgSend_02578628)(puVar18,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = local_c8;
        local_38 = puVar20;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar21;
        (*(code *)PTR__objc_msgSend_02578628)(puVar21,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar23;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_68,8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
        (*(code *)PTR__objc_release_02578630)(puVar24);
        (*(code *)PTR__objc_release_02578630)(puVar23);
        (*(code *)PTR__objc_release_02578630)(puVar22);
        (*(code *)PTR__objc_release_02578630)(puVar21);
        (*(code *)PTR__objc_release_02578630)(puVar20);
        (*(code *)PTR__objc_release_02578630)(puVar19);
        (*(code *)PTR__objc_release_02578630)(puVar18);
        (*(code *)PTR__objc_release_02578630)(puVar17);
        (*(code *)PTR__objc_release_02578630)(puVar16);
        (*(code *)PTR__objc_release_02578630)(puVar15);
        (*(code *)PTR__objc_release_02578630)(puVar14);
        (*(code *)PTR__objc_release_02578630)(puVar13);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(uVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_90,local_a0);
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_a0,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bringSubviewToFront__026ca550,local_90);
      local_88 = 0;
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


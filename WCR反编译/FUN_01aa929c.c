// FUN_01aa929c @ 01aa929c

void FUN_01aa929c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  long local_1f0;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  byte local_c9;
  long local_c8;
  byte local_b9;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_89;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_2);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeFromSuperview_026ca800);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeFromSuperview_026ca800);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setIndentationLevel__026be160,0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_68,PTR_s_setIndentationWidth__026be168);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAccessibilityLabel__0269e968,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setClipsToBounds__026ca8c8,0);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_89 = 0;
  bVar1 = true;
  if (local_70 != 0) {
    lVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar4 == 0;
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (bVar1) {
    local_90 = 1;
  }
  else {
    local_98 = 0x4040000000000000;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    puVar6 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_a0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTag__026caa80,DAT_02339f08);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    lVar4 = local_70;
    FUN_01acce2c();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_setAutoresizingMask__026ca878,0);
    FUN_01acd34c(0x4040000000000000,local_a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_a8);
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar6,*(undefined8 *)(puVar6 + 8),*(undefined8 *)(puVar6 + 0x10),
               *(undefined8 *)(puVar6 + 0x18));
    local_b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTag__026caa80,DAT_02339f10);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01ab977c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLineBreakMode__026ca988,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNumberOfLines__026ca9d8,1);
    lVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b9 = 0;
    local_c9 = 0;
    local_1f0 = local_70;
    if (lVar7 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = local_1f0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_1f0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setText__026caa88,local_1f0);
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAccessibilityLabel__0269e968);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_a0;
    local_60 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_a0;
    local_58 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_widthAnchor_0269ce40);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = local_a0;
    local_50 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = local_b0;
    local_48 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,puVar17,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_b0;
    local_40 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar20,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = local_b0;
    local_38 = puVar23;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar24;
    (*(code *)PTR__objc_msgSend_02578628)(puVar24,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar27;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar28);
    (*(code *)PTR__objc_release_02578630)(puVar27);
    (*(code *)PTR__objc_release_02578630)(uVar26);
    (*(code *)PTR__objc_release_02578630)(uVar25);
    (*(code *)PTR__objc_release_02578630)(puVar24);
    (*(code *)PTR__objc_release_02578630)(puVar23);
    (*(code *)PTR__objc_release_02578630)(uVar22);
    (*(code *)PTR__objc_release_02578630)(uVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(uVar11);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_a8;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_01acd890;
    local_e8 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_a0;
    local_e0 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = puVar5;
    _dispatch_async(puVar6,&local_100);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    local_90 = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


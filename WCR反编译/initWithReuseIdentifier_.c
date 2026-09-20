// initWithReuseIdentifier: @ 01eb1f00

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoSectionHeader::initWithReuseIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 **ppuVar27;
  undefined8 **ppuVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *local_98;
  undefined8 *local_90;
  undefined *local_88;
  undefined8 local_80;
  SEL local_78;
  ID *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = (ID *)param_1;
  _objc_storeStrong(&local_80,param_3);
  local_90 = local_70;
  local_70 = (ID *)0x0;
  ppuVar2 = &local_90;
  local_88 = PTR_WCRefineToDoSectionHeader_026d01d0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithReuseIdentifier__026c7720,local_80);
  local_70 = (ID *)ppuVar2;
  _objc_storeStrong(&local_70);
  if ((undefined8 **)local_70 != (undefined8 **)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIBackgroundConfiguration_026cf6c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBackgroundConfiguration_026cf6c0,
               PTR_s_clearConfiguration_026c7728);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundConfiguration__026c7718);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)local_70 + (long)_titleLabel);
    *(undefined8 *)((long)local_70 + (long)_titleLabel) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_titleLabel),
               PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_titleLabel),PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    ppuVar2 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)local_70 + (long)_countLabel);
    *(undefined8 *)((long)local_70 + (long)_countLabel) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_countLabel),
               PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_countLabel),PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_countLabel),PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    ppuVar2 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)local_70 + (long)_chevron);
    *(undefined8 *)((long)local_70 + (long)_chevron) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_chevron),
               PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_chevron),PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_70 + (long)_chevron),PTR_s_setContentMode__026ca8e0,1);
    ppuVar2 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    uVar5 = *(undefined8 *)((long)local_70 + (long)_titleLabel);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4034000000000000,uVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)local_70 + (long)_titleLabel);
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)local_70 + (long)_chevron);
    local_60 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc034000000000000,uVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)local_70 + (long)_chevron);
    local_58 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar16;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar15;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)local_70 + (long)_chevron);
    local_50 = uVar18;
    (*(code *)PTR__objc_msgSend_02578628)(uVar19,PTR_s_widthAnchor_0269ce40);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)local_70 + (long)_chevron);
    local_48 = uVar20;
    (*(code *)PTR__objc_msgSend_02578628)(uVar21,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)local_70 + (long)_countLabel);
    local_40 = uVar22;
    (*(code *)PTR__objc_msgSend_02578628)(uVar23,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)local_70 + (long)_chevron);
    (*(code *)PTR__objc_msgSend_02578628)(uVar24,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc020000000000000,uVar23,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)local_70 + (long)_countLabel);
    local_38 = uVar25;
    (*(code *)PTR__objc_msgSend_02578628)(uVar26,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = (undefined8 **)local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar27;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar26;
    (*(code *)PTR__objc_msgSend_02578628)(uVar26,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = uVar29;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar30);
    (*(code *)PTR__objc_release_02578630)(uVar29);
    (*(code *)PTR__objc_release_02578630)(ppuVar28);
    (*(code *)PTR__objc_release_02578630)(ppuVar27);
    (*(code *)PTR__objc_release_02578630)(uVar26);
    (*(code *)PTR__objc_release_02578630)(uVar25);
    (*(code *)PTR__objc_release_02578630)(uVar24);
    (*(code *)PTR__objc_release_02578630)(uVar23);
    (*(code *)PTR__objc_release_02578630)(uVar22);
    (*(code *)PTR__objc_release_02578630)(uVar21);
    (*(code *)PTR__objc_release_02578630)(uVar20);
    (*(code *)PTR__objc_release_02578630)(uVar19);
    (*(code *)PTR__objc_release_02578630)(uVar18);
    (*(code *)PTR__objc_release_02578630)(ppuVar17);
    (*(code *)PTR__objc_release_02578630)(ppuVar16);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    (*(code *)PTR__objc_release_02578630)(uVar14);
    (*(code *)PTR__objc_release_02578630)(ppuVar13);
    (*(code *)PTR__objc_release_02578630)(ppuVar12);
    (*(code *)PTR__objc_release_02578630)(uVar11);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_release_02578630)(ppuVar9);
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar6);
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    ppuVar2 = (undefined8 **)local_70;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    _objc_storeStrong(&local_98,0);
  }
  pIVar1 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return (ID)(undefined8 **)pIVar1;
}


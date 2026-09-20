// buildSummaryHeader @ 019fe9bc

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::buildSummaryHeader(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 in_d2;
  undefined8 uVar24;
  undefined *local_c0;
  undefined *local_b8 [5];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined *local_70;
  SEL local_68;
  ID local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = param_2;
  local_60 = param_1;
  _objc_alloc();
  IVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar23 = 0;
  uVar22 = 0;
  uVar24 = 0x4057000000000000;
  FUN_019ff2f4();
  local_90 = uVar22;
  local_88 = uVar23;
  local_78 = uVar24;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar22,uVar23,in_d2,uVar24,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAutoresizingMask__026ca878);
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  puVar1 = PTR__CGRectZero_025782f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_b8[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_b8[0]);
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setNumberOfLines__026ca9d8,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_c0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_b8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_b8[0];
  local_58 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc034000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = local_b8[0];
  local_50 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,puVar9,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = local_c0;
  local_48 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = local_b8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = local_c0;
  local_40 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = local_b8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = local_c0;
  local_38 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_b8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x401c000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
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
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSummaryHeader__026bb560,local_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSummaryTitleLabel__026bb568,local_b8[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSummaryDetailLabel__026bb570,local_c0);
  IVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_updateSummaryHeader_026bb550);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(local_b8,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


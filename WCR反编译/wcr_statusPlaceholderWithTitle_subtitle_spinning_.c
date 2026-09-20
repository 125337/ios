// wcr_statusPlaceholderWithTitle:subtitle:spinning: @ 01bd20ac

/* Function Stack Size: 0x24 bytes */

ID WCRefineMomentsCacheViewController::wcr_statusPlaceholderWithTitle_subtitle_spinning_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
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
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0 [5];
  undefined *local_78;
  byte local_69;
  long local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  local_69 = (byte)param_5;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_78 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAutoresizingMask__026ca878,0x12);
  puVar1 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc_init();
  local_a0[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAxis__0269cf78,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_setAlignment__026ca858,3);
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000,local_a0[0],PTR_s_setSpacing__0269cf80);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0[0],PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_a0[0]);
  if ((local_69 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
               &cf_photo_on_rectangle_angled);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithImage__0269e558);
    local_b0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setContentMode__026ca8e0,1);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_widthAnchor_0269ce40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addArrangedSubview__026b9d98,local_b0);
    _objc_storeStrong(&local_b0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_startAnimating_026cab18);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addArrangedSubview__026b9d98,local_a8);
    _objc_storeStrong(&local_a8,0);
  }
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_60);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addArrangedSubview__026b9d98,local_b8);
  lVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_68);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTextAlignment__026caa90,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setNumberOfLines__026ca9d8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_addArrangedSubview__026b9d98,local_c0);
    _objc_storeStrong(&local_c0,0);
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_a0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_centerXAnchor_0269ce00);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_centerXAnchor_0269ce00);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_a0[0];
  local_48 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc044000000000000,puVar7,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_a0[0];
  local_40 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4040000000000000,puVar10,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = local_a0[0];
  local_38 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc040000000000000,puVar13,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
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
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}


// buildCollection @ 01a8c1e0

/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::buildCollection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  ID IVar17;
  ID IVar18;
  ID IVar19;
  ID IVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *local_68;
  ID local_60;
  SEL local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headerView_026a0fa8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  local_60 = param_1;
  _objc_alloc_init();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setMinimumInteritemSpacing__026aa990);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,local_68,PTR_s_setMinimumLineSpacing__026aa988);
  uVar22 = 0x4010000000000000;
  uVar25 = 0x4030000000000000;
  uVar23 = 0x4030000000000000;
  uVar24 = 0x403c000000000000;
  FUN_01a8c194();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar22,uVar23,uVar24,uVar25,local_68,PTR_s_setSectionInset__026aa998);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCollectionView__026aa9a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRGradientPaletteCardCell_026cf2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGradientPaletteCardCell_026cf2e0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_registerClass_forCellWithReuseId_026aa9b0,puVar1,&cf_WCRGradientCard);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_50;
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar9 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar10 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = local_50;
  local_40 = IVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar13 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar14 = IVar13;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar15 = IVar12;
  (*(code *)PTR__objc_msgSend_02578628)(IVar12,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  IVar16 = local_50;
  local_38 = IVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  IVar17 = IVar16;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar18 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar19 = IVar18;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar20 = IVar17;
  (*(code *)PTR__objc_msgSend_02578628)(IVar17,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar21);
  (*(code *)PTR__objc_release_02578630)(IVar20);
  (*(code *)PTR__objc_release_02578630)(IVar19);
  (*(code *)PTR__objc_release_02578630)(IVar18);
  (*(code *)PTR__objc_release_02578630)(IVar17);
  (*(code *)PTR__objc_release_02578630)(IVar16);
  (*(code *)PTR__objc_release_02578630)(IVar15);
  (*(code *)PTR__objc_release_02578630)(IVar14);
  (*(code *)PTR__objc_release_02578630)(IVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(IVar10);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


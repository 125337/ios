// makeCapsuleBarTag:height:width: @ 01c39c8c

/* Function Stack Size: 0x28 bytes */

ID WCRefineNameplateLibraryViewController::makeCapsuleBarTag_height_width_
             (ID param_1,SEL param_2,long_long param_3,double param_4,double param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  ID IVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID IVar16;
  ID IVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  double local_80;
  double local_78;
  long_long local_70;
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
  local_80 = param_5;
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  _objc_alloc_init();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,local_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar22 = local_78 / 2.0;
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar22);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3e23d70a);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar23 = 0;
  uVar24 = 0x4008000000000000;
  FUN_01c38978();
  puVar1 = local_88;
  local_98 = uVar23;
  uStack_90 = uVar24;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uStack_90;
  local_b0 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,uStack_90);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78 / 2.0,local_60,PTR_s_addFrostToBar_radius__026c1ab8,local_88);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_widthAnchor_0269ce40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_80);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_setIdentifier__026a7358,&cf_wcrNPFloatBarWidth);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_centerXAnchor_0269ce00);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_88;
  local_58 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar9 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc020000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_88;
  local_50 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar13 = IVar12;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,puVar11,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = local_88;
  local_48 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar16 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar17 = IVar16;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc030000000000000,puVar15,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_88;
  local_40 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)(local_78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_b8;
  puVar21 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = puVar20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar21);
  (*(code *)PTR__objc_release_02578630)(puVar20);
  (*(code *)PTR__objc_release_02578630)(puVar19);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(IVar17);
  (*(code *)PTR__objc_release_02578630)(IVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(IVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_88;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}


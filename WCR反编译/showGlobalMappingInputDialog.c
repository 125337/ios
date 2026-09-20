// showGlobalMappingInputDialog @ 01e66e5c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineTextReplaceViewController::showGlobalMappingInputDialog(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ID local_138;
  char *local_130;
  undefined8 local_128;
  double local_108;
  char *local_100 [4];
  undefined *local_e0;
  undefined *local_d8 [5];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double dStack_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  char *local_78;
  SEL local_70;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMPageSheetConfig";
  local_70 = param_2;
  local_68 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTitle__0269cef0,&cf_hQ__f_);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNavLeftStyle__026aa730,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEnableDragToClose__026aa740,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_80 = puVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  _objc_alloc_init();
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_globalMappingReplacement_026a8430);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar29 = 20.0;
  uVar26 = 0x4034000000000000;
  uVar27 = 0x4034000000000000;
  uVar28 = 0x4034000000000000;
  FUN_01e67d6c();
  local_b0 = uVar26;
  uStack_a8 = uVar27;
  local_a0 = uVar28;
  dStack_98 = dVar29;
  (*(code *)PTR__objc_msgSend_02578628)(uVar26,local_90,PTR_s_setTextContainerInset__026a9fd8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_wcRefine_configureSheetTextViewK_026c6d10,local_90);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_90);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_d8[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setText__026caa88,&cf_hQ__f_U);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setNumberOfLines__026ca9d8,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_d8[0]);
  _objc_setAssociatedObject(local_68,"globalMappingTextView",local_90);
  _objc_setAssociatedObject(local_68,"globalMappingExplanationLabel",local_d8[0],1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_90;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_90;
  local_60 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_90;
  local_58 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = local_90;
  local_50 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = local_d8[0];
  local_48 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,puVar16,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_d8[0];
  local_40 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,puVar19,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = local_d8[0];
  local_38 = puVar21;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = 0xc034000000000000;
  puVar24 = puVar22;
  (*(code *)PTR__objc_msgSend_02578628)(puVar22,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar24;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(puVar25);
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
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLayoutConstraint_026ce030,PTR_s_activateConstraints__0269ce58,
             local_e0);
  _objc_storeStrong(&local_e0,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_setupPlaceholderLogic_placeholde_026bd6f0,local_90,local_d8[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setView__026aa750,local_88);
  pcVar1 = "MMPageSheetAdapter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_100[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setPageSheetConfig__026aa758,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_setHostViewController__026a58c8,local_80)
  ;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar29 = (dVar29 * 3.0) / 5.0;
  local_128 = uVar26;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_108 = dVar29;
  (*(code *)PTR__objc_msgSend_02578628)(dVar29,local_100[0],PTR_s_setContentHeight__026aa760);
  _objc_setAssociatedObject(local_68,"currentGlobalMappingSheet",local_100[0],1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_WCRefineHelper_026ce000,PTR_s_attachKeyboardSyncToPageSheet_in_026b3f58,
             local_100[0],local_90);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showPageSheet_animated_thenFocus_026b3f60,
             local_100[0],1,local_90);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_68;
  local_158 = PTR___NSConcreteStackBlock_02578660;
  local_150 = 0xc2000000;
  local_14c = 0;
  local_148 = FUN_01e67db8;
  local_140 = &DAT_0257a7a0;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_100[0];
  local_138 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = pcVar1;
  _dispatch_async(puVar2,&local_158);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(local_100,0);
  _objc_storeStrong(local_d8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


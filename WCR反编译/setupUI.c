// setupUI @ 01f464a0

/* WARNING: Removing unreachable block (ram,0x01f465b4) */
/* Function Stack Size: 0x10 bytes */

void WCRefineUpdateLogView::setupUI(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  local_58 = param_2;
  local_50 = param_1;
  _objc_alloc_init();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_createAttributedLogContent_026c8ee8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAttributedText__026a0000);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEditable__026a9fc8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSelectable__026a9fd0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setShowsVerticalScrollIndicator__026caa68,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setShowsHorizontalScrollIndicato_0269f108,0);
  uVar18 = 0x402e000000000000;
  uVar15 = 0x402e000000000000;
  uVar16 = 0x402e000000000000;
  uVar17 = 0x402e000000000000;
  FUN_01f46b38();
  local_a0 = uVar15;
  uStack_98 = uVar16;
  local_90 = uVar17;
  uStack_88 = uVar18;
  local_80 = uVar15;
  uStack_78 = uVar16;
  local_70 = uVar17;
  uStack_68 = uVar18;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar15,uVar16,uVar17,uVar18,local_60,PTR_s_setContentInset__0269e770);
  uStack_d8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  local_e0 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
  uStack_c8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  local_d0 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  local_c0 = local_e0;
  uStack_b8 = uStack_d8;
  local_b0 = local_d0;
  uStack_a8 = uStack_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,uStack_d8,local_d0,uStack_c8,local_60,PTR_s_setTextContainerInset__026a9fd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLogTextView__026a9fb0,local_60);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addGestureRecognizer__026ca4a8,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_60;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_60;
  local_40 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar9 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_60;
  local_38 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


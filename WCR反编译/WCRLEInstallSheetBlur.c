// WCRLEInstallSheetBlur @ 01b5e968

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::WCRLEInstallSheetBlur(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID IVar12;
  ID IVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = *(ID *)(param_1 + (long)_sheetBlur);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar1 != IVar2) {
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithEffect__026ca6e0);
    uVar5 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    *(undefined8 *)(param_1 + (long)_sheetBlur) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_sheetBlur),
               PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_sheetBlur),PTR_s_setUserInteractionEnabled__026caad8
               ,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_sheetBlur),PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    uVar6 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    local_48 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    local_40 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    IVar12 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar13 = IVar12;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + (long)_sheetBlur);
    local_38 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar16 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = uVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(uVar17);
    (*(code *)PTR__objc_release_02578630)(IVar16);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    (*(code *)PTR__objc_release_02578630)(uVar14);
    (*(code *)PTR__objc_release_02578630)(IVar13);
    (*(code *)PTR__objc_release_02578630)(IVar12);
    (*(code *)PTR__objc_release_02578630)(uVar11);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


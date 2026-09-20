// wcRefine_sheetKeyboardWillChange: @ 01e66734

/* Function Stack Size: 0x18 bytes */

void WCRefineTextReplaceViewController::wcRefine_sheetKeyboardWillChange_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  double in_d0;
  double dVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_d2;
  undefined8 in_d3;
  undefined8 uVar11;
  double local_1b0;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcRefine_activeSheetTextView_026c6cf8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  local_40 = IVar2;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1b0 = in_d0;
    uVar8 = in_d1;
    dVar7 = in_d2;
    uVar11 = in_d3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_convertRect_toView__0269ded8,0);
    _CGRectGetMaxY(local_1b0,uVar8,dVar7,uVar11);
    _CGRectGetMinY(in_d0,in_d1);
    local_1b0 = local_1b0 - in_d0;
    if (local_1b0 <= 0.0) {
      local_1b0 = 0.0;
    }
    dVar7 = local_1b0;
    dVar9 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcRefineSheetTextViewBaseInset_026c6d00);
    dVar10 = 12.0;
    if (local_1b0 <= 0.0) {
      dVar10 = 0.0;
    }
    in_d2 = in_d2 + local_1b0 + dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar9,in_d2,in_d3,local_40,PTR_s_setContentInset__0269e770);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar9,in_d2,in_d3,local_40,PTR_s_setScrollIndicatorInsets__0269e778);
    IVar2 = local_40;
    IVar5 = local_40;
    puVar6 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_scrollRangeToVisible__026aa0d8,IVar5,puVar6);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}


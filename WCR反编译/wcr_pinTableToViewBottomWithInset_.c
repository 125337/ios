// wcr_pinTableToViewBottomWithInset: @ 01f942dc

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::wcr_pinTableToViewBottomWithInset_
               (ID param_1,SEL param_2,double param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  ID local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableBottomToFloatConstraint_026c9888);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar2 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar4 != IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTableBottomToFloatConstraint__026c9880);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  uVar6 = 0xc02c000000000000;
  uVar9 = 0;
  uVar7 = 0;
  dVar8 = local_38;
  FUN_01f88678();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,dVar8,uVar9,local_40,PTR_s_setContentInset__0269e770);
  uVar9 = 0;
  uVar6 = uVar9;
  dVar8 = local_38;
  uVar7 = uVar9;
  FUN_01f88678();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar6,dVar8,uVar7,local_40,PTR_s_setScrollIndicatorInsets__0269e778);
  _objc_storeStrong(&local_40,0);
  return;
}


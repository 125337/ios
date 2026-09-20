// layoutTableHeaderPreferredSize @ 01d1d2e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineQuickReplyPanel::layoutTableHeaderPreferredSize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double in_d2;
  double local_1b8;
  double local_48;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_38 != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = in_d2;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_48 = in_d2;
    if (in_d2 < 1.0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_48 = dVar4;
    }
    uVar3 = 0;
    uVar5 = 0;
    FUN_01d1d298();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar5,local_38,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layoutIfNeeded_026ca790);
    IVar1 = local_38;
    dVar6 = *(double *)(PTR__UILayoutFittingCompressedSize_025781e0 + 8);
    dVar4 = local_48;
    FUN_01d1d704();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_systemLayoutSizeFittingSize__026ae500);
    dVar7 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_1b8 = (double)(long)dVar6;
    if (local_1b8 <= 44.0) {
      local_1b8 = 44.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar4,dVar7,local_48,local_1b8,local_38,PTR_s_setFrame__026ca960);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_38,0);
  return;
}


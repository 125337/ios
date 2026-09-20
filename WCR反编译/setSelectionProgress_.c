// setSelectionProgress: @ 0177fcb4

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginGroupPillControl::setSelectionProgress_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d1;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_180;
  double local_178;
  double local_160;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titles_026b44d8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    local_180 = 0.0;
  }
  else {
    in_d2 = 0;
    local_160 = param_3;
    if (param_3 < 0.0) {
      local_160 = 0.0;
    }
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titles_026b44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d1 = (double)IVar3 - 1.0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_178 = in_d1;
    if (local_160 < in_d1) {
      local_178 = local_160;
    }
    local_180 = local_178;
  }
  *(double *)(param_1 + (long)_selectionProgress) = local_180;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar4 = *(double *)(param_1 + (long)_selectionProgress);
  if (*(long *)(param_1 + (long)_selectedIndex) != (long)dVar4) {
    *(long *)(param_1 + (long)_selectedIndex) = (long)dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateStyles_026b44f0);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titles_026b44d8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar4,in_d1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar4,in_d1);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titles_026b44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = dVar4 / (double)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemSpacing_026b44e0);
  dVar5 = *(double *)(param_1 + (long)_selectionProgress) * dVar4;
  dVar6 = dVar4;
  dVar7 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  _CGRectGetHeight(dVar6,dVar7,in_d2,in_d3);
  uVar8 = 0;
  FUN_0177f868();
  _CGRectInset();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedBackgroundView_0269e620);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,uVar8,dVar4,dVar6);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}


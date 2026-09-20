// refreshFloatBars @ 01c3c268

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::refreshFloatBars(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_88;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_multiSelectMode_026be908);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_floatBar_026c1a88);
    _objc_retainAutoreleasedReturnValue();
    local_88 = param_1;
    local_40 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectBar_026ba3f8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = param_1;
    local_30 = param_1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bringSubviewToFront__026ca550,local_88);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  return;
}


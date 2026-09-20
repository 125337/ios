// updatePointCount @ 01d4c804

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::updatePointCount(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
  if ((IVar3 & 1) != 0) {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__bp_);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pointCountLabel_026c46f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
  if ((IVar2 & 1) == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (IVar3 == 4) {
      IVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar5 == 4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateCoordinateFields_026c47d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateOrderLabel_026c4840);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_adjustLayout_026c47e0);
  return;
}


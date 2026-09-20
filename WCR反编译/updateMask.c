// updateMask @ 01649acc

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::updateMask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_60 [5];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dimView_026a5338);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bezierPathWithRect__026a03f8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropRect_026b1ec0);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_selectionPathInRect__026b1f28);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = IVar2;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_appendPath__026a0408,IVar2);
  }
  puVar1 = local_38;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_maskLayer_026b1b70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dimView_026a5338);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_maskLayer_026b1b70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_38,0);
  return;
}


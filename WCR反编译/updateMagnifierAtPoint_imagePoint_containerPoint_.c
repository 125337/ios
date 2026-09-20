// updateMagnifierAtPoint:imagePoint:containerPoint: @ 01910a3c

/* Function Stack Size: 0x40 bytes */

void WCRefineColorPickerController::updateMagnifierAtPoint_imagePoint_containerPoint_
               (ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4,CGPoint param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  undefined8 in_d4;
  double in_d5;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_310;
  double local_308;
  double local_78;
  
  IVar1 = param_1;
  dVar5 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_magnifierView_026b8a48,param_3.field0_0x0,param_3.field1_0x8,
             param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,param_5.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_78 = -80.0;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImageContainer_026b8a18);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((in_d5 + -80.0) - 60.0 < in_d1 + 60.0 + 10.0) {
    local_78 = 80.0;
  }
  dVar6 = in_d5 + local_78;
  FUN_019051e4();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_magnifierView_026b8a48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d4,dVar6);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_310 = 70.0;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImageContainer_026b8a18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = (local_78 - 60.0) - 10.0;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  local_308 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_magnifierView_026b8a48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (dVar6 < local_308) {
    local_308 = dVar6;
  }
  if (70.0 < local_308) {
    local_310 = local_308;
  }
  IVar1 = param_1;
  dVar6 = local_310;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_magnifierView_026b8a48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_019051e4();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_magnifierView_026b8a48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_310,local_308);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar4 = 30.0;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImage_026b8a98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImageView_026b8a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar4 = dVar4 / dVar6;
  dVar6 = dVar4 * 30.0;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImage_026b8a98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImageView_026b8a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar5 = (dVar4 / dVar5) * 30.0;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar4 = in_d2 - dVar6 / 2.0;
  dVar7 = in_d3 - dVar5 / 2.0;
  FUN_018f7960();
  IVar1 = param_1;
  local_3c8 = dVar4;
  local_3d8 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImage_026b8a98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImage_026b8a98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_3c8 = local_3c8 - dVar6;
  if (dVar4 < local_3c8) {
    local_3c8 = dVar4;
  }
  if (local_3c8 <= 0.0) {
    local_3d0 = 0.0;
  }
  else {
    local_3d0 = local_3c8;
  }
  local_3d8 = local_3d8 - dVar5;
  if (dVar7 < local_3d8) {
    local_3d8 = dVar7;
  }
  if (local_3d8 <= 0.0) {
    local_3e0 = 0.0;
  }
  else {
    local_3e0 = local_3d8;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImage_026b8a98);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_CGImage_0269e0e8);
  _CGImageCreateWithImageInRect(local_3d0,local_3e0,dVar6,dVar5);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,IVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_magnifierImageView_026b8a58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _CGImageRelease(IVar2);
  }
  return;
}


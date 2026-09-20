// imagePointFromViewPoint: @ 0167ef18

/* Function Stack Size: 0x20 bytes */

CGPoint WCRSuperFloatCropViewController::imagePointFromViewPoint_
                  (ID param_1,SEL param_2,CGPoint param_3)

{
  CGPoint CVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  double dVar4;
  double in_d1;
  double dVar5;
  double in_d2;
  double in_d3;
  double local_158;
  
  dVar4 = in_d0;
  dVar5 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_imageDisplayFrame_026b1f90,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = param_1;
  local_158 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_image_026ca678);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  in_d2 = in_d2 / local_158;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_image_026ca678);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_158 = in_d3 / local_158;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (in_d2 < local_158) {
    local_158 = in_d2;
  }
  dVar4 = (in_d0 - dVar4) / local_158;
  local_158 = (in_d1 - dVar5) / local_158;
  FUN_0164494c();
  CVar1.field1_0x8 = local_158;
  CVar1.field0_0x0 = dVar4;
  return CVar1;
}


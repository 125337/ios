// imageDisplayFrame @ 0164989c

/* Function Stack Size: 0x10 bytes */

CGRect WCRSuperFloatCropViewController::imageDisplayFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  ID IVar2;
  double dVar3;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_d0;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar3 = in_d2;
  local_20 = in_d2;
  local_18 = in_d3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_image_026ca678);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_30 = in_d2;
  if (((in_d2 <= 0.0) || (local_30 = in_d3, in_d3 <= 0.0)) || (local_30 = dVar3, dVar3 <= 0.0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    local_d0 = in_d3 / in_d1;
    if (in_d2 / dVar3 < local_d0) {
      local_d0 = in_d2 / dVar3;
    }
    local_20 = dVar3 * local_d0;
    local_18 = in_d1 * local_d0;
    FUN_0163f628();
    local_30 = (in_d2 - local_20) / 2.0;
    local_28 = (in_d3 - local_18) / 2.0;
    FUN_0163f5dc();
  }
  CVar1.field0_0x0.field1_0x8 = local_28;
  CVar1.field0_0x0.field0_0x0 = local_30;
  CVar1.field1_0x10.field0_0x0 = local_20;
  CVar1.field1_0x10.field1_0x8 = local_18;
  return CVar1;
}


// selectionPathInRect: @ 01648ea8

/* Function Stack Size: 0x30 bytes */

ID WCRSuperFloatCropViewController::selectionPathInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  bool bVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  uint local_64;
  ID local_50;
  undefined *local_18;
  
  IVar2 = param_1;
  _CGRectIsEmpty(in_d0,in_d1,in_d2,in_d3,param_1,param_2,param_3.field0_0x0.field0_0x0,
                 param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                 param_3.field1_0x10.field1_0x8);
  if ((IVar2 & 1) == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
    bVar1 = false;
    local_64 = 0;
    if (IVar2 == 2) {
      local_50 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_64 = 0;
      if (local_50 != 0) {
        IVar2 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformClosed_026b1ef0);
        local_64 = (uint)IVar2;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_64 & 1) == 0) {
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
      if (IVar2 == 1) {
        local_18 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                   PTR_s_bezierPathWithOvalInRect__026ca528);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        dVar3 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,param_1,PTR_s_effectiveCropCornerRadiusForRect_026b1f18);
        local_18 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        if (dVar3 <= 0.5) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (in_d0,in_d1,in_d2,in_d3,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                     PTR_s_bezierPathWithRect__026a03f8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (in_d0,in_d1,in_d2,in_d3,dVar3,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                     PTR_s_bezierPathWithRoundedRect_corner_026ca530);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = (undefined *)param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  else {
    local_18 = (undefined *)0x0;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}


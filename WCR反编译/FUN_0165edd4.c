// FUN_0165edd4 @ 0165edd4

void FUN_0165edd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,byte param_7,byte param_8)

{
  undefined *local_18;
  
  _CGRectInset();
  local_18 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  if ((param_7 & 1) == 0) {
    if (((param_8 & 1) == 0) || (param_5 <= 0.5)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,param_5 + param_6,
                 PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}


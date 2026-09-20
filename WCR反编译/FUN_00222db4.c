// FUN_00222db4 @ 00222db4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00222db4(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_168;
  double local_160;
  undefined *local_28;
  
  dVar1 = param_1;
  dVar2 = param_2;
  dVar5 = param_3;
  dVar3 = param_4;
  _CGRectInset();
  dVar2 = dVar2 + 5.0;
  dVar3 = dVar3 - 5.0;
  if ((dVar5 <= 0.0) || (dVar3 <= 0.0)) {
    local_28 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRect__026a03f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar4 = dVar1;
    _CGRectGetWidth(dVar1,dVar2,dVar5,dVar3);
    local_160 = dVar1;
    _CGRectGetHeight(dVar1,dVar2,dVar5,dVar3);
    if (dVar4 < local_160) {
      local_160 = dVar4;
    }
    local_168 = local_160 * 0.5;
    if (param_5 < local_168) {
      local_168 = param_5;
    }
    local_28 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar1,dVar2,dVar5,dVar3,local_168,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}


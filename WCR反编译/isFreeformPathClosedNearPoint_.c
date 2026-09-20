// isFreeformPathClosedNearPoint: @ 0164a448

/* Function Stack Size: 0x20 bytes */

bool WCRSuperFloatCropViewController::isFreeformPathClosedNearPoint_
               (ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double in_d1;
  double dVar3;
  double dVar4;
  bool local_21;
  
  IVar1 = param_1;
  dVar4 = in_d0;
  dVar3 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_freeformPoints_026b1f50,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 < 0xc) {
    local_21 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPoints_026b1f50);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
    dVar4 = in_d0 - dVar4;
    _hypot(dVar4,in_d1 - dVar3);
    local_21 = dVar4 <= 28.0;
  }
  return (uint)local_21;
}


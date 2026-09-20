// onFreeformHoldFired @ 0164ac20

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRSuperFloatCropViewController::onFreeformHoldFired
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformHoldTimer__026b1f70,0);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dragMode_026b1fa0);
  if (IVar2 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastDrawPoint_026b1fa8);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isFreeformPathClosedNearPoint__026b1fb0);
    bVar1 = false;
    if ((IVar2 & 1) == 0) {
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPoints_026b1f50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar3 < 0xc;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (!bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastDrawPoint_026b1fa8);
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,param_1,PTR_s_isFreeformPathClosedNearPoint__026b1fb0);
      if (((IVar2 & 1) != 0) ||
         (IVar2 = param_1,
         (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformClosed_026b1ef0),
         (IVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_commitFreeformSelectionRegulariz_026b1fb8,1);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDragMode__026b1f58,0);
      }
    }
  }
  return;
}


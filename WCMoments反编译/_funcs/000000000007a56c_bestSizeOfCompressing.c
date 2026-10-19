// bestSizeOfCompressing @0x7a56c

/* Function Stack Size: 0x10 bytes */

CGSize WCMYBIBImageData::bestSizeOfCompressing(ID param_1,SEL param_2)

{
  CGSize CVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d1;
  undefined8 local_a0;
  double local_20;
  double dStack_18;
  
  _objc_msgSend_originImage(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    dStack_18 = *(double *)(PTR__CGSizeZero_001108e0 + 8);
    local_20 = *(double *)PTR__CGSizeZero_001108e0;
  }
  else {
    _objc_msgSend_wcm_yb_currentOrientation(param_1,local_a0);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = (**(code **)(lVar2 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar2);
    _objc_msgSend_layout(param_1,local_a0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_containerSize(param_1,local_a0);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    uVar6 = (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    _objc_msgSend_originImage(param_1,local_a0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_20 = (double)_objc_msgSend_size(uVar5,local_a0);
    _objc_msgSend_wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
              (uVar6,uVar4,local_a0,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(lVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    dStack_18 = in_d1;
  }
  CVar1.field1_0x8 = dStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}


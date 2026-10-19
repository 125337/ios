// cropView @0xaa358

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewController::cropView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_cropView) == 0) {
    uVar1 = _objc_alloc(&objc::class_t::WCMTOCropView);
    uVar2 = _objc_msgSend_croppingStyle(param_1,local_30);
    _objc_msgSend_image(param_1,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_initWithCroppingStyle_image_(uVar1,local_30,uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_cropView);
    *(undefined8 *)(param_1 + (long)_cropView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setDelegate_(*(undefined8 *)(param_1 + (long)_cropView),local_30,param_1);
    _objc_msgSend_setAutoresizingMask_(*(undefined8 *)(param_1 + (long)_cropView),local_30,0x12);
    _objc_msgSend_view(param_1,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_insertSubview_atIndex_
              (uVar1,local_30,*(undefined8 *)(param_1 + (long)_cropView),0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_cropView));
  return IVar4;
}


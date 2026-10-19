// imageView @0x80d98

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBLoadingView::imageView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_50;
  
  if (*(long *)(param_1 + (long)_imageView) == 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___UIImageView);
    uVar2 = *(undefined8 *)(param_1 + (long)_imageView);
    *(undefined8 *)(param_1 + (long)_imageView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_loadingImage(uVar1,local_50);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_(*(undefined8 *)(param_1 + (long)_imageView),local_50);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    uVar2 = _objc_msgSend_CGColor(uVar1,local_50);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowColor_(uVar4,local_50,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar4 = 0x3ff0000000000000;
    uVar2 = _CGSizeMake(0);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowOffset_(uVar2,uVar4,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowOpacity_(0x3f800000,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowRadius_(0x4010000000000000,uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageView));
  return IVar5;
}


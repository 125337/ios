// imageView @0x6ab38

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageScrollView::imageView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_imageView) == 0) {
    uVar1 = _objc_opt_new(&objc::class_t::WCMYYAnimatedImageView);
    uVar2 = *(undefined8 *)(param_1 + (long)_imageView);
    *(undefined8 *)(param_1 + (long)_imageView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + (long)_imageView),local_30,2);
    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMasksToBounds_(uVar1,local_30,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageView));
  return IVar3;
}


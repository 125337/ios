// setDistanceBetweenPages: @0x67028

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::setDistanceBetweenPages_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  
  _objc_msgSend_collectionView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layout(uVar1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDistanceBetweenPages_(param_3,uVar2,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


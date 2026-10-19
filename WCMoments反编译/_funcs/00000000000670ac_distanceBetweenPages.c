// distanceBetweenPages @0x670ac

/* Function Stack Size: 0x10 bytes */

double WCMYBImageBrowser::distanceBetweenPages(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_40;
  
  _objc_msgSend_collectionView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layout(uVar1,local_40);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_distanceBetweenPages(uVar2,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return dVar3;
}


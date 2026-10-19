// collectionViewScrollToPage: @0x63678

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::collectionViewScrollToPage_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_collectionView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_scrollToPage_(uVar1,local_30,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_pageNumberChanged(param_1,local_30);
  return;
}


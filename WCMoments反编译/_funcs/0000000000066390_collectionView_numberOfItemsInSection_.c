// collectionView:numberOfItemsInSection: @0x66390

/* Function Stack Size: 0x20 bytes */

long_long WCMYBImageBrowser::collectionView_numberOfItemsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  long_long lVar2;
  undefined8 local_58;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_dataMediator(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_numberOfCells(uVar1,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  return lVar2;
}


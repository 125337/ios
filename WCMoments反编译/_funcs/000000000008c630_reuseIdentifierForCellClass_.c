// reuseIdentifierForCellClass: @0x8c630

/* Function Stack Size: 0x18 bytes */

ID WCMYBIBCollectionView::reuseIdentifierForCellClass_(ID param_1,SEL param_2,CLASS param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  CLASS local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _NSStringFromClass(param_3);
  local_30 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_containsObject_
                    (*(undefined8 *)(local_18 + (long)_reuseSet),local_40,local_30);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_pathForResource_ofType_(uVar2,local_40,local_30,&cf_nib);
    local_38 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    IVar3 = local_18;
    if (local_38 == 0) {
      _objc_msgSend_registerClass_forCellWithReuseIdentifier_(local_18,local_40,local_28,local_30);
    }
    else {
      _objc_msgSend_nibWithNibName_bundle_(&_OBJC_CLASS___UINib,local_40,local_30,0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_registerNib_forCellWithReuseIdentifier_(IVar3,local_40,uVar2,local_30);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    _objc_msgSend_addObject_(*(undefined8 *)(local_18 + (long)_reuseSet),local_40,local_30);
    _objc_storeStrong(&local_38,0);
  }
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}


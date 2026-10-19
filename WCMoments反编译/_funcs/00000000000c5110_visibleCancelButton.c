// visibleCancelButton @0xc5110

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropToolbar::visibleCancelButton(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_40;
  undefined8 local_18;
  
  _objc_msgSend_cancelIconButton(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend_isHidden(uVar2,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (iVar1 == 0) {
    _objc_msgSend_cancelIconButton(param_1,local_40);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_msgSend_cancelTextButton(param_1,local_40);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  IVar3 = _objc_autoreleaseReturnValue(local_18);
  return IVar3;
}


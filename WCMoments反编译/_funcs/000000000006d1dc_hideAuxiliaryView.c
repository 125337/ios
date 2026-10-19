// hideAuxiliaryView @0x6d1dc

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::hideAuxiliaryView(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_hideLoadingWithContainer_(uVar2,local_38,param_1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(param_1,local_38);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_hideToastWithContainer_(uVar2,local_38,param_1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  return;
}


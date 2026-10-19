// wcm_yb_imageData:startLoadingWithStatus: @0x6d35c

/* Function Stack Size: 0x20 bytes */

void WCMYBIBImageCell::wcm_yb_imageData_startLoadingWithStatus_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (param_4 == 0) {
    _objc_msgSend_hideAuxiliaryView(local_18,local_60);
  }
  else if (param_4 == 1) {
    _objc_msgSend_imageScrollView(0,local_18,local_60);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar1,local_60);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar2,local_60);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (lVar3 == 0) {
      _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_60);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_showLoadingWithContainer_(uVar1,local_60,local_18);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
  }
  else if (param_4 == 2) {
    _objc_msgSend_imageScrollView(0,local_18,local_60);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar1,local_60);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar2,local_60);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (lVar3 == 0) {
      _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_60);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_showLoadingWithContainer_(uVar1,local_60,local_18);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
  }
  else if (param_4 == 4) {
    _objc_msgSend_imageScrollView(0,local_18,local_60);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar1,local_60);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar2,local_60);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (lVar3 == 0) {
      _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_60);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_showLoadingWithContainer_(uVar1,local_60,local_18);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
  }
  else if (param_4 == 6) {
    _objc_msgSend_imageScrollView(0,local_18,local_60);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar1,local_60);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar2,local_60);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (lVar3 == 0) {
      _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_60);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_showLoadingWithContainer_(uVar1,local_60,local_18);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


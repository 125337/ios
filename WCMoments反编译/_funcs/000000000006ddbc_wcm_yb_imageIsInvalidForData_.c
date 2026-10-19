// wcm_yb_imageIsInvalidForData: @0x6ddbc

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::wcm_yb_imageIsInvalidForData_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_50);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_hideLoadingWithContainer_(uVar2,local_50,local_18);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageIsInvalid(uVar2,local_50);
  local_30 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageScrollView(local_18,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar2,local_50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar3,local_50);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar1 == 0) {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_50);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showLoadingWithContainer_text_(uVar2,local_50,local_18,local_30);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  else {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_50);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showIncorrectToastWithContainer_text_(uVar2,local_50,local_18,local_30);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


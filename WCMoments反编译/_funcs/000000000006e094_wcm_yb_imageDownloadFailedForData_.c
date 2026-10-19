// wcm_yb_imageDownloadFailedForData: @0x6e094

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::wcm_yb_imageDownloadFailedForData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_imageScrollView(local_18,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar2,local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar3,local_48);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar4 == 0) {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_48);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_downloadFailed(uVar3,local_48);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showLoadingWithContainer_text_(uVar2,local_48,IVar1);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar4);
  }
  else {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_48);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_hideLoadingWithContainer_(uVar2,local_48,local_18);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar4);
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_48);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_downloadFailed(uVar3,local_48);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showIncorrectToastWithContainer_text_(uVar2,local_48,IVar1);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


// wcm_yb_imageData:readyForCompressedImage: @0x6d9cc

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCMYBIBImageCell::wcm_yb_imageData_readyForCompressedImage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 local_70;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_70);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_hideLoadingWithContainer_(uVar3,local_70,local_18);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(lVar2);
  _objc_msgSend_imageScrollView(local_18,local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar3,local_70);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar4,local_70);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  lVar2 = local_30[0];
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (lVar5 - lVar2 != 0) {
    _objc_msgSend_imageScrollView(lVar5 - lVar2,local_18,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar3,local_70);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar4,local_70);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_size(uVar6,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_imageScrollView(local_18,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_type_(uVar3,local_70,local_30[0],2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    IVar1 = local_18;
    _objc_msgSend_wcm_yb_currentOrientation(local_18,local_70);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = (**(code **)(lVar2 + 0x10))();
    _objc_msgSend_updateImageLayoutWithOrientation_previousImageSize_
              (uVar7,in_d1,IVar1,local_70,uVar3);
    (*(code *)PTR__objc_release_00110458)(lVar2);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}


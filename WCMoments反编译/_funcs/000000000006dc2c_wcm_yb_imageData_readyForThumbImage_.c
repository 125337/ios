// wcm_yb_imageData:readyForThumbImage: @0x6dc2c

/* Function Stack Size: 0x20 bytes */

void WCMYBIBImageCell::wcm_yb_imageData_readyForThumbImage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_d1;
  undefined8 local_68;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_imageScrollView(local_18,local_68);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar2,local_68);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar3,local_68);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar4 == 0) {
    _objc_msgSend_imageScrollView(local_18,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_type_(uVar2,local_68,local_30,3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    IVar1 = local_18;
    _objc_msgSend_wcm_yb_currentOrientation(local_18,local_68);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = (**(code **)(lVar4 + 0x10))();
    uVar3 = _objc_msgSend_size(local_30,local_68);
    _objc_msgSend_updateImageLayoutWithOrientation_previousImageSize_
              (uVar3,in_d1,IVar1,local_68,uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar4);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


// wcm_yb_imageData:downloadProgress: @0x6dfe0

/* Function Stack Size: 0x20 bytes */

void WCMYBIBImageCell::wcm_yb_imageData_downloadProgress_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_58);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_showLoadingWithContainer_progress_(param_4,uVar2,local_58,local_18);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  _objc_storeStrong(&local_28,0);
  return;
}


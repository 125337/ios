// scrollViewDidScroll: @0x70374

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::scrollViewDidScroll_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_cellData(local_18,local_40);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageDidScrollBlock(local_30,local_40);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_imageDidScrollBlock(local_30,local_40);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,local_30,local_28);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_msgSend_cuttingImage(local_18,local_40);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


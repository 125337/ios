// scrollViewDidZoom: @0x70050

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::scrollViewDidZoom_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d2;
  double dVar4;
  double in_d3;
  double dVar5;
  undefined8 local_110;
  double local_60;
  double dStack_58;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_msgSend_wcm_yb_cellData(local_28,local_110);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageDidZoomBlock(local_40,local_110);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_imageDidZoomBlock(local_40,local_110);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,local_40,local_38);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_msgSend_imageScrollView(local_28,local_110);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar2,local_110);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_frame(uVar3,local_110);
  dVar4 = in_d2;
  dVar5 = in_d3;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_bounds(local_38,local_110);
  _objc_msgSend_bounds(local_38,local_110);
  if (in_d3 <= dVar5) {
    dStack_58 = (dVar5 - in_d3) / 2.0;
  }
  else {
    dStack_58 = 0.0;
  }
  if (in_d2 <= dVar4) {
    local_60 = (dVar4 - in_d2) / 2.0;
  }
  else {
    local_60 = 0.0;
  }
  _objc_msgSend_imageScrollView(local_28,local_110);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar2,local_110);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(local_60,dStack_58,in_d2,in_d3,uVar3,local_110);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}


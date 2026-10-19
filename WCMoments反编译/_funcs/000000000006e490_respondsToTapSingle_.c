// respondsToTapSingle: @0x6e490

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::respondsToTapSingle_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_isRotating(local_18,local_50);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_wcm_yb_cellData(local_18,local_50);
    local_38 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_singleTouchBlock(local_38,local_50);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar2 == 0) {
      _objc_msgSend_hideTailoringImageView(local_18,local_50);
      _objc_msgSend_hideAuxiliaryView(local_18,local_50);
      _objc_msgSend_wcm_yb_hideBrowser(local_18,local_50);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      (*(code *)PTR__objc_release_00110458)(lVar2);
    }
    else {
      _objc_msgSend_singleTouchBlock(local_38,local_50);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,local_38);
      (*(code *)PTR__objc_release_00110458)(lVar2);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}


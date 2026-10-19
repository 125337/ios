// toggleTranslucencyViewVisible: @0xb44d0

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::toggleTranslucencyViewVisible_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  
  _objc_msgSend_translucencyView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = (param_3 & 1) == 0;
  if (bVar1) {
    local_48 = 0;
  }
  else {
    _objc_msgSend_translucencyEffect(param_1,local_50);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  _objc_msgSend_setEffect_(uVar2,local_50,local_48);
  if (!bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}


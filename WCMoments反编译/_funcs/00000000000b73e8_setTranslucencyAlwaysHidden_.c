// setTranslucencyAlwaysHidden: @0xb73e8

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setTranslucencyAlwaysHidden_(ID param_1,SEL param_2,bool param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  if ((*(byte *)(param_1 + (long)_translucencyAlwaysHidden) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_translucencyAlwaysHidden) = (byte)param_3 & 1;
    bVar1 = *(byte *)(param_1 + (long)_translucencyAlwaysHidden);
    _objc_msgSend_translucencyView(param_1,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar2,local_40,bVar1 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}


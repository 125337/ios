// setClampButtonGlowing: @0xc2b2c

/* Function Stack Size: 0x14 bytes */

void WCMTOCropToolbar::setClampButtonGlowing_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + (long)_clampButtonGlowing) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_clampButtonGlowing) = (byte)param_3 & 1;
    if ((*(byte *)(param_1 + (long)_clampButtonGlowing) & 1) == 0) {
      _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_clampButton(param_1,local_38);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setTintColor_(uVar2,local_38,uVar1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
    else {
      _objc_msgSend_clampButton(param_1,local_38);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setTintColor_(uVar1,local_38,0);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
  }
  return;
}


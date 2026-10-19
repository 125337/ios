// rotateClockwiseButtonHidden @0xaad6c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::rotateClockwiseButtonHidden(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_toolbar(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend_rotateClockwiseButtonHidden(uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return bVar1;
}


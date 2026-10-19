// angle @0xab23c

/* Function Stack Size: 0x10 bytes */

long_long WCMTOCropViewController::angle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long_long lVar2;
  undefined8 local_38;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_angle(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return lVar2;
}


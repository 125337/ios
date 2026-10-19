// minimumAspectRatio @0xab8f0

/* Function Stack Size: 0x10 bytes */

double WCMTOCropViewController::minimumAspectRatio(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_38;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)_objc_msgSend_minimumAspectRatio(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return dVar2;
}


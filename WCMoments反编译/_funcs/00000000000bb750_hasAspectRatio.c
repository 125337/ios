// hasAspectRatio @0xbb750

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::hasAspectRatio(ID param_1,SEL param_2)

{
  double dVar1;
  double dVar2;
  undefined8 local_50;
  bool local_44;
  
  dVar1 = (double)_objc_msgSend_aspectRatio(param_1);
  dVar2 = 1.1920928955078125e-07;
  local_44 = 0;
  if (1.1920928955078125e-07 < dVar1) {
    _objc_msgSend_aspectRatio(param_1,local_50);
    local_44 = (bool)(1.1920928955078125e-07 < dVar2);
  }
  return local_44;
}


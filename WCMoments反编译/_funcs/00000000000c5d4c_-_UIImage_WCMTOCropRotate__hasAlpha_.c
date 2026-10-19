// -[UIImage(WCMTOCropRotate)_hasAlpha] @0xc5d4c

bool __UIImage_WCMTOCropRotate__hasAlpha_(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 local_30;
  
  _objc_retainAutorelease();
  _objc_msgSend_CGImage(param_1,local_30);
  iVar2 = _CGImageGetAlphaInfo();
  bVar1 = true;
  if (((iVar2 != 4) && (bVar1 = true, iVar2 != 3)) && (bVar1 = true, iVar2 != 2)) {
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


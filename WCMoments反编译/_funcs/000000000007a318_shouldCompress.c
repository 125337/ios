// shouldCompress @0x7a318

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBImageData::shouldCompress(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  _objc_msgSend_originImage(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend_shouldCompressWithImage_(param_1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return bVar1;
}


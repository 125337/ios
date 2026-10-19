// loadOriginImage @0x714d4

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadOriginImage(ID param_1,SEL param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    _objc_msgSend_originImage(param_1,local_30);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar1 != 0) {
      uVar2 = _objc_msgSend_shouldCompress(param_1,local_30);
      if ((uVar2 & 1) == 0) {
        _objc_msgSend_delegate(param_1,local_30);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_originImage(param_1,local_30);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_wcm_yb_imageData_readyForImage_(uVar3,local_30,param_1);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      else {
        _objc_msgSend_compressedImage(param_1,local_30);
        lVar1 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        if (lVar1 == 0) {
          _objc_msgSend_loadThumbImage(param_1,local_30);
          _objc_msgSend_loadOriginImage_compress(param_1,local_30);
        }
        else {
          _objc_msgSend_delegate(param_1,local_30);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_compressedImage(param_1,local_30);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_wcm_yb_imageData_readyForCompressedImage_(uVar3,local_30,param_1);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          (*(code *)PTR__objc_release_00110458)(uVar3);
        }
      }
    }
  }
  return;
}


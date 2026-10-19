// ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_5 @0x72a2c

void ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_5(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  long local_60;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 != 0) {
    bVar1 = local_20 == 0;
    if (bVar1) {
      _objc_msgSend_originImage(local_30,local_68);
      local_60 = _objc_retainAutoreleasedReturnValue();
      local_40 = local_60;
    }
    else {
      local_60 = local_20;
    }
    _objc_msgSend_setCompressedImage_(local_30,local_68,local_60);
    if (bVar1) {
      (*(code *)PTR__objc_release_00110458)(local_40);
    }
    _objc_msgSend_delegate(local_30,local_68);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    _objc_msgSend_compressedImage(local_30,local_68);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_imageData_readyForCompressedImage_(uVar3,local_68,lVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


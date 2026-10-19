// loadData @0x711dc

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadData(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar4 = _objc_msgSend_loadingStatus(param_1);
  if (lVar4 == 0) {
    _objc_msgSend_originImage(param_1,local_48);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar4 == 0) {
      _objc_msgSend_imageName(param_1,local_48);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      bVar3 = true;
      if (lVar4 == 0) {
        _objc_msgSend_imagePath(param_1,local_48);
        local_28 = _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar3 = true;
        if (local_28 == 0) {
          _objc_msgSend_imageData(param_1,local_48);
          local_38 = _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_38 != 0;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_00110458)(local_38);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_00110458)(local_28);
      }
      (*(code *)PTR__objc_release_00110458)(lVar4);
      if (bVar3) {
        _objc_msgSend_loadYBImage(param_1,local_48);
      }
      else {
        _objc_msgSend_image(param_1,local_48);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        if (lVar4 == 0) {
          _objc_msgSend_imageURL(param_1,local_48);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)();
          if (lVar4 == 0) {
            _objc_msgSend_imagePHAsset(param_1,local_48);
            lVar4 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)();
            if (lVar4 == 0) {
              _objc_msgSend_delegate(param_1,local_48);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_wcm_yb_imageIsInvalidForData_(uVar5,local_48,param_1);
              (*(code *)PTR__objc_release_00110458)(uVar5);
            }
            else {
              _objc_msgSend_loadThumbImage(param_1,local_48);
              _objc_msgSend_loadPHAsset(param_1,local_48);
            }
          }
          else {
            _objc_msgSend_loadThumbImage(param_1,local_48);
            _objc_msgSend_loadURL(param_1,local_48);
          }
        }
        else {
          _objc_msgSend_loadImageBlock(param_1,local_48);
        }
      }
    }
    else {
      _objc_msgSend_loadOriginImage(param_1,local_48);
    }
  }
  else {
    _objc_msgSend_loadThumbImage(param_1,local_48);
    uVar5 = _objc_msgSend_loadingStatus(param_1,local_48);
    _objc_msgSend_setLoadingStatus_(param_1,local_48,uVar5);
  }
  return;
}


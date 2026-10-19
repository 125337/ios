// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82 @0x76a08

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_2_82(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x30);
  if (local_28 != 0) {
    _objc_msgSend_wcm_yb_webImageMediator(local_28,local_40);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_msgSend_imageURL(local_28,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_storeToDiskWithImageData_forKey_(uVar2,local_40,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
    _objc_msgSend_setLoadingStatus_(local_28,local_40,0);
    if (*(long *)(param_1 + 0x28) == 0) {
      _objc_msgSend_delegate(local_28,local_40);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageIsInvalidForData_(uVar2,local_40,local_28);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      _objc_msgSend_setOriginImageAndLoadWithImage_
                (local_28,local_40,*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


// ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2 @0x73580

void ___31__WCMYBIBImageData_loadYBImage__block_invoke_2(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x28);
  if (local_28 != 0) {
    _objc_msgSend_setLoadingStatus_(local_28,local_40,0);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
      _objc_msgSend_delegate(local_28,local_40);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageIsInvalidForData_(uVar1,local_40,local_28);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
    else {
      _objc_msgSend_setOriginImageAndLoadWithImage_
                (local_28,local_40,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28))
      ;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


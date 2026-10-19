// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke @0x7b6bc

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  uVar2 = _objc_opt_new(&_OBJC_CLASS___ALAssetsLibrary);
  uVar1 = local_20;
  local_30 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_writeImageDataToSavedPhotosAlbum_metadata_completionBlock_(uVar2,local_88,uVar1,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


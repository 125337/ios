// ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke @0x77030

void ___31__WCMYBIBImageData_loadPHAsset__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_msgSend_imagePHAsset(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_30 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_28 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  _objc_msgSend_getImageDataWithPHAsset_completion_
            (&objc::class_t::WCMYBIBPhotoAlbumManager,local_88,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}


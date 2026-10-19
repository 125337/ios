// ___66-[UIImage(WCMYYImageCoder)_wcm_yy_saveToAlbumWithCompletionBlock:]_block_invoke @0x9a71c

void ___66__UIImage_WCMYYImageCoder__wcm_yy_saveToAlbumWithCompletionBlock___block_invoke
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_msgSend__wcm_yy_dataRepresentationForSystem_(*(undefined8 *)(param_1 + 0x20),param_2,1);
  local_28 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_alloc_init(&_OBJC_CLASS___ALAssetsLibrary);
  uVar1 = local_28;
  local_30 = uVar2;
  local_38 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  _objc_msgSend_writeImageDataToSavedPhotosAlbum_metadata_completionBlock_(uVar2,local_98,uVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.106 @0x7b838

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_106(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  _UIImageWriteToSavedPhotosAlbum
            (local_20,*(undefined8 *)(param_1 + 0x20),
             "UIImageWriteToSavedPhotosAlbum_completedWithImage:error:context:",0);
  _objc_storeStrong(&local_20,0);
  return;
}


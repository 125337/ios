// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2 @0x7b7b4

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_2
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_saveToPhotoAlbumCompleteWithError_
            (*(undefined8 *)(param_1 + 0x20),local_50,local_28);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}


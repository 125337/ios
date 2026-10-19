// UIImageWriteToSavedPhotosAlbum_completedWithImage:error:context: @0x7b134

/* Function Stack Size: 0x28 bytes */

void WCMYBIBImageData::UIImageWriteToSavedPhotosAlbum_completedWithImage_error_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,void *param_5)

{
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_saveToPhotoAlbumCompleteWithError_(local_18,local_58,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}


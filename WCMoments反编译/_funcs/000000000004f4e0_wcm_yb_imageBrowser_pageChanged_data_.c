// wcm_yb_imageBrowser:pageChanged:data: @0x4f4e0

/* Function Stack Size: 0x28 bytes */

void WCMFeedController::wcm_yb_imageBrowser_pageChanged_data_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  _objc_msgSend_galleryMedia(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_count(uVar1,local_58);
  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_58,&cf__ld__lu);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_galleryCounter(local_18,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar3,local_58,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_pumpGallery(local_18,local_58);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}


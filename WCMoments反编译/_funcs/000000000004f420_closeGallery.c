// closeGallery @0x4f420

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::closeGallery(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_galleryDecodeQueue(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelAllOperations(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_galleryTimer(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setGalleryTimer_(param_1,local_30,0);
  _objc_msgSend_gallery(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_hide(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


// wcm_yb_imageBrowser:endTransitioningWithIsShow: @0x4f790

/* Function Stack Size: 0x1c bytes */

void WCMFeedController::wcm_yb_imageBrowser_endTransitioningWithIsShow_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  bVar2 = false;
  if ((param_4 & 1) == 0) {
    _objc_msgSend_gallery(local_18,local_58);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar1 == lVar3;
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  if (bVar2) {
    _objc_msgSend_galleryDecodeQueue(local_18,local_58);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cancelAllOperations(uVar4,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_galleryTimer(local_18,local_58);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_invalidate(uVar4,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_setGalleryTimer_(local_18,local_58);
    _objc_msgSend_setGallery_(local_18,local_58,0);
    _objc_msgSend_setGalleryMedia_(local_18,local_58,0);
    _objc_msgSend_setGalleryPaths_(local_18,local_58,0);
    _objc_msgSend_setGalleryRequestTimes_(local_18,local_58,0);
    _objc_msgSend_setGalleryCounter_(local_18,local_58,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


// saveToPhotoAlbumCompleteWithError: @0x7af30

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::saveToPhotoAlbumCompleteWithError_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_58);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_containerView(local_18,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_58);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_saveToPhotoAlbumSuccess(uVar4,local_58);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showCorrectToastWithContainer_text_(uVar2,local_58,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  else {
    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_58);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_containerView(local_18,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_58);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_saveToPhotoAlbumFailed(uVar4,local_58);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_showIncorrectToastWithContainer_text_(uVar2,local_58,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


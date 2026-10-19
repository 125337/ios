// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.113 @0x7c018

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_113(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  
  _objc_msgSend_wcm_yb_auxiliaryViewHandler(*(undefined8 *)(param_1 + 0x20));
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_containerView(*(undefined8 *)(param_1 + 0x20),local_50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_50);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_getPhotoAlbumAuthorizationFailed(uVar4,local_50);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_showIncorrectToastWithContainer_text_(uVar2,local_50,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  return;
}


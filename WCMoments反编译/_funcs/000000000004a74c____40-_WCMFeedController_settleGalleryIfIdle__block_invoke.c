// ___40-[WCMFeedController_settleGalleryIfIdle]_block_invoke @0x4a74c

void ___40__WCMFeedController_settleGalleryIfIdle__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_collectionView(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCurrentPage_(uVar1,local_38,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


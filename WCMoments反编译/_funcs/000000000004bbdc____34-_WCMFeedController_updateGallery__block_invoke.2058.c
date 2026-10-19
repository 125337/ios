// ___34-[WCMFeedController_updateGallery]_block_invoke.2058 @0x4bbdc

void ___34__WCMFeedController_updateGallery__block_invoke_2058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDataSourceArray_(uVar1,local_38,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reloadData(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_collectionView(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_msgSend_gallery(*(undefined8 *)(param_1 + 0x20),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCurrentPage_(uVar1,local_38,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


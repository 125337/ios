// ___39-[WCMVideoController_extendVideoQueue:]_block_invoke @0x21b3c

void ___39__WCMVideoController_extendVideoQueue___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_collection(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_insertItemsAtIndexPaths_(uVar1,local_30,*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_collection(*(undefined8 *)(param_1 + 0x20),local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


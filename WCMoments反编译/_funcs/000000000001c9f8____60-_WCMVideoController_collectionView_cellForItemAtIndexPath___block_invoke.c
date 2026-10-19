// ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke @0x1c9f8

void ___60__WCMVideoController_collectionView_cellForItemAtIndexPath___block_invoke(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_representedVideo(uVar2,local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isEqual_(uVar3,local_48,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = local_20;
  if ((uVar1 & 1) != 0) {
    uVar3 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_backdrop(uVar3,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_(uVar4,local_48,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


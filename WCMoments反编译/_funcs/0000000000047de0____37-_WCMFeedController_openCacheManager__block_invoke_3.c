// ___37-[WCMFeedController_openCacheManager]_block_invoke_3 @0x47de0

void ___37__WCMFeedController_openCacheManager__block_invoke_3(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  
  uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_account(uVar2,local_40);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isEqual_(uVar3,local_40,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) != 0) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_images(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_assetHandler(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_displayCache(uVar3,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar4,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_renderKeys(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_renderQualities(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_videoURIs(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_videoRequests(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x30);
    _objc_msgSend_mediaProbeTimes(uVar2,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}


// ___37-[WCMFeedController_openCacheManager]_block_invoke.2029 @0x481c0

void ___37__WCMFeedController_openCacheManager__block_invoke_2029(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_account(uVar2,local_40);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isEqual_(uVar3,local_40,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) != 0) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_setCachePaused_(uVar2,local_40,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_reloadFeed(uVar2,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}


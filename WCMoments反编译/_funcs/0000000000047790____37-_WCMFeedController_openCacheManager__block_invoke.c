// ___37-[WCMFeedController_openCacheManager]_block_invoke @0x47790

void ___37__WCMFeedController_openCacheManager__block_invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_d8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  local_38 = param_1;
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  lVar2 = _objc_msgSend_mediaGeneration(uVar1,local_d8);
  _objc_msgSend_setMediaGeneration_(uVar1,local_d8,lVar2 + 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_mediaQueue(uVar1,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelAllOperations(uVar3,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_previewQueue(uVar1,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelAllOperations(uVar3,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_pendingExports(uVar1,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllObjects(uVar3,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_pendingOriginalExports(uVar1,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllObjects(uVar3,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _dispatch_get_global_queue(0x11,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_48 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _dispatch_async(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_30,0);
  return;
}


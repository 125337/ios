// ___40-[WCMFeedController_scheduleMediaReload]_block_invoke @0x3234c

void ___40__WCMFeedController_scheduleMediaReload__block_invoke(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60;
  
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_setMediaReloadScheduled_(uVar2,local_60,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_account(uVar2,local_60);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_isEqualToString_(uVar6,local_60);
  bVar1 = false;
  if ((uVar4 & 1) != 0) {
    uVar6 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_facade(uVar6,local_60);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar5);
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_reloadFeed(uVar2,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}


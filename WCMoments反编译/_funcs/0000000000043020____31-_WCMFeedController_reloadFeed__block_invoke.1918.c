// ___31-[WCMFeedController_reloadFeed]_block_invoke.1918 @0x43020

void ___31__WCMFeedController_reloadFeed__block_invoke_1918(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_account(uVar2,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_isEqualToString_(uVar6,local_58);
  bVar1 = false;
  if ((uVar4 & 1) != 0) {
    uVar6 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_facade(uVar6,local_58);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar5);
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_scheduleMediaReload(uVar2,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}


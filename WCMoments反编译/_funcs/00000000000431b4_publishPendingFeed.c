// publishPendingFeed @0x431b4

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::publishPendingFeed(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  uint local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  byte local_80;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  uVar1 = _objc_msgSend_bridgeBusy(param_1);
  local_39 = 0;
  local_cc = 1;
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_pendingFeedSnapshot(local_28,local_d8);
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_cc = 1;
    if (local_38 != 0) {
      local_cc = _objc_msgSend_ready(local_28,local_d8);
      local_cc = local_cc ^ 1;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  if ((local_cc & 1) == 0) {
    _objc_msgSend_pendingFeedSnapshot(local_28,local_d8);
    local_48 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setPendingFeedSnapshot_(local_28,local_d8,0);
    local_49 = _objc_msgSend_pendingFeedPreferLatest(local_28,local_d8);
    _objc_msgSend_setPendingFeedPreferLatest_(local_28,local_d8,0);
    _objc_msgSend_setBridgeBusy_(local_28,local_d8,1);
    _objc_msgSend_bridgeRows(local_28,local_d8);
    local_58 = _objc_retainAutoreleasedReturnValue();
    local_60 = _objc_msgSend_bridgeGeneration(local_28,local_d8);
    _objc_msgSend_assetHandler(local_28,local_d8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_root(uVar2,local_d8);
    local_68 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_initWeak(auStack_70,local_28);
    uVar2 = _objc_msgSend_bridgeQueue(local_28,local_d8);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    local_c8 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = ___39__WCMFeedController_publishPendingFeed__block_invoke;
    local_b0 = &___block_descriptor_73_e8_32s40s48s56w_e5_v8__0l;
    local_a8 = (*(code *)PTR__objc_retain_00110460)(local_48);
    local_80 = local_49 & 1;
    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_58);
    _objc_copyWeak(auStack_90,auStack_70);
    local_88 = local_60;
    local_98 = (*(code *)PTR__objc_retain_00110460)(local_68);
    _objc_msgSend_addOperationWithBlock_(uVar2,local_d8,&local_c8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_98);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
  }
  return;
}


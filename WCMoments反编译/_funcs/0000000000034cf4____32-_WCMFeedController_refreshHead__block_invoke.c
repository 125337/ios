// ___32-[WCMFeedController_refreshHead]_block_invoke @0x34cf4

void ___32__WCMFeedController_refreshHead__block_invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  uint local_30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  lVar2 = _objc_msgSend_refreshGeneration(uVar1,local_48);
  local_30 = 1;
  if (lVar2 == *(long *)(param_1 + 0x28)) {
    uVar3 = _objc_loadWeakRetained(param_1 + 0x20);
    local_30 = _objc_msgSend_refreshingHead(uVar3,local_48);
    local_30 = local_30 ^ 1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_30 & 1) == 0) {
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_finishRefreshWithSuccess_(uVar1,local_48,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_status_(uVar1,local_48,&cf_7ReI__eNb);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}


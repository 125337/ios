// ___26-[WCMFeedController_start]_block_invoke_3 @0x3b4a4

void ___26__WCMFeedController_start__block_invoke_3(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_48;
  uint local_30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  dVar3 = (double)_objc_msgSend_lastHeadRequest(uVar1,local_48);
  local_30 = 1;
  if (dVar3 == *(double *)(param_1 + 0x28)) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
    local_30 = _objc_msgSend_initialHeadPending(uVar2,local_48);
    local_30 = local_30 ^ 1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_30 & 1) == 0) {
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_setInitialHeadPending_(uVar1,local_48,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_syncPaging(uVar1,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}


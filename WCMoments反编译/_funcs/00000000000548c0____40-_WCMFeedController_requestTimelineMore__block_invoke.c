// ___40-[WCMFeedController_requestTimelineMore]_block_invoke @0x548c0

void ___40__WCMFeedController_requestTimelineMore__block_invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  uint local_30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  lVar2 = _objc_msgSend_pagingGeneration(uVar1,local_48);
  local_30 = 1;
  if (lVar2 == *(long *)(param_1 + 0x28)) {
    uVar3 = _objc_loadWeakRetained(param_1 + 0x20);
    local_30 = _objc_msgSend_loadingTail(uVar3,local_48);
    local_30 = local_30 ^ 1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_30 & 1) == 0) {
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_traceState_(uVar1,local_48,&cf_tail_timeout);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_finishTailWait(uVar1,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}


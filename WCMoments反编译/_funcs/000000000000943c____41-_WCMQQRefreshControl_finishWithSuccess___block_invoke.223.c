// ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke.223 @0x943c

void ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke_223(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  lVar2 = _objc_msgSend_qqFeedbackGeneration(uVar1,local_50);
  lVar4 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar2 == lVar4) {
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_endRefreshing(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_setQqShowingFeedback_(uVar1,local_50,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_qqIndicatorView(uVar1,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar3,local_50,1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}


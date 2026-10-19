// ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke_2 @0x9374

void ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke_2(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_qqIndicatorView(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0,uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


// ___45-[WCMFeedController_picker:didFinishPicking:]_block_invoke_3 @0x51a84

void ___45__WCMFeedController_picker_didFinishPicking___block_invoke_3(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_cropHeaderImage_account_
            (uVar1,local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


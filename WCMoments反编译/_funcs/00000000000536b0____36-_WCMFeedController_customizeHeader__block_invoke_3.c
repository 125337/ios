// ___36-[WCMFeedController_customizeHeader]_block_invoke_3 @0x536b0

void ___36__WCMFeedController_customizeHeader__block_invoke_3(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_headerBrandKey(uVar2,local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObjectForKey_(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_applyHeaderBrand(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


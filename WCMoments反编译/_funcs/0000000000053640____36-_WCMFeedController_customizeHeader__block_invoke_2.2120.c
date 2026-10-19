// ___36-[WCMFeedController_customizeHeader]_block_invoke_2.2120 @0x53640

void ___36__WCMFeedController_customizeHeader__block_invoke_2_2120(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_adjustHeaderSize(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


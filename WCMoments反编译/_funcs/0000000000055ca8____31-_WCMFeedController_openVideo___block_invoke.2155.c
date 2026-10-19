// ___31-[WCMFeedController_openVideo:]_block_invoke.2155 @0x55ca8

void ___31__WCMFeedController_openVideo___block_invoke_2155(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_openNativeDetail_(uVar1,local_48,local_20);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


// ___33-[WCMFeedController_openGallery:]_block_invoke_2 @0x4e0c4

void ___33__WCMFeedController_openGallery___block_invoke_2(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_pumpGallery(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


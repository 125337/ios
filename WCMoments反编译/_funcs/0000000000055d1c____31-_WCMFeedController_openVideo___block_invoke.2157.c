// ___31-[WCMFeedController_openVideo:]_block_invoke.2157 @0x55d1c

undefined4 ___31__WCMFeedController_openVideo___block_invoke_2157(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_following(uVar2,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_containsObject_(uVar3,local_58,local_20);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_20,0);
  return uVar1;
}


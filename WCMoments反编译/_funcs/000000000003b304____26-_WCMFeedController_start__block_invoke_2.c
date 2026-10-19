// ___26-[WCMFeedController_start]_block_invoke_2 @0x3b304

void ___26__WCMFeedController_start__block_invoke_2(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_account(uVar2,local_60);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _Context();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar4,&cf_userName,PTR____NSArray0__struct_00110718);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Text();
  uVar6 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isEqualToString_(uVar3,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_stop(uVar2,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_start(uVar2,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
    _objc_msgSend_pollNativeTimeline(uVar2,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}


// ___36-[WCMFeedController_customizeHeader]_block_invoke.2111 @0x532c0

void ___36__WCMFeedController_customizeHeader__block_invoke_2111(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_textFields(uVar2,local_68);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_firstObject(uVar3,local_68);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_text(uVar4,local_68);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_saveHeaderText_(uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


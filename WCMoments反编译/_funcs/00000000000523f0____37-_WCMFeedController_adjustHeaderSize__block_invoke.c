// ___37-[WCMFeedController_adjustHeaderSize]_block_invoke @0x523f0

void ___37__WCMFeedController_adjustHeaderSize__block_invoke(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  uVar2 = _objc_loadWeakRetained(param_2 + 0x28);
  _objc_msgSend_account(uVar2,local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isEqual_(uVar3,local_48,*(undefined8 *)(param_2 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) != 0) {
    uVar2 = _objc_loadWeakRetained(param_2 + 0x28);
    _objc_msgSend_saveHeaderScale_(param_1,uVar2,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}


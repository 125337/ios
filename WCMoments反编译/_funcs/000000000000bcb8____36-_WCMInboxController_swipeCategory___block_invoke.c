// ___36-[WCMInboxController_swipeCategory:]_block_invoke @0xbcb8

void ___36__WCMInboxController_swipeCategory___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_categories(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSelectedSegmentIndex_(uVar1,local_38,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


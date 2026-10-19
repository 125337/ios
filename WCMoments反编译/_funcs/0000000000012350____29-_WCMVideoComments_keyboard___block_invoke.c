// ___29-[WCMVideoComments_keyboard:]_block_invoke @0x12350

void ___29__WCMVideoComments_keyboard___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_view(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layoutIfNeeded(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


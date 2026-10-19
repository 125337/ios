// ___34-[WCMQQRefreshControl_showLoading]_block_invoke @0x8af4

void ___34__WCMQQRefreshControl_showLoading__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _memcpy(auStack_50,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_qqIndicatorView(*(undefined8 *)(param_1 + 0x20),local_98);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_80,auStack_50,0x30);
  _objc_msgSend_setTransform_(uVar1,local_98,auStack_80);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


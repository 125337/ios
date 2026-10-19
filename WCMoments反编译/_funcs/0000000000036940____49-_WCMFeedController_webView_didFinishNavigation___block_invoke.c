// ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke @0x36940

void ___49__WCMFeedController_webView_didFinishNavigation___block_invoke(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double local_d8;
  undefined8 local_c8;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_d8 = (double)_objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);
  dVar2 = 19.0 / local_d8;
  _objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);
  local_d8 = 19.0 / local_d8;
  if (dVar2 < local_d8) {
    local_d8 = dVar2;
  }
  dVar3 = (double)_objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);
  dVar2 = local_d8;
  _objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_c8);
  dVar2 = dVar2 * local_d8;
  dVar3 = (double)_CGSizeMake(dVar3 * local_d8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  dVar5 = (22.0 - dVar2) / 2.0;
  uVar4 = _CGRectMake((22.0 - dVar3) / 2.0);
  _objc_msgSend_drawInRect_(uVar4,dVar5,dVar3,dVar2,uVar1,local_c8);
  _objc_storeStrong(&local_20,0);
  return;
}


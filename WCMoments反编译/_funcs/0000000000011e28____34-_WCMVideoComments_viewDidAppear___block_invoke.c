// ___34-[WCMVideoComments_viewDidAppear:]_block_invoke @0x11e28

void ___34__WCMVideoComments_viewDidAppear___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_reloadComments(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}


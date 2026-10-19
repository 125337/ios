// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_4 @0x662d8

byte ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_4(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_28 = param_1;
  local_20 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    _objc_msgSend_rotationHandler(local_30,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_11 = _objc_msgSend_isRotating(uVar1,local_48);
    local_11 = local_11 & 1;
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke @0x65b84

undefined8 ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = param_1;
  local_20 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_18 = 1;
  }
  else {
    _objc_msgSend_rotationHandler(local_30,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_18 = _objc_msgSend_currentOrientation(uVar1,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}


// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.63 @0x65e78

undefined8 ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_63(long param_1)

{
  undefined8 local_40;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = param_1;
  local_20 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = _objc_msgSend_currentPage(local_30,local_40);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}


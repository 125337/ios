// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_3.85 @0x66250

byte ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_3_85(long param_1)

{
  undefined8 local_40;
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
    local_11 = _objc_msgSend_isHideTransitioning(local_30,local_40);
    local_11 = local_11 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


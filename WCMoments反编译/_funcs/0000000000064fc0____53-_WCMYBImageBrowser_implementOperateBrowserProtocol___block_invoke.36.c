// ___53-[WCMYBImageBrowser_implementOperateBrowserProtocol:]_block_invoke.36 @0x64fc0

void ___53__WCMYBImageBrowser_implementOperateBrowserProtocol___block_invoke_36
               (long param_1,byte param_2)

{
  undefined8 local_40;
  long local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 != 0) {
    if ((local_19 & 1) == 0) {
      _objc_msgSend_showStatusBar(local_30,local_40);
    }
    else {
      _objc_msgSend_hideStatusBar(local_30,local_40);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}


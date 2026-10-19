// ___34-[WCMYBImageBrowser_buildToolView]_block_invoke @0x634cc

void ___34__WCMYBImageBrowser_buildToolView__block_invoke(long param_1)

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
    _objc_msgSend_currentData(local_30,local_40);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


// ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2.71 @0x7526c

void ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_2_71(long param_1)

{
  undefined8 local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x28);
  if (local_28 != 0) {
    _objc_msgSend_setLoadingStatus_(local_28,local_40,0);
    if (*(long *)(param_1 + 0x20) == 0) {
      _objc_msgSend_loadURL_download(local_28,local_40);
    }
    else {
      _objc_msgSend_setOriginImageAndLoadWithImage_
                (local_28,local_40,*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


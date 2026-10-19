// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.85 @0x76cd8

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_85
               (long param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_60;
  long local_40;
  uint local_34;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_30 = param_1;
  local_21 = param_3;
  if ((param_3 & 1) == 0) {
    local_34 = 1;
  }
  else {
    local_40 = _objc_loadWeakRetained(param_1 + 0x20);
    bVar1 = local_40 != 0;
    if (bVar1) {
      _objc_msgSend_setLoadingStatus_(local_40,local_60,0);
      _objc_msgSend_delegate(local_40,local_60);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageDownloadFailedForData_(uVar2,local_60,local_40);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}


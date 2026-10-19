// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.76 @0x75d54

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_76(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_28 != 0) {
    _objc_msgSend_delegate(local_28,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_imageData_downloadProgress_
              (*(undefined8 *)(param_1 + 0x28),uVar1,local_48,local_28);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


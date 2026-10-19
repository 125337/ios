// ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2 @0x74a64

void ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_2(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  _objc_msgSend_setLoadingStatus_(*(undefined8 *)(param_1 + 0x20),param_2,0);
  _objc_msgSend_loadURL_download(*(undefined8 *)(param_1 + 0x20),local_28);
  return;
}


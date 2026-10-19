// ___36-[WCMYBIBToolViewHandler_saveAction]_block_invoke @0x8662c

void ___36__WCMYBIBToolViewHandler_saveAction__block_invoke(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 != 0) {
    uVar1 = _objc_opt_respondsToSelector(local_20,"wcm_yb_saveToPhotoAlbum");
    if ((uVar1 & 1) != 0) {
      _objc_msgSend_wcm_yb_saveToPhotoAlbum(local_20,local_48);
    }
    _objc_msgSend_sheetView(local_30,local_48);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_hideWithAnimation_(uVar2,local_48,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


// ___33-[WCMYBIBToolViewHandler_topView]_block_invoke @0x86844

void ___33__WCMYBIBToolViewHandler_topView__block_invoke(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_58;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    if (local_20 == 0) {
      _objc_msgSend_wcm_yb_currentData(local_30,local_58);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      local_40 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(lVar1);
      uVar2 = _objc_opt_respondsToSelector(local_40,"wcm_yb_saveToPhotoAlbum");
      if ((uVar2 & 1) != 0) {
        _objc_msgSend_wcm_yb_saveToPhotoAlbum(local_40,local_58);
      }
      _objc_storeStrong(&local_40,0);
    }
    else if (local_20 == 1) {
      _objc_msgSend_showSheetView(0,local_30,local_58);
    }
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}


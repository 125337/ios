// ___34-[WCMYBIBImageData_loadThumbImage]_block_invoke @0x78078

void ___34__WCMYBIBImageData_loadThumbImage__block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  long local_68;
  long local_58;
  long local_48;
  int local_3c;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_48 = 0;
    if (local_20 == 0) {
      if (local_28 != 0) {
        _objc_msgSend_imageWithData_(&_OBJC_CLASS___UIImage,local_88,local_28);
        lVar2 = _objc_retainAutoreleasedReturnValue();
        lVar4 = local_48;
        local_48 = lVar2;
        (*(code *)PTR__objc_release_00110458)(lVar4);
      }
    }
    else {
      _objc_storeStrong(&local_48,local_20);
    }
    uVar3 = _objc_msgSend_shouldCompress(local_38,local_88);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      _objc_msgSend_originImage(local_38,local_88);
      local_68 = _objc_retainAutoreleasedReturnValue();
      lVar4 = local_68;
    }
    else {
      _objc_msgSend_compressedImage(local_38,local_88);
      local_58 = _objc_retainAutoreleasedReturnValue();
      lVar4 = local_58;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_00110458)(local_68);
    }
    else {
      (*(code *)PTR__objc_release_00110458)(local_58);
    }
    if ((lVar4 == 0) && (local_48 != 0)) {
      _objc_msgSend_delegate(local_38,local_88);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageData_readyForThumbImage_(uVar5,local_88,local_38,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar5);
    }
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}


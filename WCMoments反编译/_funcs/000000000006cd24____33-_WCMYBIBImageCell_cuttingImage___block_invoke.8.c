// ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke.8 @0x6cd24

void ___33__WCMYBIBImageCell_cuttingImage___block_invoke_8(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_78;
  uint local_5c;
  long local_48;
  undefined8 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x30);
  if (local_28 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_msgSend_wcm_yb_cellData(local_28,local_78);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    local_5c = 0;
    if (lVar5 == lVar3) {
      _objc_msgSend_imageScrollView(local_28,local_78);
      local_38 = _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar4 = _objc_msgSend_isDragging(local_38,local_78);
      local_5c = 0;
      if (((uVar4 & 1) == 0) &&
         (local_5c = 0, (*(byte *)(local_28 + WCMYBIBImageCell::_interacting) & 1) == 0)) {
        _objc_msgSend_wcm_yb_isTransitioning(local_28,local_78);
        local_48 = _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_5c = (**(code **)(local_48 + 0x10))();
        local_5c = local_5c ^ 1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_00110458)(local_48);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_00110458)(local_38);
    }
    (*(code *)PTR__objc_release_00110458)(lVar3);
    if ((local_5c & 1) != 0) {
      _objc_msgSend_showTailoringImageView_(local_28,local_78,*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


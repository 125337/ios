// ___47-[WCMTOCropView_setGridOverlayHidden:animated:]_block_invoke @0xb7688

void ___47__WCMTOCropView_setGridOverlayHidden_animated___block_invoke(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 local_38;
  
  fVar2 = 0.0;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    fVar2 = 1.0;
  }
  _objc_msgSend_gridOverlayView(*(byte *)(param_1 + 0x28) & 1,*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_((double)fVar2,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


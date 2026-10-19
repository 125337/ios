// ___49-[WCMTOCropView_setCroppingViewsHidden:animated:]_block_invoke @0xb6f78

void ___49__WCMTOCropView_setCroppingViewsHidden_animated___block_invoke
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_toggleTranslucencyViewVisible_
            (*(undefined8 *)(param_1 + 0x20),param_2,(*(byte *)(param_1 + 0x30) ^ 1) & 1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_gridOverlayView(*(undefined8 *)(param_1 + 0x20),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(uVar2,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


// ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke.23 @0xbad44

void ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke_23
               (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_44;
  
  _objc_msgSend_setRotateAnimationInProgress_(*(undefined8 *)(param_3 + 0x20),param_4,0);
  _objc_msgSend_removeFromSuperview(*(undefined8 *)(param_3 + 0x28),local_50);
  uVar1 = _objc_msgSend_aspectRatioLockEnabled(*(undefined8 *)(param_3 + 0x20),local_50);
  local_44 = 1;
  if ((uVar1 & 1) != 0) {
    uVar1 = _objc_msgSend_aspectRatioLockEnabled(*(undefined8 *)(param_3 + 0x20),local_50);
    local_5c = 0;
    if ((uVar1 & 1) != 0) {
      local_5c = _objc_msgSend_aspectRatioLockDimensionSwapEnabled
                           (*(undefined8 *)(param_3 + 0x20),local_50);
    }
    local_44 = local_5c;
  }
  if ((local_44 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar3 = _objc_msgSend_aspectRatio(*(undefined8 *)(param_3 + 0x20),local_50);
    _objc_msgSend_setAspectRatio_animated_
              (uVar3,param_2,uVar2,local_50,*(byte *)(param_3 + 0x38) & 1);
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),(byte)param_4 & 1);
  }
  return;
}


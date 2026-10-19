// ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke @0xba7dc

void ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_160;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  long local_30;
  long local_28;
  
  uVar1 = 0x3ff921fb54442d18;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar1 = 0xbff921fb54442d18;
  }
  local_30 = param_1;
  local_28 = param_1;
  _memcpy(auStack_90,PTR__CGAffineTransformIdentity_00110738,0x30);
  _CGAffineTransformRotate(uVar1,auStack_90);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _memcpy(auStack_f0,auStack_60,0x30);
  _CGAffineTransformScale(uVar1,uVar2,auStack_f0);
  _memcpy(auStack_60,auStack_c0,0x30);
  _memcpy(auStack_120,auStack_60,0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_150,auStack_120,0x30);
  _objc_msgSend_setTransform_(uVar1,local_160,auStack_150);
  return;
}


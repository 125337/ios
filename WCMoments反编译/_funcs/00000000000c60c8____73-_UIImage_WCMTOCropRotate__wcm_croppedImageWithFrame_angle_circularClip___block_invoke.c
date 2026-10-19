// ___73-[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:]_block_invoke @0xc60c8

void ___73__UIImage_WCMTOCropRotate__wcm_croppedImageWithFrame_angle_circularClip___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_e0;
  undefined1 auStack_d0 [48];
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double dStack_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  local_30 = _objc_msgSend_CGContext(local_20,local_e0);
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    uStack_48 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
    local_50 = *(undefined8 *)PTR__CGPointZero_00110850;
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    local_40 = *(undefined8 *)(param_1 + 0x38);
    _CGContextAddEllipseInRect(local_50,uStack_48,local_40,uStack_38,local_30);
    _CGContextClip(local_30);
  }
  _CGContextTranslateCTM(-*(double *)(param_1 + 0x28),-*(double *)(param_1 + 0x30),local_30);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = 0x3f91df46a2529d39;
    local_58 = (double)*(long *)(param_1 + 0x48) * 0.017453292519943295;
    dStack_78 = *(double *)(PTR__CGPointZero_00110850 + 8);
    local_80 = *(undefined8 *)PTR__CGPointZero_00110850;
    local_70 = _objc_msgSend_size(*(undefined8 *)(param_1 + 0x20),local_e0);
    local_68 = uVar1;
    _CGAffineTransformMakeRotation(local_58);
    dVar2 = dStack_78;
    uVar1 = local_70;
    uVar3 = local_68;
    local_a0 = (double)_CGRectApplyAffineTransform(local_80,auStack_d0);
    local_98 = dVar2;
    local_90 = uVar1;
    local_88 = uVar3;
    _CGContextTranslateCTM(-local_a0,-dVar2,local_30);
    _CGContextRotateCTM(local_58,local_30);
  }
  _objc_msgSend_drawAtPoint_
            (*(undefined8 *)PTR__CGPointZero_00110850,*(undefined8 *)(PTR__CGPointZero_00110850 + 8)
             ,*(undefined8 *)(param_1 + 0x20),local_e0);
  _objc_storeStrong(&local_20,0);
  return;
}


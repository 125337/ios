// ___71-[WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification:]_block_invoke @0x8a6f4

void ___71__WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification___block_invoke
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_190;
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [48];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _objc_msgSend_orientationChangeAnimationWithExpectOrientation_centerCell_
            (*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  _objc_msgSend_contentView(*(undefined8 *)(param_1 + 0x28),local_190);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uStack_68 = uStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  local_60 = local_40;
  _objc_msgSend_setBounds_(local_50,uStack_48,local_40,uStack_38,uVar1,local_190);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _memcpy(auStack_a0,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_contentView(*(undefined8 *)(param_1 + 0x28),local_190);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_d0,auStack_a0,0x30);
  _objc_msgSend_setTransform_(uVar1,local_190,auStack_d0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  local_f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = _objc_loadWeakRetained(*(long *)(param_1 + 0x20) + 8);
  _objc_msgSend_containerView(uVar1,local_190);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_e8;
  local_110 = local_f0;
  uStack_f8 = uStack_d8;
  local_100 = local_e0;
  _objc_msgSend_setBounds_(local_f0,uStack_e8,local_e0,uStack_d8,uVar2,local_190);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _CGAffineTransformMakeRotation(*(undefined8 *)(param_1 + 0x58));
  uVar1 = _objc_loadWeakRetained(*(long *)(param_1 + 0x20) + 8);
  _objc_msgSend_containerView(uVar1,local_190);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_170,auStack_140,0x30);
  _objc_msgSend_setTransform_(uVar2,local_190,auStack_170);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}


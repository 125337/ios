// presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion: @0xa6604

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x80 bytes */

void WCMTOCropViewController::
     presentAnimatedFromParentViewController_fromImage_fromView_fromFrame_angle_toImageFrame_setup_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6,
               long_long param_7,CGRect param_8,ID param_9,undefined4 param_10,ID param_11,
               undefined4 param_12)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ID local_238;
  undefined8 local_1e8;
  long local_1e0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  byte local_151;
  ID local_150;
  undefined1 auStack_138 [8];
  double local_130;
  double dStack_128;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  byte local_a9;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long_long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  SEL local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dStack_48 = param_8.field1_0x10.field1_0x8;
  local_50 = param_8.field1_0x10.field0_0x0;
  dStack_58 = param_8.field0_0x0.field1_0x8;
  local_60 = param_8.field0_0x0.field0_0x0;
  dStack_28 = param_6.field1_0x10.field1_0x8;
  local_30 = param_6.field1_0x10.field0_0x0;
  dStack_38 = param_6.field0_0x0.field1_0x8;
  local_40 = param_6.field0_0x0.field0_0x0;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_5);
  local_98 = 0;
  local_90 = param_7;
  _objc_storeStrong(&local_98,param_9);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_10);
  local_a9 = 0;
  bVar1 = local_80 == 0;
  if (bVar1) {
    _objc_msgSend_image(local_68,local_1e8);
    local_1e0 = _objc_retainAutoreleasedReturnValue();
    local_a8 = local_1e0;
  }
  else {
    local_1e0 = local_80;
  }
  local_a9 = bVar1;
  _objc_msgSend_transitionController(local_68,local_1e8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar2,local_1e8,local_1e0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a8);
  }
  dStack_c8 = dStack_38;
  local_d0 = local_40;
  dStack_b8 = dStack_28;
  local_c0 = local_30;
  _objc_msgSend_transitionController(local_68,local_1e8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFromFrame_(local_d0,dStack_c8,local_c0,dStack_b8,uVar2,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = local_88;
  _objc_msgSend_transitionController(local_68,local_1e8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFromView_(uVar3,local_1e8,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_setPrepareForTransitionHandler_(local_68,local_1e8,local_98);
  if ((local_90 != 0) ||
     (uVar4 = _CGRectIsEmpty(local_60,dStack_58,local_50,dStack_48), (uVar4 & 1) == 0)) {
    _objc_msgSend_setAngle_(local_68,local_1e8,local_90);
    dStack_108 = dStack_58;
    local_110 = local_60;
    dStack_f8 = dStack_48;
    local_100 = local_50;
    dStack_128 = dStack_58;
    local_130 = local_60;
    _objc_msgSend_setImageCropFrame_(local_60,dStack_58,local_50,dStack_48,local_68,local_1e8);
  }
  _objc_initWeak(auStack_138,local_68);
  uVar2 = local_78;
  local_151 = 0;
  uVar3 = _objc_msgSend_parentViewController(local_68,local_1e8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar5 == 0) {
    local_238 = local_68;
  }
  else {
    uVar3 = _objc_msgSend_parentViewController(local_68,local_1e8);
    local_238 = _objc_retainAutoreleasedReturnValue(uVar3);
    local_151 = 1;
    local_150 = local_238;
  }
  local_1a8 = PTR___NSConcreteStackBlock_001104f0;
  local_1a0 = 0xc2000000;
  local_19c = 0;
  local_198 = 
  ___132__WCMTOCropViewController_presentAnimatedFromParentViewController_fromImage_fromView_fromFrame_angle_toImageFrame_setup_completion___block_invoke
  ;
  local_190 = &___block_descriptor_80_e8_32bs40w_e5_v8__0l;
  _objc_copyWeak(auStack_180,auStack_138);
  local_188 = (*(code *)PTR__objc_retain_00110460)(local_a0);
  dStack_170 = dStack_38;
  local_178 = local_40;
  dStack_160 = dStack_28;
  local_168 = local_30;
  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_1e8,local_238,1,&local_1a8);
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_150);
  }
  (*(code *)PTR__objc_release_00110458)(lVar5);
  _objc_storeStrong(&local_188);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_138);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  return;
}


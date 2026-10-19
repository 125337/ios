// dismissAnimatedFromParentViewController:withCroppedImage:toView:toFrame:setup:completion: @0xa6cc4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x58 bytes */

void __thiscall
WCMTOCropViewController::
dismissAnimatedFromParentViewController_withCroppedImage_toView_toFrame_setup_completion_
          (WCMTOCropViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          CGRect param_6,ID param_7,undefined4 param_8,ID param_9,undefined4 param_10)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_1f0;
  long local_1e8;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  byte local_81;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  ID local_50;
  WCMTOCropViewController *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dVar8 = param_6.field1_0x10.field1_0x8;
  dVar7 = param_6.field1_0x10.field0_0x0;
  dVar6 = param_6.field0_0x0.field1_0x8;
  local_40 = param_6.field0_0x0.field0_0x0;
  local_58 = 0;
  local_50 = param_1;
  local_48 = this;
  dStack_38 = dVar6;
  local_30 = dVar7;
  dStack_28 = dVar8;
  _objc_storeStrong(&local_58,param_2);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_5);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_7);
  if (local_60 == 0) {
    _objc_msgSend_image(local_48,local_1f0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_transitionController(local_48,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_(uVar3,local_1f0,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_cropView(local_48,local_1f0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cropView(local_48,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_130 = _objc_msgSend_imageViewFrame(uVar3,local_1f0);
    local_128 = dVar6;
    local_120 = dVar7;
    local_118 = dVar8;
    _objc_msgSend_view(local_48,local_1f0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar6 = local_128;
    dVar7 = local_120;
    dVar8 = local_118;
    local_110 = _objc_msgSend_convertRect_toView_(local_130,uVar2,local_1f0);
    dStack_108 = dVar6;
    local_100 = dVar7;
    dStack_f8 = dVar8;
    _objc_msgSend_transitionController(local_48,local_1f0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    dStack_148 = dStack_108;
    local_150 = local_110;
    dStack_138 = dStack_f8;
    local_140 = local_100;
    _objc_msgSend_setFromFrame_(local_110,dStack_108,local_100,dStack_f8,uVar5,local_1f0);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    local_81 = 0;
    bVar1 = local_60 == 0;
    if (bVar1) {
      _objc_msgSend_image(local_48,local_1f0);
      local_1e8 = _objc_retainAutoreleasedReturnValue();
      local_80 = local_1e8;
    }
    else {
      local_1e8 = local_60;
    }
    local_81 = bVar1;
    _objc_msgSend_transitionController(local_48,local_1f0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setImage_(uVar2,local_1f0,local_1e8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_80);
    }
    _objc_msgSend_cropView(local_48,local_1f0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cropView(local_48,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_c8 = _objc_msgSend_cropBoxFrame(uVar3,local_1f0);
    local_c0 = dVar6;
    local_b8 = dVar7;
    local_b0 = dVar8;
    _objc_msgSend_view(local_48,local_1f0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar6 = local_c0;
    dVar7 = local_b8;
    dVar8 = local_b0;
    local_a8 = _objc_msgSend_convertRect_toView_(local_c8,uVar2,local_1f0);
    dStack_a0 = dVar6;
    local_98 = dVar7;
    dStack_90 = dVar8;
    _objc_msgSend_transitionController(local_48,local_1f0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFromFrame_(local_a8,dStack_a0,local_98,dStack_90,uVar5,local_1f0);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  uVar2 = local_68;
  _objc_msgSend_transitionController(local_48,local_1f0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setToView_(uVar3,local_1f0,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  dStack_168 = dStack_38;
  local_170 = local_40;
  dStack_158 = dStack_28;
  local_160 = local_30;
  _objc_msgSend_transitionController(local_48,local_1f0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dStack_188 = dStack_168;
  local_190 = local_170;
  dStack_178 = dStack_158;
  local_180 = local_160;
  _objc_msgSend_setToFrame_(local_170,dStack_168,local_160,dStack_158,uVar2,local_1f0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setPrepareForTransitionHandler_(local_48,local_1f0,local_70);
  uVar2 = local_58;
  local_1b8 = PTR___NSConcreteStackBlock_001104f0;
  local_1b0 = 0xc2000000;
  local_1ac = 0;
  local_1a8 = 
  ___116__WCMTOCropViewController_dismissAnimatedFromParentViewController_withCroppedImage_toView_toFrame_setup_completion___block_invoke
  ;
  local_1a0 = &___block_descriptor_40_e8_32bs_e5_v8__0l;
  local_198 = (*(code *)PTR__objc_retain_00110460)(local_78);
  _objc_msgSend_dismissViewControllerAnimated_completion_(uVar2,local_1f0,1,&local_1b8);
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}


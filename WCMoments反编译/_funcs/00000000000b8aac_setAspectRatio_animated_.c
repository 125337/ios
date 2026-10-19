// setAspectRatio:animated: @0xb8aac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

void WCMTOCropView::setAspectRatio_animated_(ID param_1,SEL param_2,CGSize param_3,bool param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double in_d2;
  double dVar7;
  double in_d3;
  undefined8 local_228;
  undefined8 local_1e8;
  double local_1e0;
  double dStack_1d8;
  undefined8 local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  byte local_1b0;
  long local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  byte local_c9;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double dStack_50;
  byte local_42;
  byte local_41;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  
  dStack_28 = param_3.field1_0x8;
  local_30 = param_3.field0_0x0;
  local_41 = (byte)param_4;
  lVar4 = (long)_aspectRatio;
  ((double *)(param_1 + lVar4))[1] = dStack_28;
  *(double *)(param_1 + lVar4) = local_30;
  local_40 = param_2;
  local_38 = param_1;
  uVar1 = _objc_msgSend_initialSetupPerformed(param_1);
  if ((uVar1 & 1) != 0) {
    local_42 = 0;
    if ((local_30 < 1.1920928955078125e-07) ||
       (dVar6 = 1.1920928955078125e-07, dStack_28 < 1.1920928955078125e-07)) {
      dVar6 = 1.1920928955078125e-07;
      local_68 = (double)_objc_msgSend_imageSize(local_38,local_228);
      local_60 = dVar6;
      local_58 = local_68;
      local_78 = _objc_msgSend_imageSize(local_38,local_228);
      local_30 = local_58;
      local_42 = 1;
      dStack_28 = dVar6;
      local_70 = dVar6;
      dStack_50 = dVar6;
    }
    local_98 = _objc_msgSend_contentBounds(local_38,local_228);
    local_90 = dVar6;
    local_88 = in_d2;
    local_80 = in_d3;
    local_b8 = _objc_msgSend_cropBoxFrame(local_38,local_228);
    dStack_b0 = dVar6;
    local_a8 = in_d2;
    dStack_a0 = in_d3;
    _objc_msgSend_scrollView(local_38,local_228);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_c8 = (double)_objc_msgSend_contentOffset(uVar2,local_228);
    dStack_c0 = dVar6;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_c9 = 0;
    if (((long)local_30 == 1) && ((long)dStack_28 == 1)) {
      _objc_msgSend_image(local_38,local_228);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      dVar5 = (double)_objc_msgSend_size(uVar2,local_228);
      local_e0 = dVar5;
      local_d8 = dVar6;
      _objc_msgSend_image(local_38,local_228);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_f0 = _objc_msgSend_size(uVar3,local_228);
      local_c9 = dVar6 < dVar5;
      local_e8 = dVar6;
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      local_c9 = local_30 < dStack_28;
    }
    if ((local_c9 & 1) == 0) {
      local_140 = (double)(float)(int)(local_a8 * (dStack_28 / local_30));
      local_148 = dStack_a0 - local_140;
      dVar6 = dStack_c0 + local_148 * 0.5;
      dVar5 = 1.1920928955078125e-07;
      dStack_a0 = local_140;
      if (local_148 < 1.1920928955078125e-07) {
        dVar7 = dStack_c0;
        dStack_c0 = dVar6;
        local_168 = _objc_msgSend_contentBounds(local_38,local_228);
        local_160 = dVar5;
        local_158 = dVar7;
        dVar6 = dStack_c0;
        dStack_b0 = dVar5;
      }
      dStack_c0 = dVar6;
      local_170 = (double)_CGRectGetHeight(local_98,local_90,local_88,local_80);
      if (local_170 < local_140) {
        local_178 = local_170 / local_140;
        local_180 = local_a8 * local_178;
        local_148 = local_a8 - local_180;
        local_c8 = local_c8 + local_148 * 0.5;
        local_42 = 1;
        local_a8 = local_180;
        dStack_a0 = local_170;
      }
    }
    else {
      local_f8 = (double)(float)(int)(dStack_a0 * (local_30 / dStack_28));
      local_100 = local_a8 - local_f8;
      dVar6 = local_c8 + local_100 * 0.5;
      uVar2 = 0x3e80000000000000;
      local_a8 = local_f8;
      if (local_100 < 1.1920928955078125e-07) {
        dVar5 = local_c8;
        local_c8 = dVar6;
        local_120 = _objc_msgSend_contentBounds(local_38,local_228);
        local_118 = uVar2;
        local_110 = dVar5;
        dVar6 = local_c8;
        local_b8 = local_120;
      }
      local_c8 = dVar6;
      local_128 = (double)_CGRectGetWidth(local_98,local_90,local_88,local_80);
      if (local_128 < local_f8) {
        local_130 = local_128 / local_f8;
        local_138 = dStack_a0 * local_130;
        local_100 = dStack_a0 - local_138;
        dStack_c0 = dStack_c0 + local_100 * 0.5;
        local_42 = 1;
        local_a8 = local_128;
        dStack_a0 = local_138;
      }
    }
    dStack_198 = dStack_a0;
    local_1a0 = local_a8;
    local_190 = local_1a0;
    dStack_188 = dStack_198;
    _objc_msgSend_setCropBoxLastEditedSize_(local_a8,dStack_a0,local_38,local_228);
    uVar2 = _objc_msgSend_angle(local_38,local_228);
    _objc_msgSend_setCropBoxLastEditedAngle_(local_38,local_228,uVar2);
    local_1e8 = (*(code *)PTR__objc_retain_00110460)(local_38);
    dStack_1d8 = dStack_c0;
    local_1e0 = local_c8;
    dStack_1c8 = dStack_b0;
    local_1d0 = local_b8;
    dStack_1b8 = dStack_a0;
    local_1c0 = local_a8;
    local_1b0 = local_42 & 1;
    local_1a8 = _objc_retainBlock();
    if ((local_41 & 1) == 0) {
      (**(code **)(local_1a8 + 0x10))();
    }
    else {
      _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
                (0x3fe0000000000000,0,0x3ff0000000000000,0x3fe6666660000000,&_OBJC_CLASS___UIView,
                 local_228,4,local_1a8,0);
    }
    _objc_storeStrong(&local_1a8);
    _objc_storeStrong(&local_1e8,0);
  }
  return;
}


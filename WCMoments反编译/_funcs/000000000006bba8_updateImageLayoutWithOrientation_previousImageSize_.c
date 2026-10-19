// updateImageLayoutWithOrientation:previousImageSize: @0x6bba8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void __thiscall
WCMYBIBImageCell::updateImageLayoutWithOrientation_previousImageSize_
          (WCMYBIBImageCell *this,ID param_1,SEL param_2,long_long param_3,CGSize param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_268;
  undefined8 local_228;
  undefined8 local_1e8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  undefined8 local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_120;
  double dStack_118;
  byte local_101;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double dStack_e8;
  undefined8 local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  byte local_89;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  long local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  WCMYBIBImageCell *local_38;
  double local_30;
  double local_28;
  
  dVar4 = param_4.field1_0x8;
  local_30 = param_4.field0_0x0;
  local_48 = param_2;
  local_40 = param_1;
  local_38 = this;
  local_28 = dVar4;
  if (((byte)this[_interacting] & 1) != 0) {
    _objc_msgSend_restoreInteractionWithDuration_(0,this,local_1e8);
  }
  _objc_msgSend_wcm_yb_cellData(local_38,local_1e8);
  local_50 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar1,local_1e8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar2,local_1e8);
  local_68 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_imageType(uVar1,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_70 = lVar3;
  if (lVar3 + -2 == 0) {
    _objc_msgSend_originImage(local_50,local_1e8);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    local_89 = 0;
    if (lVar3 == 0) {
      local_a0 = (double)_objc_msgSend_size(local_68,local_1e8);
      dStack_98 = dVar4;
      local_60 = local_a0;
    }
    else {
      _objc_msgSend_originImage(local_50,local_1e8);
      local_88 = _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_80 = (double)_objc_msgSend_size(local_88,local_1e8);
      dStack_78 = dVar4;
      local_60 = local_80;
    }
    dStack_58 = dVar4;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_88);
    }
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  else {
    local_b0 = (double)_objc_msgSend_size(lVar3 + -2,local_68,local_1e8);
    dStack_a8 = dVar4;
    local_60 = local_b0;
    dStack_58 = dVar4;
  }
  _objc_msgSend_wcm_yb_containerSize(local_38,local_1e8);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  local_c0 = (**(code **)(lVar3 + 0x10))(lVar3,local_48);
  local_b8 = dVar4;
  (*(code *)PTR__objc_release_00110458)(lVar3);
  _objc_msgSend_layout(local_50,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = local_b8;
  dVar5 = local_60;
  dVar6 = dStack_58;
  local_e0 = _objc_msgSend_wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
                       (local_c0,uVar1,local_1e8,local_48);
  dStack_d8 = dVar4;
  local_d0 = dVar5;
  dStack_c8 = dVar6;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar4 = local_b8;
  local_f0 = _objc_msgSend_contentSizeWithContainerSize_imageViewFrame_
                       (local_c0,local_b8,local_e0,dStack_d8,local_d0,dStack_c8,local_38,local_1e8);
  local_101 = 0;
  dStack_e8 = dVar4;
  if (local_70 + -3 == 0) {
    local_228 = 0x3ff0000000000000;
  }
  else {
    _objc_msgSend_layout(local_70 + -3,local_50,local_1e8);
    local_100 = _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_228 = _objc_msgSend_wcm_yb_maximumZoomScaleWithContainerSize_imageSize_orientation_
                          (local_c0,local_b8,local_60,dStack_58,local_100,local_1e8,local_48);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_100);
  }
  local_f8 = local_228;
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setZoomScale_(uVar1,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dStack_118 = dStack_e8;
  local_120 = local_f0;
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentSize_(local_120,dStack_118,uVar1,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMinimumZoomScale_(0x3ff0000000000000,uVar1,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = local_f8;
  _objc_msgSend_imageScrollView(local_38,local_1e8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMaximumZoomScale_(uVar1,uVar2,local_1e8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((local_30 <= 0.0) || (local_28 <= 0.0)) {
    local_138 = 0.0;
  }
  else {
    local_138 = local_60 / dStack_58 - local_30 / local_28;
  }
  local_140 = local_138;
  if (0.0 <= local_138) {
    local_268 = local_138;
  }
  else {
    local_268 = -local_138;
  }
  local_148 = local_268;
  if (0.001 < local_268) {
    local_1b8 = (*(code *)PTR__objc_retain_00110460)(local_38);
    dStack_1a8 = dStack_d8;
    local_1b0 = local_e0;
    dStack_198 = dStack_c8;
    local_1a0 = local_d0;
    _objc_msgSend_animateWithDuration_animations_
              (0x3fd0000000000000,&_OBJC_CLASS___UIView,local_1e8);
    _objc_storeStrong(&local_1b8,0);
  }
  else {
    dStack_168 = dStack_d8;
    local_170 = local_e0;
    dStack_158 = dStack_c8;
    local_160 = local_d0;
    _objc_msgSend_imageScrollView(local_38,local_1e8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar1,local_1e8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dStack_188 = dStack_168;
    local_190 = local_170;
    dStack_178 = dStack_158;
    local_180 = local_160;
    _objc_msgSend_setFrame_(local_170,dStack_168,local_160,dStack_158,uVar2,local_1e8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  return;
}


// ___108-[WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer:startView:endView:orientation:completion:]_block_invoke.7 @0x8e2e4

void ___108__WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion___block_invoke_7
               (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_2f8;
  undefined8 local_278;
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  undefined8 local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
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
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  long local_68;
  undefined1 auStack_60 [48];
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _objc_msgSend_colorWithAlphaComponent_(0,*(undefined8 *)(param_1 + 0x28));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + 0x20),local_278);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = _objc_msgSend_contentMode(*(undefined8 *)(param_1 + 0x38),local_278);
  _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + 0x30),local_278,uVar2);
  if (*(long *)(param_1 + 0x30) == 0) {
    _memset(auStack_60,0,0x30);
  }
  else {
    _objc_msgSend_transform(auStack_60,*(long *)(param_1 + 0x30),local_278);
  }
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_278);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_statusBarOrientation(uVar2,local_278);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_68 = lVar3;
  if (*(long *)(param_1 + 0x40) != lVar3) {
    uVar2 = _WCMYBIBRotationAngle(*(undefined8 *)(param_1 + 0x40),lVar3);
    _memcpy(auStack_c8,auStack_60,0x30);
    _CGAffineTransformRotate(uVar2,auStack_c8);
    _memcpy(auStack_60,auStack_98,0x30);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_opt_self(&_OBJC_CLASS___UIImageView);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_opt_isKindOfClass(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    local_180 = *(double *)(param_1 + 0x58) / *(double *)(param_1 + 0x78);
    dVar5 = *(double *)(param_1 + 0x60) / *(double *)(param_1 + 0x80);
    local_2f8 = local_180;
    if (local_180 < dVar5) {
      local_2f8 = dVar5;
    }
    local_190 = local_2f8;
    local_178 = local_2f8;
    dVar6 = *(double *)(param_1 + 0x58);
    local_188 = dVar5;
    _objc_msgSend_layer(*(undefined8 *)(param_1 + 0x30),local_278);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar7 = (double)_objc_msgSend_anchorPoint(uVar2,local_278);
    dVar9 = *(double *)(param_1 + 0x48);
    dVar6 = dVar7 * dVar6;
    dVar8 = *(double *)(param_1 + 0x60);
    local_1b0 = dVar7;
    local_1a8 = dVar5;
    _objc_msgSend_layer(*(undefined8 *)(param_1 + 0x30),local_278);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_1c0 = _objc_msgSend_anchorPoint(uVar4,local_278);
    dVar5 = *(double *)(param_1 + 0x50) + dVar7 * dVar8;
    local_1b8 = dVar7;
    local_1d0 = _CGPointMake(dVar9 + dVar6);
    dStack_1c8 = dVar5;
    local_1a0 = local_1d0;
    dStack_198 = dVar5;
    _objc_msgSend_setCenter_(local_1d0,dVar5,*(undefined8 *)(param_1 + 0x30),local_278);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    dVar5 = local_178;
    _memcpy(auStack_230,auStack_60,0x30);
    _CGAffineTransformScale(dVar5,dVar5,auStack_230);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _memcpy(auStack_260,auStack_200,0x30);
    _objc_msgSend_setTransform_(uVar2,local_278,auStack_260);
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + 0x50);
    local_110 = *(undefined8 *)(param_1 + 0x48);
    uStack_f8 = *(undefined8 *)(param_1 + 0x60);
    local_100 = *(undefined8 *)(param_1 + 0x58);
    local_f0 = local_110;
    uStack_e8 = uStack_108;
    local_e0 = local_100;
    uStack_d8 = uStack_f8;
    _objc_msgSend_setFrame_
              (local_110,uStack_108,local_100,uStack_f8,*(undefined8 *)(param_1 + 0x30),local_278);
    _memcpy(auStack_140,auStack_60,0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _memcpy(auStack_170,auStack_140,0x30);
    _objc_msgSend_setTransform_(uVar2,local_278,auStack_170);
  }
  return;
}


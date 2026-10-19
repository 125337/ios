// resetLayoutToDefaultAnimated: @0xb3e40

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::resetLayoutToDefaultAnimated_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  long lVar5;
  undefined8 in_d1;
  undefined8 local_278;
  undefined *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  code *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [80];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  uVar2 = _objc_msgSend_hasAspectRatio(param_1);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = _objc_msgSend_resetAspectRatioEnabled(local_28,local_278), (uVar2 & 1) != 0)) {
    lVar5 = (long)_aspectRatio;
    uVar3 = *(undefined8 *)PTR__CGSizeZero_001108e0;
    ((undefined8 *)(local_28 + lVar5))[1] = *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8);
    *(undefined8 *)(local_28 + lVar5) = uVar3;
  }
  if (((local_31 & 1) == 0) || (lVar5 = _objc_msgSend_angle(local_28,local_278), lVar5 != 0)) {
    *(undefined8 *)(local_28 + (long)_angle) = 0;
    _objc_msgSend_scrollView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(0x3ff0000000000000,uVar3,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uStack_58 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
    local_60 = *(undefined8 *)PTR__CGPointZero_00110850;
    _objc_msgSend_image(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_50 = _objc_msgSend_size(uVar3,local_278);
    uStack_48 = in_d1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    puVar1 = PTR__CGAffineTransformIdentity_00110738;
    _memcpy(auStack_90,PTR__CGAffineTransformIdentity_00110738,0x30);
    _objc_msgSend_backgroundImageView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_c0,auStack_90,0x30);
    _objc_msgSend_setTransform_(uVar3,local_278,auStack_c0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _memcpy(auStack_f0,puVar1,0x30);
    _objc_msgSend_backgroundContainerView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_120,auStack_f0,0x30);
    _objc_msgSend_setTransform_(uVar3,local_278,auStack_120);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uStack_138 = uStack_58;
    local_140 = local_60;
    uStack_128 = uStack_48;
    local_130 = local_50;
    _objc_msgSend_backgroundImageView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(local_140,uStack_138,local_130,uStack_128,uVar3,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uStack_178 = uStack_58;
    local_180 = local_60;
    uStack_168 = uStack_48;
    local_170 = local_50;
    _objc_msgSend_backgroundContainerView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(local_180,uStack_178,local_170,uStack_168,uVar3,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _memcpy(auStack_1d0,puVar1,0x30);
    _objc_msgSend_foregroundImageView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_200,auStack_1d0,0x30);
    _objc_msgSend_setTransform_(uVar3,local_278,auStack_200);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uStack_218 = uStack_58;
    local_220 = local_60;
    uStack_208 = uStack_48;
    local_210 = local_50;
    _objc_msgSend_foregroundImageView(local_28,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uStack_238 = uStack_218;
    local_240 = local_220;
    uStack_228 = uStack_208;
    local_230 = local_210;
    _objc_msgSend_setFrame_(local_220,uStack_218,local_210,uStack_208,uVar3,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_layoutInitialImage(local_28,local_278);
    _objc_msgSend_checkForCanReset(local_28,local_278);
  }
  else {
    _objc_msgSend_resetTimer(local_28,local_278);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar5 != 0) {
      _objc_msgSend_cancelResetTimer(local_28,local_278);
      _objc_msgSend_setEditing_resetCropBox_animated_(local_28,local_278,0,0,0);
    }
    _objc_msgSend_setSimpleRenderMode_animated_(local_28,local_278,1,0);
    dVar4 = _dispatch_time(0,10000000);
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    uVar3 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_268 = PTR___NSConcreteStackBlock_001104f0;
    local_260 = 0xc2000000;
    local_25c = 0;
    local_258 = ___46__WCMTOCropView_resetLayoutToDefaultAnimated___block_invoke;
    local_250 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_248 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _dispatch_after(dVar4,uVar3,&local_268);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_248,0);
  }
  return;
}


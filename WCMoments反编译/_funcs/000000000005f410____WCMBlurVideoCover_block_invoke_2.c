// ___WCMBlurVideoCover_block_invoke_2 @0x5f410

void ___WCMBlurVideoCover_block_invoke_2
               (undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,
               long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_2d8;
  double local_298;
  double local_290;
  undefined8 local_238;
  undefined8 local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  bool local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined1 auStack_178 [48];
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  double local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  byte local_81;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_70 = param_5;
  local_68 = param_5;
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  _objc_retainAutorelease();
  lVar5 = _objc_msgSend_CGImage(uVar4,local_218);
  local_81 = 0;
  local_91 = 0;
  if (lVar5 == 0) {
    _objc_msgSend_CIImage(*(undefined8 *)(param_5 + 0x20),local_218);
    local_238 = _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_238;
  }
  else {
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    _objc_retainAutorelease();
    uVar4 = _objc_msgSend_CGImage(uVar4,local_218);
    _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___CIImage,local_218,uVar4);
    local_238 = _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_238;
  }
  local_78 = (*(code *)PTR__objc_retain_00110460)(local_238);
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_80);
  }
  lVar5 = local_78;
  puVar2 = PTR___dispatch_main_q_00110528;
  if (local_78 == 0) {
    _objc_retainAutoreleaseReturnValue();
    uVar4 = _objc_retainAutoreleasedReturnValue(puVar2);
    local_c8 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = ___WCMBlurVideoCover_block_invoke_3;
    local_b0 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_a0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_5 + 0x28));
    local_a8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_5 + 0x20));
    _dispatch_async(uVar4,&local_c8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_cc = 1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  else {
    uStack_48 = 0x600000008;
    local_50 = 0x300000001;
    uStack_38 = 0x700000005;
    local_40 = 0x400000002;
    lVar6 = _objc_msgSend_imageOrientation(*(undefined8 *)(param_5 + 0x20),local_218);
    _objc_msgSend_imageByApplyingOrientation_
              (lVar5,local_218,*(undefined4 *)((long)&local_50 + lVar6 * 4));
    lVar6 = _objc_retainAutoreleasedReturnValue();
    lVar5 = local_78;
    local_78 = lVar6;
    (*(code *)PTR__objc_release_00110458)(lVar5);
    local_dc = 1;
    local_110 = _objc_msgSend_extent(local_78,local_218);
    local_108 = param_2;
    local_100 = param_3;
    local_f8 = param_4;
    local_f0 = param_3;
    local_138 = _objc_msgSend_extent(local_78,local_218);
    lVar5 = local_78;
    local_290 = param_4;
    if (param_4 <= local_f0) {
      local_290 = local_f0;
    }
    local_140 = local_290;
    local_e8 = 320.0 / local_290;
    local_298 = local_e8;
    if ((double)(long)local_dc < local_e8) {
      local_298 = (double)(long)local_dc;
    }
    local_148 = local_298;
    local_d8 = local_298;
    local_130 = param_2;
    local_128 = param_3;
    local_120 = param_4;
    local_118 = param_4;
    _CGAffineTransformMakeScale(local_298);
    _objc_msgSend_imageByApplyingTransform_(lVar5,local_218,auStack_178);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    lVar5 = local_78;
    local_78 = lVar6;
    (*(code *)PTR__objc_release_00110458)(lVar5);
    _objc_msgSend_imageByClampingToExtent(local_78,local_218);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_60 = *(undefined8 *)PTR__kCIInputRadiusKey_001102f8;
    local_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fda0;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_218,&local_58,&local_60,1);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageByApplyingFilter_withInputParameters_(uVar4,local_218,&cf_CIGaussianBlur);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    local_1a0 = _objc_msgSend_extent(local_78,local_218);
    local_198 = local_298;
    local_190 = param_3;
    local_188 = param_4;
    _objc_msgSend_imageByCroppingToRect_(local_1a0,uVar8,local_218);
    local_180 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar7 = local_180;
    uVar4 = _WCMBlurVideoCover_context;
    local_1c8 = _objc_msgSend_extent(local_78,local_218);
    local_1c0 = local_298;
    local_1b8 = param_3;
    local_1b0 = param_4;
    local_1a8 = _objc_msgSend_createCGImage_fromRect_
                          (local_1c8,local_298,param_3,param_4,uVar4,local_218,uVar7);
    local_1d9 = false;
    bVar1 = local_1a8 == 0;
    if (bVar1) {
      local_2d8 = *(undefined8 *)(param_5 + 0x20);
    }
    else {
      _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_218,local_1a8);
      local_2d8 = _objc_retainAutoreleasedReturnValue();
      local_1d8 = local_2d8;
    }
    local_1d9 = !bVar1;
    local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_2d8);
    if ((local_1d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_1d8);
    }
    if (local_1a8 != 0) {
      _CGImageRelease(local_1a8);
    }
    _objc_msgSend_setObject_forKey_
              (_WCMBlurVideoCover_cache,local_218,local_1d0,*(undefined8 *)(param_5 + 0x20));
    puVar2 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    uVar4 = _objc_retainAutoreleasedReturnValue(puVar2);
    local_210 = PTR___NSConcreteStackBlock_001104f0;
    local_208 = 0xc2000000;
    local_204 = 0;
    local_200 = ___WCMBlurVideoCover_block_invoke_2961;
    local_1f8 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_1e8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_5 + 0x28));
    local_1f0 = (*(code *)PTR__objc_retain_00110460)(local_1d0);
    _dispatch_async(uVar4,&local_210);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_180,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_78,0);
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}


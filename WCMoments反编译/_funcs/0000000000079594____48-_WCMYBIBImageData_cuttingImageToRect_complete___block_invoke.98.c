// ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke.98 @0x79594

void ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_98
               (undefined1 param_1 [16],double param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  dispatch_queue_t queue;
  char *pcVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_460;
  ulong local_458;
  undefined8 local_388;
  undefined *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  code *local_358;
  undefined *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 auStack_338 [24];
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 local_298;
  double local_290;
  double local_288;
  double local_280;
  long local_278;
  undefined1 auStack_270 [48];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 auStack_220 [48];
  undefined1 auStack_1f0 [48];
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [55];
  byte local_69;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  long local_30;
  long local_28;
  
  local_30 = param_3;
  local_28 = param_3;
  uVar3 = (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),0);
    return;
  }
  _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  dVar8 = (double)_objc_msgSend_scale(uVar4,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_38 = dVar8;
  _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  dVar8 = (double)_objc_msgSend_size(uVar4,local_388);
  local_50 = dVar8;
  local_48 = param_2;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_40 = dVar8;
  _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_68 = _objc_msgSend_size(uVar4,local_388);
  local_60 = param_2;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_69 = 0;
  local_58 = param_2;
  _memcpy(auStack_a0,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lVar5 = _objc_msgSend_imageOrientation(uVar4,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if (lVar5 == 1) {
LAB_00079770:
    _CGAffineTransformMakeRotation(0xc00921fb54442d18);
    _CGAffineTransformTranslate(-local_40,-local_58,auStack_100);
    _memcpy(auStack_a0,auStack_d0,0x30);
  }
  else {
    if (lVar5 == 2) {
LAB_000797b8:
      _CGAffineTransformMakeRotation(0x3ff921fb54442d18);
      _CGAffineTransformTranslate(0,-local_58,auStack_160);
      _memcpy(auStack_a0,auStack_130,0x30);
      local_69 = 1;
      goto LAB_00079854;
    }
    if (lVar5 != 3) {
      if (lVar5 == 5) goto LAB_00079770;
      if (lVar5 == 6) goto LAB_000797b8;
      if (lVar5 != 7) goto LAB_00079854;
    }
    _CGAffineTransformMakeRotation(0xbff921fb54442d18);
    _CGAffineTransformTranslate(-local_40,0,auStack_1c0);
    _memcpy(auStack_a0,auStack_190,0x30);
    local_69 = 1;
  }
LAB_00079854:
  dVar8 = local_38;
  _memcpy(auStack_220,auStack_a0,0x30);
  _CGAffineTransformScale(dVar8,dVar8,auStack_220);
  _memcpy(auStack_a0,auStack_1f0,0x30);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  uVar11 = *(undefined8 *)(param_3 + 0x50);
  _memcpy(auStack_270,auStack_a0,0x30);
  local_240 = _CGRectApplyAffineTransform(uVar4,auStack_270);
  local_238 = uVar9;
  local_230 = uVar10;
  local_228 = uVar11;
  _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_msgSend_CGImage(uVar4,local_388);
  lVar5 = _CGImageCreateWithImageInRect(local_240,local_238,local_230,local_228);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_278 = lVar5;
  uVar3 = (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
  if ((uVar3 & 1) == 0) {
    if ((local_69 & 1) == 0) {
      local_458 = _CGImageGetWidth(local_278);
    }
    else {
      local_458 = _CGImageGetHeight(local_278);
    }
    local_280 = (double)local_458;
    if ((local_69 & 1) == 0) {
      local_460 = _CGImageGetHeight(local_278);
    }
    else {
      local_460 = _CGImageGetWidth(local_278);
    }
    local_288 = (double)local_460;
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    dVar8 = local_288 / local_38;
    local_2a8 = _CGSizeMake(local_280 / local_38);
    local_2a0 = dVar8;
    local_298 = _objc_msgSend_bestSizeOfCuttingWithOriginSize_(local_2a8,uVar4,local_388);
    lVar5 = local_278;
    local_290 = dVar8;
    _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar11 = _objc_msgSend_scale(uVar4,local_388);
    _objc_msgSend_originImage(*(undefined8 *)(param_3 + 0x20),local_388);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    uVar10 = _objc_msgSend_imageOrientation(uVar9,local_388);
    _objc_msgSend_imageWithCGImage_scale_orientation_
              (uVar11,&_OBJC_CLASS___UIImage,local_388,lVar5,uVar10);
    local_2b0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar3 = (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
    if ((uVar3 & 1) == 0) {
      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_388);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_msgSend_scale(uVar4,local_388);
      _UIGraphicsBeginImageContextWithOptions(local_298,local_290,uVar9,0);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar4 = local_2b0;
      uVar10 = 0;
      uVar9 = local_298;
      dVar8 = local_290;
      local_2d8 = _CGRectMake(0);
      local_2d0 = uVar10;
      local_2c8 = uVar9;
      local_2c0 = dVar8;
      _objc_msgSend_drawInRect_(local_2d8,uVar10,uVar9,dVar8,uVar4,local_388);
      uVar3 = (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
      if ((uVar3 & 1) == 0) {
        _UIGraphicsGetImageFromCurrentImageContext();
        local_2e0 = _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
        if (local_278 != 0) {
          _CGImageRelease(local_278);
        }
        _objc_initWeak(auStack_2e8,*(undefined8 *)(param_3 + 0x20));
        pcVar6 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
        puVar1 = PTR___dispatch_main_q_00110528;
        _objc_retainAutoreleaseReturnValue();
        queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
        pcVar7 = _dispatch_queue_get_label(queue);
        iVar2 = _strcmp(pcVar6,pcVar7);
        (*(code *)PTR__objc_release_00110458)(queue);
        puVar1 = PTR___dispatch_main_q_00110528;
        if (iVar2 == 0) {
          local_320 = PTR___NSConcreteStackBlock_001104f0;
          local_318 = 0xc2000000;
          local_314 = 0;
          local_310 = ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_2_99;
          local_308 = &___block_descriptor_56_e8_32s40bs48w_e5_v8__0l;
          _objc_copyWeak(auStack_2f0,auStack_2e8);
          local_300 = (*(code *)PTR__objc_retain_00110460)(local_2e0);
          local_2f8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_3 + 0x30));
          (*local_310)(&local_320);
          _objc_storeStrong(&local_2f8);
          _objc_storeStrong(&local_300,0);
          _objc_destroyWeak(auStack_2f0);
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);
          local_368 = PTR___NSConcreteStackBlock_001104f0;
          local_360 = 0xc2000000;
          local_35c = 0;
          local_358 = ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_4;
          local_350 = &___block_descriptor_56_e8_32s40bs48w_e5_v8__0l;
          _objc_copyWeak(auStack_338,auStack_2e8);
          local_348 = (*(code *)PTR__objc_retain_00110460)(local_2e0);
          local_340 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_3 + 0x30));
          _dispatch_async(uVar4,&local_368);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          _objc_storeStrong(&local_340);
          _objc_storeStrong(&local_348,0);
          _objc_destroyWeak(auStack_338);
        }
        _objc_destroyWeak(auStack_2e8);
        _objc_storeStrong(&local_2e0,0);
        local_2b4 = 0;
      }
      else {
        (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),0);
        _UIGraphicsEndImageContext();
        if (local_278 != 0) {
          _CGImageRelease(local_278);
        }
        local_2b4 = 1;
      }
    }
    else {
      (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),0);
      if (local_278 != 0) {
        _CGImageRelease(local_278);
      }
      local_2b4 = 1;
    }
    _objc_storeStrong(&local_2b0,0);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),0);
    if (local_278 != 0) {
      _CGImageRelease(local_278);
    }
  }
  return;
}


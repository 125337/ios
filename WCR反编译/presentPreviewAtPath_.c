// presentPreviewAtPath: @ 01c425fc

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateLibraryViewController::presentPreviewAtPath_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 in_d0;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double in_d1;
  undefined8 uVar11;
  double in_d2;
  double in_d3;
  double local_330;
  double local_328;
  double local_308;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined8 local_280;
  double local_278;
  double local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  double local_240;
  double local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  undefined *local_178;
  double local_170;
  undefined4 local_164;
  double local_160;
  double local_158;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_f8;
  double local_d8;
  double local_d0;
  double local_a8;
  double local_98;
  double local_88;
  undefined *local_80;
  undefined *local_78 [5];
  undefined *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_3c = 1;
    goto LAB_01c4314c;
  }
  FUN_01c43168();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  if (lVar3 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_viewWithTag__026cabe0,_WCR_NAMEPLATE_PREVIEW_MASK_TAG);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,puVar4,PTR_s_initWithFrame__026ca6e8);
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_PREVIEW_MASK_TAG);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe8000000000000);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar7 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAlpha__026ca860);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78[0] = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setEnabled__026ca938,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addGestureRecognizer__026ca4a8,local_78[0])
    ;
    puVar4 = PTR_WCRefineNameplateHelper_026ce5f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_cachedImageAtPath__026ae8c8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_size_026cab00);
    local_98 = dVar7;
    if ((dVar7 <= 0.0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00), local_a8 = dVar7,
       in_d1 <= 0.0)) {
      local_308 = DAT_02324270;
    }
    else {
      local_308 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00);
      in_d2 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00);
      local_308 = in_d1 / local_308;
    }
    local_88 = local_308;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_f8 = local_308;
    local_d8 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_328 = in_d3;
    if (local_d8 < in_d3) {
      local_328 = local_d8;
    }
    local_128 = local_328;
    local_d0 = local_328 * DAT_02323c98;
    dVar8 = local_d0 * local_88;
    dVar7 = local_88;
    local_130 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_140 = in_d2 - 40.0;
    local_164 = 1;
    local_330 = local_140;
    if (local_140 < 1.0) {
      local_330 = 1.0;
    }
    local_170 = local_330;
    local_138 = local_330;
    if (local_330 < local_130) {
      local_d0 = local_d0 * (local_330 / local_130);
      local_130 = local_330;
    }
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_160 = dVar8;
    local_158 = dVar7;
    _objc_alloc();
    uVar11 = 0;
    uVar9 = 0;
    dVar7 = local_130;
    dVar8 = local_d0;
    FUN_01c36640();
    local_198 = uVar9;
    local_190 = uVar11;
    local_188 = dVar7;
    local_180 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithFrame__026ca6e8);
    local_178 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_PREVIEW_HOST_TAG);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_1c8 = uVar9;
    local_1c0 = uVar11;
    local_1b8 = dVar7;
    local_1b0 = dVar8;
    _CGRectGetMidX();
    uVar10 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_1e8 = uVar10;
    local_1e0 = uVar11;
    local_1d8 = dVar7;
    local_1d0 = dVar8;
    _CGRectGetMidY(uVar10,uVar11);
    FUN_01c4392c();
    local_200 = uVar9;
    uStack_1f8 = uVar10;
    local_1a8 = uVar9;
    uStack_1a0 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setCenter__026ca8c0);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_178);
    puVar4 = PTR_WCRefineNameplateHelper_026ce5f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_shouldUseEmoticonForPath__026ae918,
               local_38);
    if (((ulong)puVar4 & 1) == 0) {
LAB_01c42ed8:
      puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
      local_288 = uVar9;
      local_280 = uVar10;
      local_278 = dVar7;
      local_270 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,uVar10,dVar7,dVar8,puVar4,PTR_s_initWithFrame__026ca6e8);
      local_268 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setContentMode__026ca8e0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setImage__026ca978,local_80);
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addSubview__026ca4c0,local_268);
      _objc_storeStrong(&local_268,0);
    }
    else {
      pcVar6 = "MMEmoticonView";
      _objc_getClass();
      if (pcVar6 == (char *)0x0) goto LAB_01c42ed8;
      pcVar6 = "MMEmoticonView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
      local_228 = uVar9;
      local_220 = uVar10;
      local_218 = dVar7;
      local_210 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithFrame__026ca6e8);
      local_208 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
      puVar4 = PTR_WCRefineNameplateHelper_026ce5f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_cachedDataAtPath__026ae920,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_230 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      if (puVar4 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setEmoticonOnView_imageData_play_026ae928
                   ,local_208,local_230,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addSubview__026ca4c0,local_208);
      pcVar6 = local_208;
      puVar4 = PTR_WCRefineNameplateHelper_026ce5f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
      local_250 = uVar9;
      local_248 = uVar10;
      local_240 = dVar7;
      local_238 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00);
      local_260 = uVar9;
      local_258 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_250,local_248,local_240,local_238,uVar9,uVar10,puVar4,
                 PTR_s_fitContentView_inBounds_imageSiz_026ae908,pcVar6);
      _objc_storeStrong(&local_230);
      _objc_storeStrong(&local_208,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_50);
    puVar2 = local_50;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_2b0 = PTR___NSConcreteStackBlock_02578660;
    local_2a8 = 0xc2000000;
    local_2a4 = 0;
    local_2a0 = FUN_01c43958;
    local_298 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_78[0];
    local_290 = puVar2;
    local_2d8 = puVar4;
    local_2d0 = 0xc2000000;
    local_2cc = 0;
    local_2c8 = FUN_01c4399c;
    local_2c0 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,puVar5,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_2b0,
               &local_2d8);
    _objc_storeStrong(&local_2b8);
    _objc_storeStrong(&local_290,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(local_78,0);
    _objc_storeStrong(&local_50,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_48,0);
LAB_01c4314c:
  _objc_storeStrong(&local_38,0);
  return;
}


// FUN_00833390 @ 00833390

void FUN_00833390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,long *param_11)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  cfstringStruct *local_570;
  cfstringStruct *local_568;
  cfstringStruct *local_560;
  cfstringStruct *local_558;
  cfstringStruct *local_550;
  cfstringStruct *local_548;
  cfstringStruct *local_540;
  cfstringStruct *local_538;
  cfstringStruct *local_530;
  cfstringStruct *local_528;
  cfstringStruct *local_520;
  undefined1 *local_518;
  undefined8 local_510;
  ulong local_508;
  ulong local_500;
  ulong local_4f8;
  ulong local_4f0;
  cfstringStruct *local_4e8;
  cfstringStruct *local_4e0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  ulong *local_4a8;
  cfstringStruct *local_4a0;
  undefined **local_498;
  cfstringStruct *local_490;
  undefined **local_488;
  cfstringStruct *local_480;
  undefined **local_478;
  cfstringStruct *local_470;
  undefined8 local_468;
  undefined **local_460;
  cfstringStruct *local_458;
  undefined1 *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  undefined1 *local_420;
  undefined8 local_418;
  undefined1 *local_410;
  cfstringStruct *local_408;
  cfstringStruct *local_400;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  cfstringStruct *local_360;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  undefined8 local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  undefined4 local_2ec;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  undefined *local_2d8;
  cfstringStruct *local_2d0;
  undefined4 local_2c4;
  cfstringStruct *local_2c0;
  undefined *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  undefined4 local_264;
  cfstringStruct *local_260;
  undefined *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined8 local_1a0;
  long local_198;
  long *local_190;
  undefined1 auStack_188 [48];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  byte local_111;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  undefined4 local_7c;
  long *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  
  local_48 = (cfstringStruct *)0x0;
  local_210 = param_5;
  local_208 = param_6;
  local_200 = param_7;
  local_1f8 = param_8;
  local_1f0 = param_9;
  local_1e8 = param_10;
  local_1e0 = param_11;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,local_208);
  local_58 = local_200;
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,local_1f8);
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,local_1f0);
  local_70 = 0;
  _objc_storeStrong(&local_70,local_1e8);
  local_78 = local_1e0;
  if (local_48 == (cfstringStruct *)0x0) {
    local_7c = 1;
  }
  else {
    *local_1e0 = *local_1e0 + 1;
    local_a1 = 0;
    local_b1 = 0;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    local_218 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_220 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_240 = (cfstringStruct *)0x7fffffffffffffff;
    }
    else {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      local_228 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_230 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_240 = pcVar2;
      local_238 = pcVar2;
    }
    local_248 = local_240;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(local_220);
    local_88 = local_248;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
    local_250 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_260 = pcVar2;
    local_c0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    pcVar2 = local_260;
    local_258 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_264 = SUB84(pcVar2,0);
    if (((ulong)pcVar2 & 1) == 0) {
      local_280 = &cf___;
    }
    else {
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_class_0269cd60);
      local_270 = pcVar2;
      _NSStringFromClass();
      local_278 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_280 = pcVar2;
      local_d0 = pcVar2;
    }
    local_288 = local_280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_288;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    if (local_48 == local_68) {
      local_290 = &cf_MEDIA;
    }
    else {
      local_290 = &cf_HOST;
      if (local_48 != local_60) {
        local_290 = &cf___;
      }
    }
    local_2a8 = local_290;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_2a8;
    local_2a0 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_2a0;
    pcVar2 = local_68;
    _objc_getAssociatedObject(local_68,&DAT_028cd1d3);
    local_298 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKey__0269e048,local_48);
    local_2b0 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_2c0 = pcVar2;
    local_f8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar2 = local_2c0;
    local_2b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_2c4 = SUB84(pcVar2,0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
      local_2d0 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_2e0 = pcVar2;
      local_100 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
      pcVar2 = local_2e0;
      local_2d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_2ec = SUB84(pcVar2,0);
      if (((ulong)pcVar2 & 1) == 0) {
        local_2f8 = local_100;
      }
      else {
        local_2f8 = &cf_nil;
      }
      local_308 = local_2f8;
      pcVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_opaque);
      local_300 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_318 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_318 = &cf_unknown;
      }
      local_570 = local_308;
      local_568 = local_318;
      pcVar4 = local_2e8;
      local_310 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2e8,PTR_s_stringWithFormat__0269cca8,
                 &cf__WCR_CLEAREDoriginalColor___originalOpaque____);
      local_320 = pcVar4;
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_e8;
      local_e8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(local_310);
      _objc_storeStrong(&local_100,0);
    }
    pcVar2 = &cf_space_s_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_space_s_,PTR_s_stringByPaddingToLength_withStri_026a8c60,local_58 << 1,
               &cf_space_s_,0);
    local_328 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_348 = local_70;
    local_338 = local_50;
    pcVar4 = local_48;
    local_340 = pcVar2;
    local_108 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
    local_330 = pcVar4;
    _NSStringFromClass();
    local_350 = pcVar4;
    _objc_retainAutoreleasedReturnValue();
    local_368 = local_48;
    local_360 = local_e0;
    pcVar2 = local_48;
    local_370 = pcVar4;
    FUN_00834cd4();
    local_358 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_380 = local_e8;
    pcVar4 = local_48;
    local_388 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tag_026cab98);
    local_111 = 0;
    bVar1 = local_88 != (cfstringStruct *)0x7fffffffffffffff;
    local_378 = pcVar4;
    if (bVar1) {
      local_570 = local_88;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
      local_398 = pcVar2;
      _objc_retainAutoreleasedReturnValue();
      local_390 = pcVar2;
      local_110 = pcVar2;
    }
    else {
      local_390 = &cf_root;
    }
    local_3c0 = local_390;
    pcVar2 = local_48;
    local_111 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    local_3b8 = param_1;
    local_3b0 = param_2;
    local_3a8 = param_3;
    local_3a0 = param_4;
    local_138 = param_1;
    local_130 = param_2;
    local_128 = param_3;
    local_120 = param_4;
    _NSStringFromCGRect();
    local_3c8 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_3f0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_3e8 = param_1;
    local_3e0 = param_2;
    local_3d8 = param_3;
    local_3d0 = param_4;
    local_158 = param_1;
    local_150 = param_2;
    local_148 = param_3;
    local_140 = param_4;
    _NSStringFromCGRect(param_1,param_2,param_3,param_4);
    local_3f8 = pcVar4;
    _objc_retainAutoreleasedReturnValue();
    local_400 = local_48;
    local_408 = pcVar4;
    if (local_48 == (cfstringStruct *)0x0) {
      _memset(auStack_188,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_188,local_48,PTR_s_transform_0269e178);
    }
    puVar5 = auStack_188;
    _NSStringFromCGAffineTransform();
    local_410 = puVar5;
    _objc_retainAutoreleasedReturnValue();
    local_420 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8);
    pcVar2 = local_48;
    local_418 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
    local_424 = (uint)pcVar2;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isOpaque_0269f438);
    local_428 = (uint)pcVar2;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_clipsToBounds_026ca570);
    local_42c = (uint)pcVar2;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isUserInteractionEnabled_026ca770);
    local_430 = (uint)pcVar2;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_backgroundColor_026ca518);
    local_438 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_448 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_448 = &cf_nil;
    }
    local_570 = local_340;
    local_568 = local_338;
    local_560 = local_370;
    local_558 = local_368;
    local_550 = local_360;
    local_548 = local_388;
    local_540 = local_380;
    local_538 = local_378;
    local_530 = local_3c0;
    local_528 = local_3f0;
    local_520 = local_408;
    local_518 = local_420;
    local_510 = local_418;
    local_508 = (ulong)local_424 & 1;
    local_500 = (ulong)local_428 & 1;
    local_4f8 = (ulong)local_42c & 1;
    local_4f0 = (ulong)local_430 & 1;
    local_4e8 = local_448;
    local_4e0 = local_c8;
    local_450 = (undefined1 *)&local_570;
    local_440 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_348,PTR_s_appendFormat__0269d148,
               &
               cf__________p______tag__ldz___frame___bounds___transform___alpha___3fhidden__dopaque__dclips__dinteraction__dbg___owner___
              );
    (*(code *)PTR__objc_release_02578630)(local_440);
    (*(code *)PTR__objc_release_02578630)(local_420);
    (*(code *)PTR__objc_release_02578630)(local_408);
    (*(code *)PTR__objc_release_02578630)(local_3f0);
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    (*(code *)PTR__objc_release_02578630)(local_388);
    (*(code *)PTR__objc_release_02578630)(local_370);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_subviews_026cab40);
    local_458 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_460 = &local_1d8;
    local_1d8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1d0 = 0xd0800000;
    local_1cc = 0;
    local_1c8 = FUN_00835034;
    local_1c0 = &DAT_02580770;
    local_4a8 = (ulong *)&local_1b8;
    local_4a0 = local_50;
    local_470 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = local_4a0;
    local_198 = local_58;
    local_498 = local_460 + 5;
    local_490 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = local_490;
    local_488 = local_460 + 6;
    local_480 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = local_480;
    local_478 = local_460 + 7;
    local_468 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = local_468;
    local_190 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_470,PTR_s_enumerateObjectsUsingBlock__0269d3d0,local_460);
    (*(code *)PTR__objc_release_02578630)(local_470);
    local_4b0 = 0;
    _objc_storeStrong(local_478);
    _objc_storeStrong(local_488,local_4b0);
    _objc_storeStrong(local_498,local_4b0);
    _objc_storeStrong(local_4a8,local_4b0);
    _objc_storeStrong(&local_108,local_4b0);
    _objc_storeStrong(&local_f8,local_4b0);
    _objc_storeStrong(&local_f0,local_4b0);
    _objc_storeStrong(&local_e8,local_4b0);
    _objc_storeStrong(&local_e0,local_4b0);
    _objc_storeStrong(&local_c8,local_4b0);
    _objc_storeStrong(&local_c0,local_4b0);
    local_7c = 0;
  }
  local_4b8 = 0;
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,local_4b8);
  _objc_storeStrong(&local_60,local_4b8);
  _objc_storeStrong(&local_50,local_4b8);
  _objc_storeStrong(&local_48,local_4b8);
  return;
}


// FUN_008358a0 @ 008358a0

void FUN_008358a0(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                 ulong *param_10,long *param_11,long *param_12,long *param_13)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  long *local_500;
  long *local_4f8;
  long *local_4f0;
  long *local_4e8;
  long *local_4e0;
  long *local_4d8;
  cfstringStruct *local_4d0;
  double local_4c8;
  long *local_4c0;
  double local_4b8;
  long *local_4b0;
  double local_4a8;
  ulong local_4a0;
  ulong local_498;
  ulong local_490;
  undefined8 local_480;
  long *local_478;
  long *local_470;
  long *local_468;
  long local_460;
  long *local_458;
  long *local_450;
  long *local_448;
  long *local_440;
  long *local_438;
  undefined1 *local_430;
  undefined4 local_424;
  uint local_420;
  uint local_41c;
  long *local_418;
  double local_410;
  long *local_408;
  double local_400;
  long *local_3f8;
  long *local_3f0;
  long *local_3e8;
  double local_3e0;
  cfstringStruct *local_3d8;
  long *local_3d0;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  long *local_3b8;
  long *local_3b0;
  long *local_3a8;
  long *local_3a0;
  long *local_398;
  long *local_390;
  long *local_388;
  long *local_380;
  undefined8 local_378;
  long *local_370;
  long *local_368;
  double local_360;
  double local_358;
  undefined8 local_350;
  double local_348;
  long *local_340;
  double local_338;
  double local_330;
  undefined8 local_328;
  double local_320;
  long *local_318;
  long *local_310;
  long *local_308;
  long *local_300;
  long *local_2f8;
  long *local_2f0;
  long *local_2e8;
  long *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  long *local_2c8;
  undefined *local_2c0;
  undefined4 local_2b4;
  long *local_2b0;
  undefined *local_2a8;
  double local_2a0;
  uint local_294;
  long *local_290;
  uint local_288;
  undefined4 local_284;
  long *local_280;
  undefined *local_278;
  long *local_270;
  uint local_264;
  long *local_260;
  long *local_258;
  long *local_250;
  double *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  ulong local_220;
  ulong *local_218;
  long *local_210;
  long *local_208;
  long *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  byte local_189;
  cfstringStruct *local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  double dStack_148;
  long *local_140;
  long *local_138;
  double local_130;
  byte local_121;
  long *local_120;
  long *local_118 [3];
  long *local_100;
  undefined4 local_f4;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  ulong *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_248 = &local_160;
  local_200 = param_13;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (long *)0x0;
  local_240 = param_5;
  local_238 = param_6;
  local_230 = param_7;
  local_228 = param_8;
  local_220 = param_9;
  local_218 = param_10;
  local_210 = param_11;
  local_208 = param_12;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = (long *)0x0;
  _objc_storeStrong(&local_b8,local_238);
  local_c0 = (long *)0x0;
  _objc_storeStrong(&local_c0,local_230);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,local_228);
  local_d0 = local_220;
  local_d8 = local_218;
  local_e0 = local_210;
  local_e8 = local_208;
  local_f0 = local_200;
  if (((local_b0 == (long *)0x0) || (0x20 < local_220)) || (2999 < *local_218)) {
    local_f4 = 1;
    goto LAB_00836778;
  }
  *local_218 = *local_218 + 1;
  plVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
  local_118[0] = (long *)0x0;
  local_250 = plVar2;
  local_100 = plVar2;
  if ((local_b0 == local_c0) || (plVar2 == (long *)0x24f6e7)) {
    _objc_storeStrong(0,local_118,&cf_wcr);
  }
  else if (plVar2 == (long *)&UNK_000d8cc0) {
    _objc_storeStrong(0,local_118,&cf_pkc_dark);
  }
  else if (plVar2 == (long *)0xd90a7) {
    _objc_storeStrong(0,local_118,&cf_pkc_light);
  }
  else if (plVar2 == (long *)&UNK_0000271a) {
    _objc_storeStrong(0,local_118,&cf_wechat_bg);
  }
  else {
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    local_258 = plVar2;
    _NSStringFromClass();
    local_260 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_270 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_264 = (uint)plVar2;
    (*(code *)PTR__objc_release_02578630)(local_270);
    if ((local_264 & 1) == 0) {
      local_280 = local_b8;
      local_121 = 0;
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      plVar2 = local_280;
      local_278 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_284 = SUB84(plVar2,0);
      local_288 = 0;
      if (((ulong)plVar2 & 1) != 0) {
        plVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_backgroundView_026a0320);
        local_290 = plVar2;
        _objc_retainAutoreleasedReturnValue();
        local_121 = 1;
        local_288 = (uint)(plVar2 == local_b0);
        local_120 = plVar2;
      }
      local_294 = local_288;
      if ((local_121 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      if ((local_294 & 1) != 0) {
        _objc_storeStrong(local_118,&cf_table_background);
      }
    }
    else {
      _objc_storeStrong(local_118,&cf_themebox);
    }
  }
  FUN_00836850(local_b0,local_b8);
  local_2a0 = param_1;
  local_130 = param_1;
  if ((local_118[0] == (long *)0x0) && (param_2 = DAT_02323db8, DAT_02323db8 <= param_1)) {
    local_2b0 = local_b0;
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    plVar2 = local_2b0;
    local_2a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_2b4 = SUB84(plVar2,0);
    if (((ulong)plVar2 & 1) == 0) {
      local_2c8 = local_b0;
      puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
      plVar2 = local_2c8;
      local_2c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_2cc = SUB84(plVar2,0);
      if (((ulong)plVar2 & 1) != 0) {
        _objc_storeStrong(local_118,&cf_cover_blur);
      }
    }
    else {
      _objc_storeStrong(local_118,&cf_cover_image);
    }
  }
  if (local_118[0] != (long *)0x0) {
    plVar2 = local_118[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_isEqualToString__0269ccc8,&cf_wcr);
    local_2d0 = SUB84(plVar2,0);
    if (((ulong)plVar2 & 1) == 0) {
      plVar2 = local_118[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_hasPrefix__0269d320,&cf_cover_);
      local_2d4 = SUB84(plVar2,0);
      if (((ulong)plVar2 & 1) == 0) {
        plVar2 = local_118[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118[0],PTR_s_isEqualToString__0269ccc8,&cf_table_background);
        local_2d8 = SUB84(plVar2,0);
        if (((ulong)plVar2 & 1) == 0) {
          *local_e8 = *local_e8 + 1;
          goto LAB_00835ea0;
        }
      }
      *local_f0 = *local_f0 + 1;
    }
    else {
      *local_e0 = *local_e0 + 1;
    }
LAB_00835ea0:
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
    local_2e0 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_138 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)(plVar2,PTR_s_subviews_026cab40);
    local_2e8 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_2f8 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_2f0 = plVar2;
    (*(code *)PTR__objc_release_02578630)(local_2f8);
    local_140 = local_2f0;
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_window_026cabf0);
    local_300 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    plVar4 = local_b8;
    local_310 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
    local_308 = plVar4;
    _objc_retainAutoreleasedReturnValue();
    local_318 = plVar4;
    if (local_310 == plVar4) {
      local_340 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
      local_338 = param_1;
      local_330 = param_2;
      local_328 = param_3;
      local_320 = param_4;
      local_180 = param_1;
      local_178 = param_2;
      local_170 = param_3;
      local_168 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_convertRect_toView__0269ded8,local_b8);
      local_360 = param_1;
      local_358 = param_2;
      local_350 = param_3;
      local_348 = param_4;
      local_160 = param_1;
      dStack_158 = param_2;
      local_150 = param_3;
      dStack_148 = param_4;
    }
    else {
      dVar6 = *(double *)PTR__CGRectNull_025782e8;
      local_248[1] = *(double *)(PTR__CGRectNull_025782e8 + 8);
      *local_248 = dVar6;
      param_4 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      local_248[3] = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
      local_248[2] = param_4;
    }
    (*(code *)PTR__objc_release_02578630)(local_318);
    (*(code *)PTR__objc_release_02578630)(local_310);
    local_378 = local_c8;
    local_370 = local_118[0];
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    local_368 = plVar2;
    _NSStringFromClass();
    local_380 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_398 = local_b0;
    local_390 = local_100;
    plVar4 = local_138;
    local_3a0 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_class_0269cd60);
    local_388 = plVar4;
    _NSStringFromClass();
    local_3a8 = plVar4;
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = local_138;
    local_189 = 0;
    bVar1 = local_140 != (long *)0x7fffffffffffffff;
    local_3b8 = plVar4;
    if (bVar1) {
      local_500 = local_140;
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
      local_3c8 = pcVar5;
      _objc_retainAutoreleasedReturnValue();
      local_3c0 = pcVar5;
      local_188 = pcVar5;
    }
    else {
      local_3c0 = &cf_none;
    }
    local_3d8 = local_3c0;
    plVar2 = local_b0;
    local_189 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
    local_3d0 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_3e8 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    plVar2 = local_b0;
    local_3e0 = param_4;
    FUN_00836e74(local_b0,local_c0);
    local_3f0 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_400 = local_130;
    dStack_1a8 = local_248[1];
    dVar6 = *local_248;
    dStack_198 = local_248[3];
    local_1a0 = local_248[2];
    local_408 = plVar2;
    local_1b0 = dVar6;
    _NSStringFromCGRect(dVar6,dStack_1a8,local_1a0,dStack_198);
    local_3f8 = plVar2;
    _objc_retainAutoreleasedReturnValue();
    local_418 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8);
    plVar2 = local_b0;
    local_410 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isHidden_026ca768);
    local_41c = (uint)plVar2;
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isOpaque_0269f438);
    local_420 = (uint)plVar2;
    plVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isUserInteractionEnabled_026ca770);
    local_424 = SUB84(plVar2,0);
    local_500 = local_370;
    local_4f8 = local_3a0;
    local_4f0 = local_398;
    local_4e8 = local_390;
    local_4e0 = local_3b8;
    local_4d8 = local_3b0;
    local_4d0 = local_3d8;
    local_4c8 = local_3e0;
    local_4c0 = local_408;
    local_4b8 = local_400;
    local_4b0 = local_418;
    local_4a8 = local_410;
    local_4a0 = (ulong)local_41c & 1;
    local_498 = (ulong)local_420 & 1;
    local_490 = (ulong)plVar2 & 1;
    local_430 = (undefined1 *)&local_500;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_378,PTR_s_appendFormat__0269d148,
               &
               cf_event_layer_probekind___class___ptr__ptag__ldparent_____pz___layerZ___3frelation___coverage___3fframe___alpha___3fhidden__dopaque__dinteraction__d
              );
    (*(code *)PTR__objc_release_02578630)(local_418);
    (*(code *)PTR__objc_release_02578630)(local_408);
    (*(code *)PTR__objc_release_02578630)(local_3e8);
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    (*(code *)PTR__objc_release_02578630)(local_3b8);
    (*(code *)PTR__objc_release_02578630)(local_3a0);
    _objc_storeStrong(&local_138,0);
  }
  _memset(auStack_1f8,0,0x40);
  plVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  local_438 = plVar2;
  _objc_retainAutoreleasedReturnValue();
  local_448 = plVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_440 = plVar2;
  if (plVar2 != (long *)0x0) {
    local_460 = *local_1e8;
    local_458 = (long *)0x0;
    local_450 = plVar2;
    do {
      do {
        local_470 = local_450;
        local_468 = local_458;
        if (*local_1e8 - local_460 != 0) {
          _objc_enumerationMutation(*local_1e8 - local_460,local_448);
        }
        local_1b8 = *(undefined8 *)(local_1f0 + (long)local_468 * 8);
        local_500 = local_f0;
        FUN_008358a0(local_1b8,local_b8,local_c0,local_c8,local_d0 + 1,local_d8,local_e0,local_e8);
        local_458 = (long *)((long)local_468 + 1);
        local_450 = local_470;
      } while (local_458 < local_470);
      plVar2 = local_448;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_448,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                 0x10);
      local_458 = (long *)0x0;
      local_478 = plVar2;
      local_450 = plVar2;
    } while (plVar2 != (long *)0x0);
    local_478 = (long *)0x0;
    local_450 = (long *)0x0;
  }
  (*(code *)PTR__objc_release_02578630)(local_448);
  _objc_storeStrong(local_118,0);
  local_f4 = 0;
LAB_00836778:
  local_480 = 0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,local_480);
  _objc_storeStrong(&local_b8,local_480);
  _objc_storeStrong(&local_b0,local_480);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


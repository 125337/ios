// walkView:visibleIn:depth: @ 00fe2d44

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineIconNameCaptureSupport::walkView_visibleIn_depth_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  double in_d2;
  double in_d3;
  ulong local_520;
  ulong local_518;
  uint local_4b8;
  uint local_4b4;
  cfstringStruct *local_4a8;
  cfstringStruct *local_490;
  undefined *local_438;
  undefined *local_430;
  undefined1 auStack_3d8 [8];
  long local_3d0;
  long *local_3c8;
  undefined8 local_398;
  double local_388;
  ulong local_358;
  undefined *local_350;
  cfstringStruct *local_348;
  ulong local_340;
  undefined *local_338;
  ulong local_330;
  undefined *local_328;
  ulong local_320;
  undefined *local_318;
  ulong local_310;
  undefined *local_308;
  ulong local_300;
  cfstringStruct *local_2f8 [2];
  double dStack_2e8;
  double local_2d8;
  double local_2c0;
  double dStack_2b8;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  byte local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278 [4];
  ulong local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  cfstringStruct *local_208 [2];
  double local_1f8;
  double local_1d8;
  double local_1b8;
  double local_198;
  byte local_17d;
  int local_17c;
  long_long local_178;
  ulong local_170;
  ulong local_168;
  SEL local_160;
  cfstringStruct *local_158;
  undefined1 auStack_150 [128];
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  local_160 = param_2;
  local_158 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_168,param_3);
  local_170 = 0;
  _objc_storeStrong(&local_170,param_4);
  local_178 = param_5;
  if ((((local_168 == 0) ||
       (uVar2 = local_168, (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_isHidden_026ca768),
       (uVar2 & 1) != 0)) ||
      ((*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_alpha_026ca4d8), pcVar3 = local_158,
      in_d0 < DAT_02323d38)) || (0x2a < (long)local_178)) {
    local_17c = 1;
    goto LAB_00fe3e64;
  }
  uVar2 = local_168;
  dVar9 = DAT_02323d38;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isCaptureWindow__026ad3d8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_168;
  if (((ulong)pcVar3 & 1) != 0) {
    local_17c = 1;
    goto LAB_00fe3e64;
  }
  local_17d = 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_bounds_026ca548);
  local_1b8 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_170);
  local_198 = dVar9;
  _CGRectIsEmpty();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_bounds_026ca548);
    local_1f8 = dVar9;
    _CGRectInset();
    local_1d8 = dVar9;
    _CGRectIntersectsRect();
    if ((uVar2 & 1) == 0) {
      local_17d = 0;
    }
  }
  local_208[0] = (cfstringStruct *)0x0;
  _memset(auStack_250,0,0x40);
  local_d0 = &cf_image;
  local_c8 = &cf_iconImg;
  local_c0 = &cf_m_iconImg;
  local_b8 = &cf_iconImage;
  local_b0 = &cf_m_iconImage;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5);
  _objc_retainAutoreleasedReturnValue();
  local_430 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_430 != (undefined *)0x0) {
    lVar7 = *local_240;
    local_438 = (undefined *)0x0;
    do {
      do {
        if (*local_240 - lVar7 != 0) {
          _objc_enumerationMutation(*local_240 - lVar7,puVar4);
        }
        local_210 = *(undefined8 *)(local_248 + (long)local_438 * 8);
        uVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_valueForKey__0269d128,local_210);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_258 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar2 & 1) == 0) {
          local_17c = 0;
        }
        else {
          _objc_storeStrong(local_208,local_258);
          local_17c = 2;
        }
        _objc_storeStrong(&local_258,0);
        if (local_17c != 0) goto LAB_00fe3218;
        local_438 = local_438 + 1;
      } while (local_438 < local_430);
      local_430 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10)
      ;
      local_438 = (undefined *)0x0;
    } while (local_430 != (undefined *)0x0);
  }
  local_17c = 0;
LAB_00fe3218:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar2 = local_168;
  if ((local_17d & 1) == 0) {
LAB_00fe3a48:
    if ((local_17d & 1) != 0) {
      pcVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_kvcNameFromView__026ad460,local_168);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_168;
      local_2f8[0] = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_2f8[0];
      local_300 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_length_0269cca0);
      if ((pcVar3 != (cfstringStruct *)0x0) &&
         (((pcVar6 = local_2f8[0], FUN_00fe1ae8(pcVar3), ((ulong)pcVar6 & 1) != 0 ||
           (uVar2 = local_300, puVar4 = PTR_s_rangeOfString_options__0269d118,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_300,PTR_s_rangeOfString_options__0269d118,&cf_svg,1), local_310 = uVar2,
           local_308 = puVar4, uVar2 != 0x7fffffffffffffff)) ||
          ((uVar2 = local_300, puVar4 = PTR_s_rangeOfString_options__0269d118,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_300,PTR_s_rangeOfString_options__0269d118,&cf_image,1),
           local_320 = uVar2, local_318 = puVar4, uVar2 != 0x7fffffffffffffff ||
           ((uVar2 = local_300, puVar4 = PTR_s_rangeOfString_options__0269d118,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_300,PTR_s_rangeOfString_options__0269d118,&cf_Icon,1),
            local_330 = uVar2, local_328 = puVar4, uVar2 != 0x7fffffffffffffff ||
            (uVar2 = local_300, puVar4 = PTR_s_rangeOfString_options__0269d118,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_300,PTR_s_rangeOfString_options__0269d118,&cf_MenuItem,1),
            local_340 = uVar2, local_338 = puVar4, uVar2 != 0x7fffffffffffffff)))))))) {
        uVar2 = local_300;
        puVar4 = PTR_s_rangeOfString_options__0269d118;
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar3 = &cf_svg;
        if (uVar2 == 0x7fffffffffffffff) {
          pcVar3 = &cf_png;
        }
        local_358 = uVar2;
        local_350 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = local_158;
        pcVar6 = local_2f8[0];
        local_348 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_bounds_026ca548);
        local_388 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d2,in_d3,pcVar1,PTR_s_upsertName_kind_pointSize_image__026ad3c0,pcVar6,pcVar3,
                   local_208[0]);
        _objc_storeStrong(&local_348,0);
      }
      _objc_storeStrong(&local_300);
      _objc_storeStrong(local_2f8,0);
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar2 & 1) == 0) && (local_208[0] == (cfstringStruct *)0x0)) goto LAB_00fe3a48;
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_taggedNameForImage__026ad400,local_208[0])
    ;
    _objc_retainAutoreleasedReturnValue();
    local_278[0] = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    local_280 = &cf_tag;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_280 = &cf_none;
    }
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_taggedKindForImage__026ad448,local_208[0])
    ;
    _objc_retainAutoreleasedReturnValue();
    local_490 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_490 = &cf_png;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = local_490;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_stampedNameForView__026ad450,local_168);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_278[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar3,&local_280,&cf_view_stamp);
        pcVar3 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_stampedKindForView__026ad458,local_168);
        _objc_retainAutoreleasedReturnValue();
        local_291 = 0;
        local_4a8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_4a8 = local_278[0];
          FUN_00fde318();
          _objc_retainAutoreleasedReturnValue();
          local_290 = local_4a8;
        }
        local_291 = pcVar3 == (cfstringStruct *)0x0;
        _objc_storeStrong(&local_288,local_4a8);
        if ((local_291 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_290);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_208[0];
      FUN_00fe3eb8();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_278[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar3,&local_280,&cf_theme);
        pcVar3 = local_278[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_2a0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasSuffix__0269d018,&cf__png);
        local_4b4 = 1;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_containsString__0269d0b0,&cf_png);
          local_4b4 = (uint)pcVar3;
        }
        pcVar3 = &cf_png;
        if ((local_4b4 & 1) == 0) {
          pcVar3 = &cf_svg;
        }
        _objc_storeStrong(&local_288,pcVar3);
        _objc_storeStrong(&local_2a0,0);
      }
    }
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_kvcNameFromView__026ad460,local_168);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_278[0] != (cfstringStruct *)0x0) {
        _objc_storeStrong(&local_280,&cf_kvc);
        pcVar3 = local_278[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasSuffix__0269d018,&cf__png);
        local_4b8 = 1;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_containsString__0269d0b0,&cf_png);
          local_4b8 = (uint)pcVar3;
        }
        pcVar3 = &cf_png;
        if ((local_4b8 & 1) == 0) {
          pcVar3 = &cf_svg;
        }
        _objc_storeStrong(&local_288,pcVar3);
        _objc_storeStrong(&local_2a8,0);
      }
    }
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_resourceNameFromNearbyMenuItem__026ad468,local_168);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_278[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar3,&local_280,&cf_menu_item);
        pcVar6 = local_278[0];
        FUN_00fde318();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_288;
        local_288 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_resourceNameFromNearbyPlusItem__026ad470,local_168);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_278[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar3,&local_280,&cf_plus_item);
        pcVar6 = local_278[0];
        FUN_00fde318();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_288;
        local_288 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if (local_278[0] == (cfstringStruct *)0x0) {
      pcVar6 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_resourceNameFromNearbyPayWebImag_026ad478,local_168);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_278[0];
      local_278[0] = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_278[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar3,&local_280,&cf_pay_web);
        _objc_storeStrong(&local_288,&cf_png);
      }
    }
    FUN_00fe415c();
    pcVar3 = local_278[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_bounds_026ca548);
      dVar8 = in_d2;
      local_2d8 = dVar9;
      if ((in_d2 < 1.0) || (dVar8 = in_d3, local_2c0 = in_d2, dStack_2b8 = in_d3, in_d3 < 1.0)) {
        dVar9 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_208[0],PTR_s_size_026cab00);
        dStack_2e8 = dVar9;
        local_2c0 = dVar8;
        dStack_2b8 = dVar9;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2c0,dStack_2b8,local_158,PTR_s_upsertName_kind_pointSize_image__026ad3c0,
                 local_278[0],local_288,local_208[0]);
    }
    _objc_storeStrong(&local_288);
    _objc_storeStrong(&local_280,0);
    _objc_storeStrong(local_278,0);
  }
  _memset(auStack_3d8,0,0x40);
  uVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_518 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_518 != 0) {
    lVar7 = *local_3c8;
    local_520 = 0;
    do {
      do {
        if (*local_3c8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_3c8 - lVar7,uVar2);
        }
        local_398 = *(undefined8 *)(local_3d0 + local_520 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_walkView_visibleIn_depth__026ad480,local_398,local_170,
                   local_178 + 1);
        local_520 = local_520 + 1;
      } while (local_520 < local_518);
      local_518 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d8,auStack_150,0x10)
      ;
      local_520 = 0;
    } while (local_518 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(local_208,0);
  local_17c = 0;
LAB_00fe3e64:
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


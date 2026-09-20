// FUN_001c28d4 @ 001c28d4

void FUN_001c28d4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  ulong local_468;
  ulong local_460;
  ulong local_410;
  ulong local_408;
  undefined *local_3b8;
  undefined *local_398;
  ulong local_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  ulong local_288;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  ulong local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  byte local_189;
  double local_188;
  double local_180;
  char *local_178;
  char *local_170;
  double local_168;
  double local_160;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 0.0;
  local_160 = 0.0;
  local_168 = 0.0;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_menuSizeEnabled_026a0468);
  if (((((ulong)puVar1 & 1) != 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuWidth_026a0470), 0.0 < dVar9)) &&
     (puVar1 = local_148,
     (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488),
     0 < (long)puVar1)) {
    pcVar2 = "MMMenuController";
    _objc_getClass(puVar1);
    local_170 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_sharedMenuController_026a0478);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
      if (((pcVar2 != (char *)0x0) &&
          ((*(code *)PTR__objc_msgSend_02578628)
                     (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuItemWidth__026a0498),
          ((ulong)pcVar2 & 1) != 0)) &&
         (pcVar2 = local_178,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_178,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuItemInnerGap__026a05b0
                   ), ((ulong)pcVar2 & 1) != 0)) {
        local_180 = 16.0;
        dVar10 = 4.0;
        local_168 = 4.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuWidth_026a0470);
        dVar10 = dVar10 - local_180;
        puVar1 = local_148;
        local_188 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488);
        dVar9 = local_168 * (double)(long)(puVar1 + -1);
        puVar1 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488);
        local_160 = (dVar10 - dVar9) / (double)(long)puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,local_178,PTR_s_setMenuItemWidth__026a0498);
        dVar9 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setMenuItemInnerGap__026a05b0);
      }
      _objc_storeStrong(&local_178,0);
    }
  }
  uVar3 = local_130;
  (*DAT_028c8c30)(local_130,local_138,local_140);
  local_189 = (byte)uVar3;
  FUN_001d6008();
  local_198 = 0;
  local_1a0 = 0;
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuTextColorEnabled_026a0510);
  if (((ulong)puVar1 & 1) != 0) {
    local_1a9 = 0;
    local_1b9 = 0;
    local_398 = local_148;
    if ((local_189 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuTextColorLight_026a0520);
      _objc_retainAutoreleasedReturnValue();
      local_1b9 = 1;
      local_1b8 = local_398;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuTextColorDark_026a0518);
      _objc_retainAutoreleasedReturnValue();
      local_1a9 = 1;
      local_1a8 = local_398;
    }
    _objc_storeStrong(&local_198,local_398);
    if ((local_1b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    if ((local_1a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1a8);
    }
  }
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuIconColorEnabled_026a0528);
  if (((ulong)puVar1 & 1) != 0) {
    local_1c9 = 0;
    local_1d9 = 0;
    local_3b8 = local_148;
    if ((local_189 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuIconColorLight_026a0538);
      _objc_retainAutoreleasedReturnValue();
      local_1d9 = 1;
      local_1d8 = local_3b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuIconColorDark_026a0530);
      _objc_retainAutoreleasedReturnValue();
      local_1c9 = 1;
      local_1c8 = local_3b8;
    }
    _objc_storeStrong(&local_1a0,local_3b8);
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    if ((local_1c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
  }
  uVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_valueForKey__0269d128,&cf_menuItemViews);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = uVar3;
  if (uVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = local_1e8, (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0),
       uVar3 != 0)) {
      _memset(auStack_230,0,0x40);
      uVar3 = local_1e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_408 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,0x10);
      if (local_408 != 0) {
        lVar5 = *local_220;
        local_410 = 0;
        do {
          do {
            if (*local_220 - lVar5 != 0) {
              _objc_enumerationMutation(*local_220 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_228 + local_410 * 8);
            puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1f0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar6 & 1) != 0) {
              _memset(auStack_278,0,0x40);
              uVar6 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_460 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_460 != 0) {
                lVar7 = *local_268;
                local_468 = 0;
                do {
                  do {
                    if (*local_268 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_268 - lVar7,uVar6);
                    }
                    uVar8 = *(ulong *)(local_270 + local_468 * 8);
                    local_238 = uVar8;
                    if (local_198 != 0) {
                      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
                      uVar4 = local_238;
                      if ((uVar8 & 1) != 0) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_280 = uVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar4,PTR_s_setTextColor__026caa98,local_198);
                        _objc_storeStrong(&local_280,0);
                      }
                    }
                    uVar8 = local_238;
                    if (local_1a0 != 0) {
                      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
                      uVar4 = local_238;
                      if ((uVar8 & 1) != 0) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_288 = uVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar4,PTR_s_setTintColor__026caab0,local_1a0);
                        uVar8 = local_288;
                        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_image_026ca678);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_release_02578630)();
                        if (uVar8 != 0) {
                          uVar8 = local_288;
                          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_image_026ca678);
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar8;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setImage__026ca978);
                          (*(code *)PTR__objc_release_02578630)(uVar4);
                          (*(code *)PTR__objc_release_02578630)(uVar8);
                        }
                        _objc_storeStrong(&local_288,0);
                      }
                    }
                    local_468 = local_468 + 1;
                  } while (local_468 < local_460);
                  local_460 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                             auStack_128,0x10);
                  local_468 = 0;
                } while (local_460 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            local_410 = local_410 + 1;
          } while (local_410 < local_408);
          local_408 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          local_410 = 0;
        } while (local_408 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuSizeEnabled_026a0468);
  if ((((((ulong)puVar1 & 1) != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuWidth_026a0470), 0.0 < dVar9)) &&
      (puVar1 = local_148,
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488),
      uVar3 = local_1e8, 0 < (long)puVar1)) && ((0.0 < local_160 && (local_1e8 != 0)))) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = local_1e8, (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0),
       uVar3 != 0)) {
      local_290 = 0x4030000000000000;
      local_298 = 0x4020000000000000;
      for (local_2a0 = 0; uVar3 = local_2a0, uVar6 = local_1e8,
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0), uVar3 < uVar6;
          local_2a0 = local_2a0 + 1) {
        uVar3 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_2a0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_2a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488);
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_menuMaxCountPerLine_026a0488);
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setFrame__026ca960);
        }
        _objc_storeStrong(&local_2a8,0);
      }
    }
  }
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


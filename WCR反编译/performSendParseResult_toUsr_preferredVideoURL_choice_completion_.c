// performSendParseResult:toUsr:preferredVideoURL:choice:completion: @ 0100df90

/* Function Stack Size: 0x38 bytes */

void WCRefineLinkMediaSender::performSendParseResult_toUsr_preferredVideoURL_choice_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,ID param_7
               ,undefined4 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  dispatch_queue_t pdVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint local_3e4;
  uint local_3cc;
  ulong local_3a0;
  ulong local_398;
  ulong local_360;
  ulong local_358;
  byte local_32c;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  ID local_290;
  byte local_288;
  byte local_287;
  byte local_286;
  byte local_285;
  dispatch_queue_t local_280;
  byte local_271;
  ulong local_270;
  byte local_261;
  long local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  long local_218;
  undefined *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  long local_1c0;
  byte local_1b1;
  ulong local_1b0;
  byte local_1a6;
  byte local_1a5;
  undefined4 local_1a4;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined8 local_180;
  ID local_178;
  undefined1 local_16b;
  byte local_16a;
  byte local_169;
  undefined *local_168;
  undefined8 local_160;
  long_long local_158;
  long local_150;
  undefined8 local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_5);
  local_160 = 0;
  local_158 = param_6;
  _objc_storeStrong(&local_160,param_7);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_169 = local_158 == 1;
  local_16a = local_158 == 2;
  local_16b = local_158 == 3;
  local_168 = puVar5;
  if ((bool)local_16b) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_startProgressToast_026ad9d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,local_130,PTR_s_updateProgressToast__026ad910);
    IVar4 = local_130;
    uVar6 = local_140;
    uVar3 = local_148;
    uVar2 = local_160;
    local_1a0 = PTR___NSConcreteStackBlock_02578660;
    local_198 = 0xc2000000;
    local_194 = 0;
    local_190 = FUN_0100eb60;
    local_188 = &DAT_02584190;
    local_178 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_sendLinkCardForResult_toUsr_comp_026ada00,uVar6,uVar3,&local_1a0);
    local_1a4 = 1;
    _objc_storeStrong(&local_180,0);
  }
  else {
    local_32c = 0;
    if ((!(bool)local_169) && (local_32c = 0, !(bool)local_16a)) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_autoParseLinkSendVideoEnabled_026adad8);
      local_32c = (byte)puVar5;
    }
    local_1a5 = local_32c & 1;
    uVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isImageNote_026ad960);
    local_1b1 = 0;
    bVar1 = false;
    if ((uVar6 & 1) != 0) {
      uVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      local_1b1 = 1;
      local_1b0 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar6 != 0;
    }
    if ((local_1b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b0);
    }
    local_1a6 = bVar1;
    if (bVar1) {
      local_1a5 = 0;
      local_1c0 = 0;
      _memset(auStack_208,0,0x40);
      uVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_livePhotoVideoURLs_026adb00);
      _objc_retainAutoreleasedReturnValue();
      local_358 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_358 != 0) {
        lVar9 = *local_1f8;
        local_360 = 0;
        do {
          do {
            if (*local_1f8 - lVar9 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar9,uVar6);
            }
            lVar10 = *(long *)(local_200 + local_360 * 8);
            local_1c8 = lVar10;
            (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
            if (lVar10 != 0) {
              local_1c0 = local_1c0 + 1;
            }
            local_360 = local_360 + 1;
          } while (local_360 < local_358);
          local_358 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,
                     0x10);
          local_360 = 0;
        } while (local_358 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar5;
    if ((local_1a6 & 1) == 0) {
      lVar9 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
      if (lVar9 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_150);
      }
      _memset(auStack_258,0,0x40);
      uVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_videoVariants_026ada88);
      _objc_retainAutoreleasedReturnValue();
      local_398 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_398 != 0) {
        lVar9 = *local_248;
        local_3a0 = 0;
        do {
          do {
            if (*local_248 - lVar9 != 0) {
              _objc_enumerationMutation(*local_248 - lVar9,uVar6);
            }
            lVar11 = *(long *)(local_250 + local_3a0 * 8);
            local_218 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_url_026a5a28);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar11);
            if (lVar10 != 0) {
              lVar10 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              local_261 = 0;
              local_3cc = 0;
              if (lVar10 != 0) {
                lVar10 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_url_026a5a28);
                _objc_retainAutoreleasedReturnValue();
                local_261 = 1;
                local_260 = lVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_3cc = (uint)lVar10;
              }
              if ((local_261 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_260);
              }
              puVar5 = local_210;
              if ((local_3cc & 1) == 0) {
                lVar10 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_url_026a5a28);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(lVar10);
              }
            }
            local_3a0 = local_3a0 + 1;
          } while (local_3a0 < local_398);
          local_398 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128,
                     0x10);
          local_3a0 = 0;
        } while (local_398 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar5 = local_210;
      local_271 = 0;
      local_3e4 = 0;
      if (uVar7 != 0) {
        uVar7 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        local_271 = 1;
        local_270 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8);
        local_3e4 = (uint)puVar5 ^ 1;
      }
      if ((local_271 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_270);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      puVar5 = local_210;
      if ((local_3e4 & 1) != 0) {
        uVar6 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_startProgressToast_026ad9d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c90,local_130,PTR_s_updateProgressToast__026ad910);
    pdVar8 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_210;
    local_2d8 = PTR___NSConcreteStackBlock_02578660;
    local_2d0 = 0xc2000000;
    local_2cc = 0;
    local_2c8 = FUN_0100ec28;
    local_2c0 = &DAT_025844d0;
    local_288 = local_1a5 & 1;
    local_280 = pdVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = local_140;
    local_2b8 = puVar5;
    local_290 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_168;
    local_2b0 = uVar6;
    local_287 = local_169 & 1;
    local_286 = local_16a & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_148;
    local_2a8 = puVar5;
    local_285 = local_1a6 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_160;
    local_2a0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = uVar2;
    _dispatch_async(pdVar8,&local_2d8);
    _objc_storeStrong(&local_298);
    _objc_storeStrong(&local_2a0,0);
    _objc_storeStrong(&local_2a8,0);
    _objc_storeStrong(&local_2b0,0);
    _objc_storeStrong(&local_2b8,0);
    _objc_storeStrong(&local_280,0);
    _objc_storeStrong(&local_210,0);
    local_1a4 = 0;
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


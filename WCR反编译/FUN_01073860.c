// FUN_01073860 @ 01073860

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01073860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_348;
  undefined *local_338;
  undefined *local_328;
  undefined *local_318;
  undefined *local_308;
  undefined *local_2f8;
  undefined *local_2e8;
  undefined *local_2d8;
  undefined *local_268;
  undefined *local_260;
  undefined *local_210;
  undefined *local_200;
  undefined *local_1f0;
  undefined *local_1e0;
  undefined *local_1d0;
  undefined *local_1c0;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined *local_190;
  undefined *local_180;
  undefined *local_170;
  undefined *local_160;
  undefined *local_150;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  int local_124;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar8 = local_b8;
  local_c8 = param_1;
  if (local_c0 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar8 & 1) != 0) {
      puVar1 = PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,local_b8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_d0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) != 0) {
        _memset(auStack_118,0,0x40);
        puVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reverseObjectEnumerator_0269d220);
        _objc_retainAutoreleasedReturnValue();
        local_260 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_260 != (undefined *)0x0) {
          lVar7 = *local_108;
          local_268 = (undefined *)0x0;
          do {
            do {
              if (*local_108 - lVar7 != 0) {
                _objc_enumerationMutation(*local_108 - lVar7,puVar1);
              }
              uVar8 = *(ulong *)(local_110 + (long)local_268 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_d8 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((uVar8 & 1) != 0) &&
                 (uVar3 = local_d8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
                 uVar8 = local_d8, 199 < uVar3)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_120 = uVar8;
                lVar4 = *(long *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
                if ((lVar4 == 0) ||
                   (((*(byte *)(param_1 + 0x48) & 1) == 0 ||
                    (uVar8 = local_120,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_120,PTR_s_containsString__0269d0b0,
                               *(undefined8 *)(param_1 + 0x20)), (uVar8 & 1) != 0)))) {
                  uVar8 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_containsString__0269d0b0,&cf_download_addr);
                  if ((((uVar8 & 1) == 0) &&
                      (((uVar8 = local_120,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_120,PTR_s_containsString__0269d0b0,&cf_downloadAddr),
                        (uVar8 & 1) == 0 &&
                        (uVar8 = local_120,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_120,PTR_s_containsString__0269d0b0,&cf_bit_rate),
                        (uVar8 & 1) == 0)) &&
                       (uVar8 = local_120,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_120,PTR_s_containsString__0269d0b0,&cf_bitRate),
                       (uVar8 & 1) == 0)))) &&
                     (((uVar8 = local_120,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_120,PTR_s_containsString__0269d0b0,&cf_download_url_list),
                       (uVar8 & 1) == 0 &&
                       (uVar8 = local_120,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_120,PTR_s_containsString__0269d0b0,&cf__images_),
                       (uVar8 & 1) == 0)) &&
                      ((uVar8 = local_120,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_120,PTR_s_containsString__0269d0b0,&cf_image_post),
                       (uVar8 & 1) == 0 &&
                       (uVar8 = local_120,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_120,PTR_s_containsString__0269d0b0,&cf_douyinpic),
                       (uVar8 & 1) == 0)))))) {
                    local_124 = 3;
                  }
                  else {
                    puVar2 = PTR_WCRefineLinkParser_026ce168;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,
                               local_120);
                    _objc_retainAutoreleasedReturnValue();
                    local_130 = puVar2;
                    if (puVar2 == (undefined *)0x0) {
                      local_124 = 3;
                    }
                    else {
                      puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
                      local_138 = puVar2;
                      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,1);
                      uVar5 = *(undefined8 *)(param_1 + 0x28);
                      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_sourceURL_026ad980);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSourceURL__026addf0);
                      (*(code *)PTR__objc_release_02578630)(uVar5);
                      uVar5 = *(undefined8 *)(param_1 + 0x28);
                      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_resolvedURL_026ad978);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_138,PTR_s_setResolvedURL__026addf8);
                      (*(code *)PTR__objc_release_02578630)(uVar5);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineLinkParser_026ce168,
                                 PTR_s_fillDouyinResult_fromJSON__026adfb8,local_138,local_130);
                      puVar6 = local_138;
                      puVar2 = PTR_WCRefineLinkParser_026ce168;
                      uVar5 = *(undefined8 *)(param_1 + 0x30);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar5,PTR_s_finishOnCardPlayback_026ae1b0);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar2,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,puVar6,uVar5
                                );
                      if (((ulong)puVar2 & 1) == 0) {
                        local_124 = 3;
                      }
                      else {
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_videoURL_026ad970);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setVideoURL__026adbb0);
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_videoVariants_026ada88);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setVideoVariants__026add50)
                        ;
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_browserPlaybackURL_026ad968);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_2d8 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2d8,PTR_s_browserPlaybackURL_026ad968);
                          _objc_retainAutoreleasedReturnValue();
                          local_150 = local_2d8;
                        }
                        else {
                          local_2d8 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_138,PTR_s_browserPlaybackURL_026ad968);
                          _objc_retainAutoreleasedReturnValue();
                          local_140 = local_2d8;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),
                                   PTR_s_setBrowserPlaybackURL__026add58,local_2d8);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_150);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_140);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_coverURL_026ad9a8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_2e8 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_coverURL_026ad9a8);
                          _objc_retainAutoreleasedReturnValue();
                          local_170 = local_2e8;
                        }
                        else {
                          local_2e8 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_coverURL_026ad9a8);
                          _objc_retainAutoreleasedReturnValue();
                          local_160 = local_2e8;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setCoverURL__026add60,
                                   local_2e8);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_170);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_160);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_audioURL_026adb18);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_2f8 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_audioURL_026adb18);
                          _objc_retainAutoreleasedReturnValue();
                          local_190 = local_2f8;
                        }
                        else {
                          local_2f8 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_audioURL_026adb18);
                          _objc_retainAutoreleasedReturnValue();
                          local_180 = local_2f8;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setAudioURL__026addb0,
                                   local_2f8);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_190);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_180);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_title_0269d250);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_308 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_title_0269d250);
                          _objc_retainAutoreleasedReturnValue();
                          local_1b0 = local_308;
                        }
                        else {
                          local_308 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_title_0269d250);
                          _objc_retainAutoreleasedReturnValue();
                          local_1a0 = local_308;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setTitle__0269cef0,
                                   local_308);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_1b0);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_1a0);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_author_026ad9a0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_318 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_author_026ad9a0);
                          _objc_retainAutoreleasedReturnValue();
                          local_1d0 = local_318;
                        }
                        else {
                          local_318 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_author_026ad9a0);
                          _objc_retainAutoreleasedReturnValue();
                          local_1c0 = local_318;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setAuthor__026adda8,
                                   local_318);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_1d0);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_1c0);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_imageURLs_026adac8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_328 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_imageURLs_026adac8);
                          _objc_retainAutoreleasedReturnValue();
                          local_1f0 = local_328;
                        }
                        else {
                          local_328 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_imageURLs_026adac8);
                          _objc_retainAutoreleasedReturnValue();
                          local_1e0 = local_328;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setImageURLs__026add68,
                                   local_328);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_1f0);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_1e0);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_imageURLs_026adac8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        if (puVar6 == (undefined *)0x0) {
                          local_338 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_338,PTR_s_livePhotoVideoURLs_026adb00);
                          _objc_retainAutoreleasedReturnValue();
                          local_210 = local_338;
                        }
                        else {
                          local_338 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_138,PTR_s_livePhotoVideoURLs_026adb00);
                          _objc_retainAutoreleasedReturnValue();
                          local_200 = local_338;
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),
                                   PTR_s_setLivePhotoVideoURLs__026add70,local_338);
                        if (puVar6 == (undefined *)0x0) {
                          (*(code *)PTR__objc_release_02578630)(local_210);
                        }
                        else {
                          (*(code *)PTR__objc_release_02578630)(local_200);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isImageNote_026ad960);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setIsImageNote__026adad0,
                                   puVar2);
                        local_348 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_durationSeconds_026ada90);
                        if (local_348 == (undefined *)0x0) {
                          local_348 = *(undefined **)(param_1 + 0x28);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_348,PTR_s_durationSeconds_026ada90);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),
                                   PTR_s_setDurationSeconds__026add90,local_348);
                        puVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_videoNeedsAudioMux_026adb10);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (*(undefined8 *)(param_1 + 0x28),
                                   PTR_s_setVideoNeedsAudioMux__026adeb8,puVar2);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineLinkParser_026ce168,
                                   PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
                                   *(undefined8 *)(param_1 + 0x28));
                        local_124 = 2;
                      }
                      _objc_storeStrong(&local_138,0);
                    }
                    _objc_storeStrong(&local_130,0);
                  }
                }
                else {
                  local_124 = 3;
                }
                _objc_storeStrong(&local_120,0);
                if (local_124 != 3) goto LAB_01074af0;
              }
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8
                       ,0x10);
            local_268 = (undefined *)0x0;
          } while (local_260 != (undefined *)0x0);
        }
        local_124 = 0;
LAB_01074af0:
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_d0,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_finishDouyinPollResult_payload_i_026ae1b8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(byte *)(param_1 + 0x48) & 1,*(undefined8 *)(param_1 + 0x40));
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


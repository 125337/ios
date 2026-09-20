// copyLinkParseResult: @ 010300b8

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::copyLinkParseResult_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1a0;
  ulong local_188;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == 0) {
    local_b0 = (undefined *)0x0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
    uVar2 = local_c8;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_platform_026ad958);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setPlatform__026adde8,uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_sourceURL_026ad980);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setSourceURL__026addf0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_resolvedURL_026ad978);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setResolvedURL__026addf8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_author_026ad9a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setAuthor__026adda8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_browserPlaybackURL_026ad968);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setBrowserPlaybackURL__026add58);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_audioURL_026adb18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setAudioURL__026addb0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_coverURL_026ad9a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setCoverURL__026add60);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_imageURLs_026adac8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_188 = uVar3;
    if (uVar3 == 0) {
      local_188 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setImageURLs__026add68,local_188);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_livePhotoVideoURLs_026adb00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1a0 = uVar3;
    if (uVar3 == 0) {
      local_1a0 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setLivePhotoVideoURLs__026add70,local_1a0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_imagesFromPageScan_026ade90);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setImagesFromPageScan__026adeb0,uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isImageNote_026ad960);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setIsImageNote__026adad0,uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoNeedsAudioMux_026adb10);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setVideoNeedsAudioMux__026adeb8,uVar2);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_durationSeconds_026ada90);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setDurationSeconds__026add90,uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    _memset(auStack_128,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c0 != 0) {
      lVar9 = *local_118;
      local_1c8 = 0;
      do {
        do {
          if (*local_118 - lVar9 != 0) {
            _objc_enumerationMutation(*local_118 - lVar9,uVar2);
          }
          IVar8 = local_b8;
          uVar10 = *(undefined8 *)(local_120 + local_1c8 * 8);
          local_e8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_url_026a5a28);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_label_026adba8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_width_026a12d0);
          uVar6 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_height_026a12d8);
          uVar7 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_dataSize_026adaa8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar8,PTR_s_variantWithURL_label_width_heigh_026addc8,uVar10,uVar4,uVar5,uVar6,
                     uVar7);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar8;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isOriginalNoWatermark_026adec0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_setIsOriginalNoWatermark__026adec8,uVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_appendUniqueVariant_to__026addd0,local_130,local_e0);
          _objc_storeStrong(&local_130,0);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setVideoVariants__026add50,local_e0);
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_cc = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


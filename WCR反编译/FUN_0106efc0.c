// FUN_0106efc0 @ 0106efc0

void FUN_0106efc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined *local_370;
  undefined *local_368;
  undefined *local_2f8;
  undefined *local_2e8;
  undefined *local_2d8;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b8;
  uint local_294;
  undefined *local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  undefined *local_228;
  undefined *local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  bool local_1a9;
  undefined *local_1a8;
  byte local_199;
  undefined *local_198;
  bool local_189;
  undefined *local_188;
  bool local_179;
  undefined *local_178;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  int local_14c;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  uVar14 = local_138;
  local_148 = param_1;
  if (local_140 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar14 & 1) != 0) {
      puVar2 = PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,local_138);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_158 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_161 = 0;
      local_294 = 1;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok);
        _objc_retainAutoreleasedReturnValue();
        local_161 = 1;
        local_160 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_294 = (uint)puVar2 ^ 1;
      }
      if ((local_161 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      if ((local_294 & 1) == 0) {
        puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,2);
        pcVar4 = *(cfstringStruct **)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_2b8 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setSourceURL__026addf0,local_2b8);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = *(cfstringStruct **)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_pageURL_026ae148);
        _objc_retainAutoreleasedReturnValue();
        local_2c8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_2c8 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setResolvedURL__026addf8,local_2c8);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_179 = false;
        bVar1 = ((ulong)puVar5 & 1) == 0;
        if (bVar1) {
          local_2d8 = (undefined *)0x0;
        }
        else {
          local_2d8 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_178 = local_2d8;
        }
        local_179 = !bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setTitle__0269cef0,local_2d8);
        if ((local_179 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_189 = false;
        bVar1 = ((ulong)puVar5 & 1) == 0;
        if (bVar1) {
          local_2e8 = (undefined *)0x0;
        }
        else {
          local_2e8 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
          _objc_retainAutoreleasedReturnValue();
          local_188 = local_2e8;
        }
        local_189 = !bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setAuthor__026adda8,local_2e8);
        if ((local_189 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_2f8 = PTR_WCRefineLinkParser_026ce168;
        local_199 = 0;
        local_1a9 = false;
        bVar1 = ((ulong)puVar5 & 1) == 0;
        if (bVar1) {
          local_2f8 = (undefined *)0x0;
        }
        else {
          puVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          local_199 = 1;
          local_198 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_preferCleanMediaURL__026add40);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = local_2f8;
        }
        local_1a9 = !bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setVideoURL__026adbb0,local_2f8);
        if ((local_1a9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1a8);
        }
        if ((local_199 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_198);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineLinkParser_026ce168;
        if (((ulong)puVar5 & 1) != 0) {
          puVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_preferCleanMediaURL__026add40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setCoverURL__026add60);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_1c1 = 0;
        bVar1 = false;
        if (((ulong)puVar2 & 1) != 0) {
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          local_1c1 = 1;
          local_1c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = puVar2 == (undefined *)0x0;
        }
        if ((local_1c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c0);
        }
        if (bVar1) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = puVar2;
          _memset(auStack_218,0,0x40);
          puVar2 = local_1b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_368 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                     0x10);
          if (local_368 != (undefined *)0x0) {
            lVar13 = *local_208;
            local_370 = (undefined *)0x0;
            do {
              do {
                if (*local_208 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_208 - lVar13,puVar2);
                }
                uVar14 = *(ulong *)(local_210 + (long)local_370 * 8);
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1d8 = uVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar3);
                if (((uVar14 & 1) != 0) &&
                   (uVar14 = local_1d8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0),
                   puVar3 = local_1d0, uVar14 != 0)) {
                  puVar5 = PTR_WCRefineLinkParser_026ce168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineLinkParser_026ce168,PTR_s_preferCleanMediaURL__026add40,
                             local_1d8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                }
                local_370 = local_370 + 1;
              } while (local_370 < local_368);
              local_368 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                         auStack_a8,0x10);
              local_370 = (undefined *)0x0;
            } while (local_368 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setImageURLs__026add68,local_1d0);
          puVar2 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setIsImageNote__026adad0,1);
          }
          _objc_storeStrong(&local_1d0,0);
        }
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_variants);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_220 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar2;
          _memset(auStack_270,0,0x40);
          puVar2 = local_220;
          (*(code *)PTR__objc_retain_02578638)();
          local_3c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          if (local_3c8 != (undefined *)0x0) {
            lVar13 = *local_260;
            local_3d0 = (undefined *)0x0;
            do {
              do {
                if (*local_260 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_260 - lVar13,puVar2);
                }
                uVar14 = *(ulong *)(local_268 + (long)local_3d0 * 8);
                puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_230 = uVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar3);
                puVar3 = PTR_WCRefineLinkParser_026ce168;
                if ((uVar14 & 1) != 0) {
                  uVar14 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  uVar6 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_label);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_stringWithFormat__0269cca8,&cf___);
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  uVar9 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  uVar11 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_dataSize);
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_variantWithURL_label_width_heigh_026addc8,uVar14,puVar5,
                             uVar8,uVar10,uVar12);
                  _objc_retainAutoreleasedReturnValue();
                  local_278 = puVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar11);
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_release_02578630)(uVar6);
                  (*(code *)PTR__objc_release_02578630)(uVar14);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineLinkParser_026ce168,PTR_s_appendUniqueVariant_to__026addd0,
                             local_278,local_228);
                  _objc_storeStrong(&local_278,0);
                }
                local_3d0 = local_3d0 + 1;
              } while (local_3d0 < local_3c8);
              local_3c8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                         auStack_128,0x10);
              local_3d0 = (undefined *)0x0;
            } while (local_3c8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_228,PTR_s_sortUsingComparator__0269d168,
                     &PTR___NSConcreteGlobalBlock_02584cb0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_setVideoVariants__026add50,local_228);
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = false;
          if (puVar3 == (undefined *)0x0) {
            puVar3 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0);
            bVar1 = puVar3 != (undefined *)0x0;
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (bVar1) {
            puVar2 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setVideoURL__026adbb0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_228,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParser_026ce168,PTR_s_normalizeVideoVersusCover__026adff8,
                   local_170);
        puVar2 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_hasMedia_026ada58);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_finishWithResult_error__026adfc0,
                     local_170,0);
        }
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_170,0);
        local_14c = 0;
      }
      else {
        local_14c = 1;
      }
      _objc_storeStrong(&local_158,0);
      if (local_14c == 0) {
        local_14c = 0;
      }
      goto LAB_01070230;
    }
  }
  local_14c = 1;
LAB_01070230:
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


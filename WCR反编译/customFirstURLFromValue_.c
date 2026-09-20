// customFirstURLFromValue: @ 010254f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::customFirstURLFromValue_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined *local_338;
  undefined *local_330;
  undefined *local_2e0;
  undefined *local_2d8;
  ID local_2a8;
  ID local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined *local_230;
  undefined *local_228;
  ID local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  ID local_1d0;
  uint local_1c8;
  undefined1 local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  SEL local_1b0;
  ID local_1a8;
  ID local_1a0;
  undefined1 auStack_198 [128];
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = (undefined *)0x0;
  local_1b0 = param_2;
  local_1a8 = param_1;
  _objc_storeStrong(&local_1b8,param_3);
  puVar4 = local_1b8;
  local_1c1 = 0;
  bVar2 = true;
  uVar1 = local_1b8 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar4 == puVar3;
    local_1c1 = uVar1;
    local_1c0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_1c1;
  }
  local_1c1 = uVar1;
  puVar4 = local_1b8;
  if (bVar2) {
    local_1a0 = 0;
    local_1c8 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_1b8;
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      puVar4 = local_1b8;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar3 = local_1b8;
        if (((ulong)puVar4 & 1) == 0) {
          local_1a0 = 0;
          local_1c8 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_228 = puVar3;
          local_118 = &cf_url;
          local_110 = &cf_src;
          local_108 = &cf_videoUrl;
          local_100 = &cf_video_url;
          local_f8 = &cf_imageUrl;
          local_f0 = &cf_image_url;
          local_e8 = &cf_play_url;
          local_e0 = &cf_playUrl;
          local_d8 = &cf_play_addr;
          local_d0 = &cf_playAddr;
          local_c8 = &cf_download_url;
          local_c0 = &cf_downloadUrl;
          local_b8 = &cf_url_list;
          local_b0 = &cf_urlList;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_118,0xe);
          _objc_retainAutoreleasedReturnValue();
          local_230 = puVar4;
          _memset(auStack_278,0,0x40);
          puVar4 = local_230;
          (*(code *)PTR__objc_retain_02578638)();
          local_330 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_198,
                     0x10);
          if (local_330 != (undefined *)0x0) {
            lVar7 = *local_268;
            local_338 = (undefined *)0x0;
            do {
              do {
                if (*local_268 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_268 - lVar7,puVar4);
                }
                IVar5 = local_1a8;
                local_238 = *(undefined8 *)(local_270 + (long)local_338 * 8);
                puVar3 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_objectForKeyedSubscript__0269d098,local_238);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_customFirstURLFromValue__026add98)
                ;
                _objc_retainAutoreleasedReturnValue();
                local_280 = IVar5;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                IVar6 = local_280;
                (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
                IVar5 = local_280;
                bVar2 = IVar6 != 0;
                if (bVar2) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1a0 = IVar5;
                }
                local_1c8 = (uint)bVar2;
                _objc_storeStrong(bVar2,&local_280,0);
                if (local_1c8 != 0) goto LAB_01025c6c;
                local_338 = local_338 + 1;
              } while (local_338 < local_330);
              local_330 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                         auStack_198,0x10);
              local_338 = (undefined *)0x0;
            } while (local_330 != (undefined *)0x0);
          }
          local_1c8 = 0;
LAB_01025c6c:
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (local_1c8 == 0) {
            local_1a0 = 0;
            local_1c8 = 1;
          }
          _objc_storeStrong(&local_230);
          _objc_storeStrong(&local_228,0);
        }
      }
      else {
        _memset(auStack_218,0,0x40);
        puVar4 = local_1b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_2d8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                   0x10);
        if (local_2d8 != (undefined *)0x0) {
          lVar7 = *local_208;
          local_2e0 = (undefined *)0x0;
          do {
            do {
              if (*local_208 - lVar7 != 0) {
                _objc_enumerationMutation(*local_208 - lVar7,puVar4);
              }
              local_1d8 = *(undefined8 *)(local_210 + (long)local_2e0 * 8);
              IVar6 = local_1a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,PTR_s_customFirstURLFromValue__026add98,local_1d8);
              _objc_retainAutoreleasedReturnValue();
              local_220 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
              IVar5 = local_220;
              bVar2 = IVar6 != 0;
              if (bVar2) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1a0 = IVar5;
              }
              local_1c8 = (uint)bVar2;
              _objc_storeStrong(bVar2,&local_220,0);
              if (local_1c8 != 0) goto LAB_010258f4;
              local_2e0 = local_2e0 + 1;
            } while (local_2e0 < local_2d8);
            local_2d8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8
                       ,0x10);
            local_2e0 = (undefined *)0x0;
          } while (local_2d8 != (undefined *)0x0);
        }
        local_1c8 = 0;
LAB_010258f4:
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_1c8 == 0) {
          local_1a0 = 0;
          local_1c8 = 1;
        }
      }
    }
    else {
      IVar5 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_unescapeJSONString__026adcb8,local_1b8);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_hasPrefix__0269d320,&cf_http___);
      if (((IVar5 & 1) == 0) &&
         (IVar5 = local_1d0,
         (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf_https___),
         (IVar5 & 1) == 0)) {
        local_2a8 = 0;
      }
      else {
        local_2a8 = local_1d0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_2a8;
      local_1c8 = 1;
      _objc_storeStrong(&local_1d0,0);
    }
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_1a0;
}


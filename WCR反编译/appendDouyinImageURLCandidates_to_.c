// appendDouyinImageURLCandidates:to: @ 0103697c

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::appendDouyinImageURLCandidates_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_2d8;
  undefined *local_2d0;
  ulong local_288;
  ulong local_280;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  ID local_198;
  undefined4 local_18c;
  ulong local_188;
  ulong local_180;
  SEL local_178;
  ID local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = 0;
  local_178 = param_2;
  local_170 = param_1;
  _objc_storeStrong(&local_180,param_3);
  local_188 = 0;
  _objc_storeStrong(&local_188,param_4);
  uVar2 = local_180;
  if (local_188 == 0) {
    local_18c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar4 = local_170;
    uVar5 = local_180;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_180;
      if ((uVar5 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar5 = local_180;
        if ((uVar2 & 1) == 0) {
          local_18c = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = uVar5;
          _memset(auStack_230,0,0x40);
          local_168 = &cf_download_url_list;
          local_160 = &cf_downloadUrlList;
          local_158 = &cf_url_list;
          local_150 = &cf_urlList;
          local_148 = &cf_urls;
          local_140 = &cf_url;
          local_138 = &cf_download_url;
          local_130 = &cf_downloadUrl;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_168,8);
          _objc_retainAutoreleasedReturnValue();
          local_2d0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2d0 != (undefined *)0x0) {
            lVar6 = *local_220;
            local_2d8 = (undefined *)0x0;
            do {
              do {
                if (*local_220 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_220 - lVar6,puVar1);
                }
                local_1f0 = *(undefined8 *)(local_228 + (long)local_2d8 * 8);
                uVar2 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,local_1f0);
                _objc_retainAutoreleasedReturnValue();
                local_238 = uVar2;
                if (uVar2 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_appendDouyinImageURLCandidates_t_026adf30,uVar2,
                             local_188);
                }
                _objc_storeStrong(&local_238,0);
                local_2d8 = local_2d8 + 1;
              } while (local_2d8 < local_2d0);
              local_2d0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_128,0x10);
              local_2d8 = (undefined *)0x0;
            } while (local_2d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_1e8,0);
          local_18c = 0;
        }
      }
      else {
        _memset(auStack_1e0,0,0x40);
        uVar2 = local_180;
        (*(code *)PTR__objc_retain_02578638)();
        local_280 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10
                  );
        if (local_280 != 0) {
          lVar6 = *local_1d0;
          local_288 = 0;
          do {
            do {
              if (*local_1d0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1d0 - lVar6,uVar2);
              }
              local_1a0 = *(undefined8 *)(local_1d8 + local_288 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_appendDouyinImageURLCandidates_t_026adf30,local_1a0,
                         local_188);
              local_288 = local_288 + 1;
            } while (local_288 < local_280);
            local_280 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,
                       0x10);
            local_288 = 0;
          } while (local_280 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_18c = 1;
      }
    }
    else {
      IVar3 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_unescapeJSONString__026adcb8,local_180);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_preferCleanMediaURL__026add40);
      _objc_retainAutoreleasedReturnValue();
      local_198 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar4 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_hasPrefix__0269d320,&cf_http);
      if (((IVar4 & 1) != 0) &&
         (uVar2 = local_188,
         (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_containsObject__0269cbb8,local_198),
         (uVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_addObject__0269d180,local_198);
      }
      local_18c = 1;
      _objc_storeStrong(&local_198,0);
    }
  }
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


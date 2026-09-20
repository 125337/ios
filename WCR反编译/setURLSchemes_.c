// setURLSchemes: @ 0161558c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setURLSchemes_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  int local_2c4;
  cfstringStruct *local_2b0;
  cfstringStruct *local_288;
  cfstringStruct *local_260;
  ulong local_228;
  ulong local_220;
  cfstringStruct *local_1e8;
  bool local_1d9;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  bool local_1c1;
  cfstringStruct *local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined4 local_190;
  bool local_189;
  cfstringStruct *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  undefined *local_108;
  ulong local_100;
  SEL local_f8;
  ID local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_100;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar5 & 1) != 0) {
    _memset(auStack_150,0,0x40);
    uVar5 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar8 = *local_140;
      local_228 = 0;
      do {
        do {
          if (*local_140 - lVar8 != 0) {
            _objc_enumerationMutation(*local_140 - lVar8,uVar5);
          }
          pcVar9 = *(cfstringStruct **)(local_148 + local_228 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_110 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar6 = local_110;
          if (((ulong)pcVar9 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_158 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar9 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_169 = 0;
            local_179 = 0;
            local_189 = false;
            bVar1 = ((ulong)pcVar9 & 1) == 0;
            if (bVar1) {
              local_260 = &::cf___;
            }
            else {
              local_260 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              local_169 = 1;
              puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              local_168 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              local_179 = 1;
              local_178 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_260,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_188 = local_260;
            }
            local_189 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = local_260;
            if ((local_189 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            if ((local_179 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_178);
            }
            if ((local_169 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_168);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_190 = 3;
            }
            else {
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar9 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_1a1 = 0;
              local_1b1 = 0;
              local_1c1 = false;
              bVar1 = ((ulong)pcVar9 & 1) == 0;
              if (bVar1) {
                local_288 = &::cf___;
              }
              else {
                local_288 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                _objc_retainAutoreleasedReturnValue();
                local_1a1 = 1;
                puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                local_1a0 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                           PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                _objc_retainAutoreleasedReturnValue();
                local_1b1 = 1;
                local_1b0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_288,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                _objc_retainAutoreleasedReturnValue();
                local_1c0 = local_288;
              }
              local_1c1 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_198 = local_288;
              if ((local_1c1 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              if ((local_1b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b0);
              }
              if ((local_1a1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1a0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar9 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_1d9 = ((ulong)pcVar9 & 1) == 0;
              if (local_1d9) {
                local_2b0 = &cf_icons_outlined_link;
              }
              else {
                local_2b0 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                local_1d8 = local_2b0;
              }
              local_1d9 = !local_1d9;
              (*(code *)PTR__objc_retain_02578638)();
              local_1d0 = local_2b0;
              if (local_1d9) {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
              _objc_retainAutoreleasedReturnValue();
              if (pcVar6 != (cfstringStruct *)0x0) {
                local_1e8 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2c4 = (int)pcVar9;
              }
              else {
                local_2c4 = 1;
              }
              if (pcVar6 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_release_02578630)(local_1e8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              puVar3 = local_108;
              local_e8 = &cf_title;
              pcVar6 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_2d8 = local_160;
              }
              else {
                local_2d8 = local_198;
              }
              local_c8 = local_2d8;
              local_e0 = &cf_url;
              local_c0 = local_160;
              local_d8 = &cf_icon;
              pcVar6 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_2e0 = &cf_icons_outlined_link;
              }
              else {
                local_2e0 = local_1d0;
              }
              local_b8 = local_2e0;
              local_d0 = &cf_enabled;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                         local_2c4 != 0);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_b0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_e8,4);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              _objc_storeStrong(&local_1d0);
              _objc_storeStrong(&local_198,0);
              local_190 = 0;
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
          }
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  IVar2 = local_f0;
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setCurrentValue_forKey__026b18a8,puVar3,&cf_urlSchemes);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


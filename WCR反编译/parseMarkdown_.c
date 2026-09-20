// parseMarkdown: @ 01e86ccc

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoCardView::parseMarkdown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_228;
  ulong local_220;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  byte local_1d9;
  ulong local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  ulong local_180;
  undefined4 local_174;
  undefined *local_170;
  ulong local_168;
  SEL local_160;
  ID local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  ulong local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  ulong local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  local_160 = param_2;
  local_158 = param_1;
  _objc_storeStrong(&local_168,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_168;
  local_170 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
  puVar1 = local_170;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar1;
    local_174 = 1;
  }
  else {
    uVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    _memset(auStack_1c8,0,0x40);
    uVar2 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar6 = *local_1b8;
      local_228 = 0;
      do {
        do {
          if (*local_1b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_1c0 + local_228 * 8);
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_188 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = uVar7;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar7 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
          if (uVar7 == 0) {
            local_174 = 3;
          }
          else {
            local_1d8 = 0;
            local_1d9 = 0;
            uVar7 = local_1d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf____);
            if (((uVar7 & 1) == 0) &&
               (uVar7 = local_1d0,
               (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf____),
               (uVar7 & 1) == 0)) {
              uVar7 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf___x_);
              if (((((uVar7 & 1) != 0) ||
                   (uVar7 = local_1d0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1d0,PTR_s_hasPrefix__0269d320,&cf___x_), (uVar7 & 1) != 0)) ||
                  (uVar7 = local_1d0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_hasPrefix__0269d320,&cf___X_), (uVar7 & 1) != 0)) ||
                 (uVar7 = local_1d0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf___X_)
                 , (uVar7 & 1) != 0)) {
                uVar3 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_substringToIndex__0269d6c0,5);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = local_1d8;
                local_1d8 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar7);
                local_1d9 = 1;
              }
            }
            else {
              uVar3 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_substringToIndex__0269d6c0,5);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = local_1d8;
              local_1d8 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              local_1d9 = 0;
            }
            uVar7 = local_1d0;
            if (local_1d8 == 0) {
              uVar3 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf__);
              uVar7 = local_1d0;
              if ((uVar3 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf__);
                if (((uVar7 & 1) == 0) &&
                   (uVar7 = local_1d0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasPrefix__0269d320,&cf__),
                   puVar1 = local_170, (uVar7 & 1) == 0)) {
                  local_148 = &cf_type;
                  local_138 = &cf_text;
                  local_140 = &cf_text;
                  local_130 = local_1d0;
                  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2
                            );
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  local_174 = 0;
                }
                else {
                  uVar7 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_substringFromIndex__0269d120,1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                             PTR_s_whitespaceCharacterSet_0269d768);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_1f8 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  puVar1 = local_170;
                  local_128 = &cf_type;
                  local_110 = &cf_task;
                  local_120 = &cf_text;
                  local_108 = local_1f8;
                  local_118 = &cf_done;
                  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_100 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_110,&local_128,3
                            );
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  local_174 = 3;
                  _objc_storeStrong(&local_1f8,0);
                }
              }
              else {
                puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                           PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                _objc_retainAutoreleasedReturnValue();
                local_1f0 = uVar7;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                puVar1 = local_170;
                local_f8 = &cf_type;
                local_e8 = &cf_heading;
                local_f0 = &cf_text;
                local_e0 = local_1f0;
                puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_f8,2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                local_174 = 3;
                _objc_storeStrong(&local_1f0,0);
              }
            }
            else {
              uVar3 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_substringFromIndex__0269d120,uVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceCharacterSet_0269d768);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = uVar3;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar1 = local_170;
              local_d8 = &cf_type;
              local_c0 = &cf_task;
              local_d0 = &cf_text;
              local_b8 = local_1e8;
              local_c8 = &cf_done;
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                         local_1d9 & 1);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_b0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              local_174 = 3;
              _objc_storeStrong(&local_1e8,0);
            }
            _objc_storeStrong(&local_1d8,0);
          }
          _objc_storeStrong(&local_1d0,0);
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar1;
    local_174 = 1;
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_150;
}


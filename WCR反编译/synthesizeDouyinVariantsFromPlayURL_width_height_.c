// synthesizeDouyinVariantsFromPlayURL:width:height: @ 0102f2a4

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::synthesizeDouyinVariantsFromPlayURL_width_height_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_1f8;
  long_long local_1d0;
  undefined *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_178;
  long_long local_170;
  long local_168;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  long_long local_f0;
  long_long local_e8;
  undefined8 local_e0;
  SEL local_d8;
  cfstringStruct *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_e0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f0 = param_5;
  local_e8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_normalizeDouyinPlayURL__026adcf8,local_e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_d0;
  local_100 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_douyinVideoIDFromURL__026addd8,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_1080p;
  local_40 = &cf_720p;
  local_38 = &cf_540p;
  local_30 = &cf_360p;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_108 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_108;
  local_110 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    _memset(auStack_158,0,0x40);
    puVar1 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar7 = *local_148;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,puVar1);
          }
          uVar8 = *(ulong *)(local_150 + (long)local_1b0 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          pcVar2 = local_108;
          local_118 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_https___aweme_snssdk_com_aweme_v1_play__video_id____ratio____line_0);
          _objc_retainAutoreleasedReturnValue();
          local_168 = 0;
          uVar5 = local_118;
          local_160 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_1080);
          if ((uVar5 & 1) == 0) {
            uVar5 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_720);
            if ((uVar5 & 1) == 0) {
              uVar5 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_540);
              if ((uVar5 & 1) == 0) {
                uVar5 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_360);
                if ((uVar5 & 1) != 0) {
                  local_168 = 0x168;
                }
              }
              else {
                local_168 = 0x21c;
              }
            }
            else {
              local_168 = 0x2d0;
            }
          }
          else {
            local_168 = 0x438;
          }
          pcVar3 = local_d0;
          if (((local_168 < 1) || ((long)local_f0 < 1)) || ((long)local_e8 < 1)) {
            local_1d0 = local_e8;
          }
          else {
            local_1d0 = (long_long)
                        (((double)(long)local_e8 * (double)local_168) / (double)(long)local_f0);
          }
          local_170 = local_1d0;
          pcVar6 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_variantWithURL_label_width_heigh_026addc8,local_160,local_118,
                     local_1d0,local_168,0,in_x7,pcVar2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_appendUniqueVariant_to__026addd0,pcVar6,local_f8);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          _objc_storeStrong(&local_160,0);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  pcVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_queryValueForKey_inURLString__026ade88,&cf_ratio,local_100);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1f8 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_1f8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d0;
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_variantWithURL_label_width_heigh_026addc8,local_100,local_178,local_e8,
             local_f0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_appendUniqueVariant_to__026addd0,pcVar3,local_f8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


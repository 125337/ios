// douyinAwemeIDFromURL: @ 0102e0cc

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinAwemeIDFromURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  undefined *local_140;
  int local_134;
  ulong local_130;
  SEL local_128;
  ID local_120;
  ulong local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined1 auStack_f0 [128];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  uVar2 = local_130;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_118 = 0;
    local_134 = 1;
  }
  else {
    local_70 = &cf__video___d__;
    local_68 = &cf__note___d__;
    local_60 = &cf__share_video___d__;
    local_58 = &cf__share_item___d__;
    local_50 = &cf_aweme_id___d__;
    local_48 = &cf_item_id___d__;
    local_40 = &cf_modal_id___d__;
    local_38 = &cf_item_ids___d__;
    local_30 = &cf_mid___d__;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,9
              );
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar1;
    _memset(auStack_188,0,0x40);
    puVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_f0,0x10);
    if (local_1e0 != (undefined *)0x0) {
      lVar6 = *local_178;
      local_1e8 = (undefined *)0x0;
      do {
        do {
          if (*local_178 - lVar6 != 0) {
            _objc_enumerationMutation(*local_178 - lVar6,puVar1);
          }
          local_148 = *(undefined8 *)(local_180 + (long)local_1e8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,local_148,1,0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_130;
          uVar4 = local_130;
          local_190 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          local_108 = 0;
          local_100 = 0;
          local_110 = uVar4;
          local_f8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,uVar2,0,0,uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined1 *)0x0;
          local_198 = puVar3;
          if (puVar3 == (undefined *)0x0) {
LAB_0102e42c:
            local_134 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18);
            uVar2 = local_130;
            puVar7 = puVar3 + -1;
            if (puVar3 == (undefined *)0x0 || puVar7 == (undefined1 *)0x0) goto LAB_0102e42c;
            puVar3 = local_198;
            puVar5 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_rangeAtIndex__0269ef20,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_substringWithRange__0269d138,puVar3,puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            local_134 = 1;
            local_118 = uVar2;
          }
          _objc_storeStrong(puVar7,&local_198);
          _objc_storeStrong(&local_190,0);
          if (local_134 != 0) goto LAB_0102e4c4;
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_f0,
                   0x10);
        local_1e8 = (undefined *)0x0;
      } while (local_1e0 != (undefined *)0x0);
    }
    local_134 = 0;
LAB_0102e4c4:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_134 == 0) {
      local_118 = 0;
      local_134 = 1;
    }
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_118;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


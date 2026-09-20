// expandedTemplate:candidate:index: @ 01863e44

/* Function Stack Size: 0x28 bytes */

ID WCRefineBatchRemarkViewController::expandedTemplate_candidate_index_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *pcVar11;
  long lVar12;
  undefined8 uVar13;
  cfstringStruct *local_318;
  cfstringStruct *local_308;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_270;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_1e8;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  unsigned_long_long local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  SEL local_158;
  ID local_150;
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = (cfstringStruct *)0x0;
  local_158 = param_2;
  local_150 = param_1;
  _objc_storeStrong(&local_160,param_3);
  local_168 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_168,param_4);
  if (local_160 == (cfstringStruct *)0x0) {
    local_1e8 = &::cf___;
  }
  else {
    local_1e8 = local_160;
  }
  local_170 = param_5;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_1e8;
  local_c8 = &cf__name_;
  pcVar1 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  local_200 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_200 = &::cf___;
  }
  local_78 = local_200;
  local_c0 = &cf__;
  pcVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  local_210 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_210 = &::cf___;
  }
  local_70 = local_210;
  local_b8 = &cf__nick_;
  pcVar3 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_nickName_026af388);
  _objc_retainAutoreleasedReturnValue();
  local_220 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_220 = &::cf___;
  }
  local_68 = local_220;
  local_b0 = &cf__;
  pcVar4 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_nickName_026af388);
  _objc_retainAutoreleasedReturnValue();
  local_230 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_230 = &::cf___;
  }
  local_60 = local_230;
  local_a8 = &cf__remark_;
  pcVar5 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_currentRemark_026b6a58);
  _objc_retainAutoreleasedReturnValue();
  local_240 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_240 = &::cf___;
  }
  local_58 = local_240;
  local_a0 = &cf__;
  pcVar6 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_currentRemark_026b6a58);
  _objc_retainAutoreleasedReturnValue();
  local_250 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_250 = &::cf___;
  }
  local_50 = local_250;
  local_98 = &cf__wxid_;
  pcVar7 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_userName_0269f7b8);
  _objc_retainAutoreleasedReturnValue();
  local_260 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_260 = &::cf___;
  }
  local_48 = local_260;
  local_90 = &cf__;
  pcVar8 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_userName_0269f7b8);
  _objc_retainAutoreleasedReturnValue();
  local_270 = pcVar8;
  if (pcVar8 == (cfstringStruct *)0x0) {
    local_270 = &::cf___;
  }
  local_40 = local_270;
  local_88 = &cf__index_;
  puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf__;
  puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
  _objc_retainAutoreleasedReturnValue();
  pcVar11 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_78,&local_c8,10);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar11;
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _memset(auStack_1c8,0,0x40);
  pcVar1 = local_180;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_148,0x10);
  if (local_2c8 != (cfstringStruct *)0x0) {
    lVar12 = *local_1b8;
    local_2d0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_1b8 - lVar12 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar12,pcVar1);
        }
        pcVar2 = local_178;
        uVar13 = *(undefined8 *)(local_1c0 + (long)local_2d0 * 8);
        pcVar3 = local_180;
        local_188 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_objectForKeyedSubscript__0269d098,uVar13);
        _objc_retainAutoreleasedReturnValue();
        local_308 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_308 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,uVar13,local_308);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_178;
        local_178 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_2d0 = (cfstringStruct *)((long)&local_2d0->field0_0x0 + 1);
      } while (local_2d0 < local_2c8);
      local_2c8 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_148,0x10
                );
      local_2d0 = (cfstringStruct *)0x0;
    } while (local_2c8 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_178 == (cfstringStruct *)0x0) {
    local_318 = &::cf___;
  }
  else {
    local_318 = local_178;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_318;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


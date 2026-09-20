// historyNormalizedXMLText: @ 01b2a268

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyNormalizedXMLText_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  cfstringStruct *local_178;
  undefined8 local_170;
  cfstringStruct *local_168;
  long local_160;
  undefined4 local_154;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined8 local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [128];
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
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  pcVar1 = local_148;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &::cf___;
    local_154 = 1;
  }
  else {
    pcVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_<_[CDATA[);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_150;
    local_150 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___>,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_150;
    local_150 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_160 = 0;
    local_170 = 0;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<[_>__>,1,&local_170);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_160,local_170);
    pcVar1 = local_150;
    local_168 = pcVar2;
    if ((local_160 == 0) && (pcVar2 != (cfstringStruct *)0x0)) {
      pcVar3 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
      local_120 = 0;
      local_118 = 0;
      local_180 = 0;
      local_178 = pcVar3;
      local_128 = pcVar3;
      local_110 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar3,
                 &::cf_space_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_150;
      local_150 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_88 = &cf__lt_;
    local_58 = &cf_<;
    local_80 = &cf__gt_;
    local_50 = &cf_>;
    local_78 = &cf__amp_;
    local_48 = &cf__;
    local_70 = &cf__quot_;
    local_40 = &::cf__;
    local_68 = &cf__apos_;
    local_38 = &::cf__;
    local_60 = &cf__nbsp_;
    local_30 = &::cf_space_s_;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar4;
    _memset(auStack_1d0,0,0x40);
    puVar4 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_108,0x10);
    if (local_228 != (undefined *)0x0) {
      lVar6 = *local_1c0;
      local_230 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar6,puVar4);
          }
          pcVar1 = local_150;
          uVar7 = *(undefined8 *)(local_1c8 + (long)local_230 * 8);
          puVar5 = local_188;
          local_190 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_188,PTR_s_objectForKeyedSubscript__0269d098,uVar7);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,uVar7);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_150;
          local_150 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_108,
                   0x10);
        local_230 = (undefined *)0x0;
      } while (local_228 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar1 = local_150;
    FUN_01b2a7d8();
    _objc_retainAutoreleasedReturnValue();
    local_154 = 1;
    local_130 = pcVar1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


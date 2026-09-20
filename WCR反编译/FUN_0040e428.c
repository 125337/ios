// FUN_0040e428 @ 0040e428

void FUN_0040e428(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  cfstringStruct *local_170;
  undefined8 local_168;
  cfstringStruct *local_160;
  long local_158;
  undefined4 local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
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
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_1);
  pcVar1 = local_138;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &cf___;
    local_150 = 1;
  }
  else {
    pcVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_<_[CDATA[,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_140;
    local_140 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___>,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_140;
    local_140 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_158 = 0;
    local_168 = 0;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<[_>__>,1,&local_168);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_158,local_168);
    pcVar1 = local_140;
    local_160 = pcVar2;
    if ((local_158 == 0) && (pcVar2 != (cfstringStruct *)0x0)) {
      pcVar3 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
      local_120 = 0;
      local_118 = 0;
      local_178 = 0;
      local_170 = pcVar3;
      local_128 = pcVar3;
      local_110 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar3,
                 &cf_space_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_140;
      local_140 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_88 = &cf__lt_;
    local_58 = &cf_<;
    local_80 = &cf__gt_;
    local_50 = &cf_>;
    local_78 = &cf__amp_;
    local_48 = &cf__;
    local_70 = &cf__quot_;
    local_40 = &cf__;
    local_68 = &cf__apos_;
    local_38 = &cf__;
    local_60 = &cf__nbsp_;
    local_30 = &cf_space_s_;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar4;
    _memset(auStack_1c8,0,0x40);
    puVar4 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_108,0x10);
    if (local_248 != (undefined *)0x0) {
      lVar6 = *local_1b8;
      local_250 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar6,puVar4);
          }
          pcVar1 = local_140;
          uVar7 = *(undefined8 *)(local_1c0 + (long)local_250 * 8);
          puVar5 = local_180;
          local_188 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_180,PTR_s_objectForKeyedSubscript__0269d098,uVar7);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,uVar7);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_140;
          local_140 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_108,
                   0x10);
        local_250 = (undefined *)0x0;
      } while (local_248 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar1 = local_140;
    FUN_0040eb04();
    _objc_retainAutoreleasedReturnValue();
    local_150 = 1;
    local_130 = pcVar1;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


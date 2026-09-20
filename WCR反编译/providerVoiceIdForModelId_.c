// providerVoiceIdForModelId: @ 01593518

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineVoiceCloneHelper::providerVoiceIdForModelId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  ulong local_198;
  ulong local_190;
  bool local_149;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  bool local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  int local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    local_190 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar5 = *local_110;
      local_198 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,IVar4);
          }
          pcVar6 = *(cfstringStruct **)(local_118 + local_198 * 8);
          local_e0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar3 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_131 = false;
          bVar1 = ((ulong)pcVar3 & 1) == 0;
          if (bVar1) {
            local_1c0 = &::cf___;
          }
          else {
            local_1c0 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_130 = local_1c0;
          }
          local_131 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_1c0;
          if ((local_131 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          pcVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar6 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_149 = ((ulong)pcVar6 & 1) == 0;
          if (local_149) {
            local_1d8 = &::cf___;
          }
          else {
            local_1d8 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
            _objc_retainAutoreleasedReturnValue();
            local_148 = local_1d8;
          }
          local_149 = !local_149;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = local_1d8;
          if (local_149) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_isEqualToString__0269ccc8,local_d0);
          if ((((ulong)pcVar3 & 1) == 0) &&
             (pcVar3 = local_140,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_140,PTR_s_isEqualToString__0269ccc8,local_d0),
             ((ulong)pcVar3 & 1) == 0)) {
            local_d4 = 0;
          }
          else {
            pcVar3 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_1e8 = local_d0;
            }
            else {
              local_1e8 = local_140;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_1e8;
            local_d4 = 1;
          }
          _objc_storeStrong(&local_140);
          _objc_storeStrong(&local_128,0);
          if (local_d4 != 0) goto LAB_01593a6c;
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_d4 = 0;
LAB_01593a6c:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    pcVar3 = local_d0;
    if (local_d4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar3;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


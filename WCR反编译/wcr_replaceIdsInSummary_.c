// wcr_replaceIdsInSummary: @ 01dd58e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsViewController::wcr_replaceIdsInSummary_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong local_218;
  ulong local_210;
  uint local_1bc;
  cfstringStruct *local_1b8;
  undefined *local_198;
  undefined8 local_190;
  cfstringStruct *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  ID local_130;
  cfstringStruct *local_128;
  undefined4 local_120;
  byte local_119;
  ID local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  SEL local_100;
  ID local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = (cfstringStruct *)0x0;
  local_100 = param_2;
  local_f8 = param_1;
  _objc_storeStrong(&local_108,param_3);
  pcVar2 = local_108;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_1b8 = &::cf___;
  }
  else {
    local_1b8 = local_108;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
  local_119 = 0;
  local_1bc = 1;
  if (local_1b8 != (cfstringStruct *)0x0) {
    IVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_sessionResult_026c5440);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 1;
    local_118 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1bc = (uint)IVar3 ^ 1;
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  pcVar2 = local_110;
  if ((local_1bc & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_mutableCopy_0269d8a0);
    IVar3 = local_f8;
    local_128 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_sessionResult_026c5440);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_130 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_178,0,0x40);
    IVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_sessionResult_026c5440);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_210 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_210 != 0) {
      lVar7 = *local_168;
      local_218 = 0;
      do {
        do {
          if (*local_168 - lVar7 != 0) {
            _objc_enumerationMutation(*local_168 - lVar7,IVar4);
          }
          uVar8 = *(ulong *)(local_170 + local_218 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_138 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0), 3 < uVar8)) {
            puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                       PTR_s_displayNameForUser_inRoom__0269ecd0,local_138,local_130);
            _objc_retainAutoreleasedReturnValue();
            local_180 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
            if ((puVar1 == (undefined *)0x0) ||
               ((puVar1 = local_180,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_isEqualToString__0269ccc8,local_138),
                ((ulong)puVar1 & 1) != 0 ||
                (puVar5 = local_180,
                (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_hasPrefix__0269d320,&cf_wxid_)
                , pcVar2 = local_128, uVar8 = local_138, puVar1 = local_180,
                ((ulong)puVar5 & 1) != 0)))) {
              local_120 = 3;
            }
            else {
              pcVar6 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
              local_c0 = 0;
              local_b8 = 0;
              local_190 = 0;
              local_188 = pcVar6;
              local_c8 = pcVar6;
              local_b0 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,uVar8,puVar1,0,0,
                         pcVar6);
              local_120 = 0;
            }
            _objc_storeStrong(&local_180,0);
          }
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10
                  );
        local_218 = 0;
      } while (local_210 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_wxid__a_zA_Z0_9__,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_128;
    local_198 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      pcVar6 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      local_e0 = 0;
      local_d8 = 0;
      local_e8 = pcVar6;
      local_d0 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_replaceMatchesInString_options_r_026a5cd0,pcVar2,0,0,pcVar6,&cf__S);
    }
    pcVar2 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
    local_120 = 1;
    local_f0 = pcVar2;
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = pcVar2;
    local_120 = 1;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_f0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


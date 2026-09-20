// wcr_synthesizeText:voiceId:completion: @ 015a10ec

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::wcr_synthesizeText_voiceId_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_270;
  cfstringStruct *local_258;
  ulong local_230;
  ulong local_228;
  bool local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  bool local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  int local_124;
  long local_120;
  ID local_118;
  long local_110;
  ID local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  uVar2 = local_d0;
  ppuVar3 = &local_100;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_015a1a70;
  local_e8 = &DAT_02586c28;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = uVar2;
  _objc_retainBlock();
  IVar4 = local_b0;
  local_d8 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_requestCredential_026b09e0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_c8;
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_108 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_110 = lVar8;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_providerVoiceIdForModelId__026b0af8,local_110);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_c0;
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_118 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = lVar8;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar4 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (IVar4 == 0) {
    (*(code *)local_d8[2])(local_d8,0,&cf__gMn_cSQ);
    local_124 = 1;
  }
  else {
    lVar8 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    if (lVar8 == 0) {
      (*(code *)local_d8[2])(local_d8,0,&cf___gbr);
      local_124 = 1;
    }
    else {
      lVar8 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
      if (lVar8 == 0) {
        (*(code *)local_d8[2])(local_d8,0,&cf_e_g_Nzz);
        local_124 = 1;
      }
      else {
        local_130 = (cfstringStruct *)0x0;
        _memset(auStack_178,0,0x40);
        IVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_models_026b0a68);
        _objc_retainAutoreleasedReturnValue();
        local_228 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_228 != 0) {
          lVar8 = *local_168;
          local_230 = 0;
          do {
            do {
              if (*local_168 - lVar8 != 0) {
                _objc_enumerationMutation(*local_168 - lVar8,IVar4);
              }
              pcVar9 = *(cfstringStruct **)(local_170 + local_230 * 8);
              local_138 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar6 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_189 = false;
              bVar1 = ((ulong)pcVar6 & 1) == 0;
              if (bVar1) {
                local_258 = &::cf___;
              }
              else {
                local_258 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                local_188 = local_258;
              }
              local_189 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_180 = local_258;
              if ((local_189 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_188);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              pcVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_isEqualToString__0269ccc8,local_110);
              if (((ulong)pcVar6 & 1) == 0) {
                local_124 = 0;
              }
              else {
                _objc_storeStrong(&local_130,local_138);
                local_124 = 2;
              }
              _objc_storeStrong(&local_180,0);
              if (local_124 != 0) goto LAB_015a165c;
              local_230 = local_230 + 1;
            } while (local_230 < local_228);
            local_228 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                       0x10);
            local_230 = 0;
          } while (local_228 != 0);
        }
        local_124 = 0;
LAB_015a165c:
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((local_130 == (cfstringStruct *)0x0) ||
           (IVar4 = local_b0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b0,PTR_s_isVoiceUsableWithCurrentProvider_026b0b00,local_130),
           (IVar4 & 1) != 0)) {
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if ((puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) ||
             ((dword *)puVar7 == &MACH_HEADER.cputype)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_wcr_synthOpenAICompatible_voice__026b0b08,local_120,local_118,
                       local_108,local_d8);
            local_124 = 1;
          }
          else if (puVar7 == (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_wcr_synthFish_voice_key_finish__026b0b10,local_120,local_118,
                       local_108,local_d8);
            local_124 = 1;
          }
          else if (puVar7 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_wcr_synthFineVoice_voice_key_fin_026b0b18,local_120,local_118,
                       local_108,local_d8);
            local_124 = 1;
          }
          else {
            (*(code *)local_d8[2])(local_d8,0,&cf_O_FUTbf_gSuceQRbc0R);
            local_124 = 0;
          }
        }
        else {
          pcVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar9 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          local_1a1 = ((ulong)pcVar9 & 1) == 0;
          if (local_1a1) {
            local_270 = &cf_vQNs_S;
          }
          else {
            local_270 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = local_270;
          }
          local_1a1 = !local_1a1;
          (*(code *)PTR__objc_retain_02578638)();
          local_198 = local_270;
          if (local_1a1) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          ppuVar3 = local_d8;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_reg);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar3[2])();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_124 = 1;
          _objc_storeStrong(&local_198,0);
        }
        _objc_storeStrong(&local_130,0);
      }
    }
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


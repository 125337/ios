// wcr_startAISummaryIfNeeded @ 01dda450

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_startAISummaryIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  dword *pdVar6;
  dword *pdVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  int iVar10;
  cfstringStruct *local_1e0;
  undefined *local_1b8;
  cfstringStruct *local_150;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [15];
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  undefined *local_b8;
  dword *local_b0;
  cfstringStruct *local_a8;
  bool local_99;
  cfstringStruct *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  undefined *local_40;
  long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewMode_026af898);
  if ((param_1 & 1) == 0) {
    pcVar9 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
    iVar10 = 2;
    if (((ulong)pcVar9 & 1) != 0) {
      iVar10 = 1;
    }
    local_38 = (long)iVar10;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,&cf_ai),
       ((ulong)puVar2 & 1) != 0)) {
      pcVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_resolvedStatsAnalysisPrompt_026c56a0)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      local_50 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_localStatsSummary_026c56b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = local_28;
      local_58 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_69 = 0;
      local_79 = 0;
      local_89 = 0;
      local_99 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_150 = &::cf___;
      }
      else {
        local_150 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_78 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_150;
      }
      local_99 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_150;
      if ((local_99 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar9 == (cfstringStruct *)0x0) {
        pcVar9 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
        if (((ulong)pcVar9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          pcVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
        }
        local_44 = 1;
      }
      else {
        pcVar9 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (pcVar9 < (cfstringStruct *)0x4) {
          pcVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
          local_44 = 1;
        }
        else {
          pcVar9 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_summarySource_026c56c8);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_length_0269cca0);
          if ((pcVar9 < (cfstringStruct *)0x8) &&
             (pcVar9 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
             pcVar9 < (cfstringStruct *)0x4)) {
            local_44 = 1;
          }
          else {
            pcVar9 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_aiRequest_026c56d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            pcVar9 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
            local_b0 = &segment_command_00000020.flags;
            puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10
                      );
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (puVar3 != (undefined *)0x0) {
              pdVar6 = (dword *)PTR_WCRefineAIStore_026ce048;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              pdVar7 = pdVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_b0 = pdVar7;
              (*(code *)PTR__objc_release_02578630)(pdVar6);
            }
            pcVar9 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
            local_c1 = 0;
            local_d1 = 0;
            local_1b8 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (((ulong)pcVar9 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_9hncNbvyJSe_g7h_g9hncJ_YQ_Q);
              _objc_retainAutoreleasedReturnValue();
              local_d1 = 1;
              local_d0 = local_1b8;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_9hncNbv_JSe_g7h_gQ);
              _objc_retainAutoreleasedReturnValue();
              local_c1 = 1;
              local_c0 = local_1b8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b8 = local_1b8;
            if ((local_d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_d0);
            }
            if ((local_c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_c0);
            }
            _objc_initWeak(auStack_e0,local_28);
            puVar3 = local_b8;
            puVar2 = PTR_WCRefineAIClient_026ce080;
            pcVar9 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
            if (pcVar9 == (cfstringStruct *)0x0) {
              local_1e0 = local_58;
            }
            else {
              local_1e0 = local_a8;
            }
            puVar8 = PTR_WCRefineAIStore_026ce048;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAIStore_026ce048,PTR_s_promptByApplyingMaxChars_toPromp_0269ceb8,
                       local_b0,local_50);
            _objc_retainAutoreleasedReturnValue();
            local_120 = PTR___NSConcreteStackBlock_02578660;
            local_118 = 0xc2000000;
            local_114 = 0;
            local_110 = FUN_01ddb054;
            local_108 = &DAT_02588fa0;
            _objc_copyWeak(auStack_f8,auStack_e0);
            pcVar9 = local_58;
            (*(code *)PTR__objc_retain_02578638)();
            local_100 = pcVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_generateTextWithInstruction_sour_0269d0d0,puVar3,local_1e0,
                       puVar8,&local_120);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAiRequest__026c56d8);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            _objc_storeStrong(&local_100);
            _objc_destroyWeak(auStack_f8);
            _objc_destroyWeak(auStack_e0);
            _objc_storeStrong(&local_b8,0);
            local_44 = 0;
          }
          _objc_storeStrong(&local_a8,0);
        }
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_44 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}


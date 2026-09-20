// viewVoiceInputBreathingLightPaletteSelections @ 01a3c6b4

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::viewVoiceInputBreathingLightPaletteSelections
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined *local_1e0;
  undefined *local_1a8;
  undefined *local_1a0;
  char *local_170;
  ID local_168;
  ID local_160;
  byte local_151;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_c0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  puVar1 = local_c8;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
    FUN_01a3ac58();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    _memset(auStack_118,0,0x40);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar7 = *local_108;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,puVar1);
          }
          lVar8 = *(long *)(local_110 + (long)local_1a8 * 8);
          local_d8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_objectForKey__0269e048,&cf_index);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          local_131 = 0;
          local_141 = 0;
          local_151 = 0;
          local_120 = lVar3;
          if ((lVar3 < 0) ||
             (puVar2 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
             (long)puVar2 <= lVar3)) {
            local_1e0 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_r);
            _objc_retainAutoreleasedReturnValue();
            local_151 = 1;
            local_150 = local_1e0;
          }
          else {
            local_1e0 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_120);
            _objc_retainAutoreleasedReturnValue();
            local_131 = 1;
            local_130 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_141 = 1;
            local_140 = local_1e0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_1e0;
          if ((local_151 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if ((local_131 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_voiceInputBreathingLightEffectiv_026bc508,local_120,&cf_lightHex
                    );
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_b0;
          local_160 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_voiceInputBreathingLightEffectiv_026bc508,local_120,&cf_darkHex)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_168 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
          _objc_storeStrong(&local_168);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_128,0);
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d0,0);
  }
  pcVar6 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_170 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar6,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_wSN,local_b0,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCurrentAlert__026aa348,local_170);
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_show_0269d280);
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_0150da14 @ 0150da14

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0150da14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_170;
  undefined *local_140;
  undefined *local_138;
  int local_10c;
  cfstringStruct *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60,PTR_s_voiceWithIdentifier__026aff70,
             &cf_com_apple_voice_compact_zh_CN_Tingting);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = DAT_028e3850;
  DAT_028e3850 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (DAT_028e3850 == (undefined *)0x0) {
    _memset(auStack_100,0,0x40);
    puVar2 = PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60,PTR_s_speechVoices_026aff78);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != (undefined *)0x0) {
      lVar4 = *local_f0;
      local_140 = (undefined *)0x0;
      do {
        do {
          if (*local_f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar4,puVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_f8 + (long)local_140 * 8);
          local_c0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_language_026aff80);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_170 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_170 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_108 = local_170;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar3 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_hasPrefix__0269d320,&cf_zh_);
          if (((ulong)pcVar3 & 1) == 0) {
            local_10c = 3;
          }
          else {
            pcVar3 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quality_026aff88);
            if (pcVar3 == (cfstringStruct *)0x1) {
              _objc_storeStrong(0,&DAT_028e3850,local_c0);
              local_10c = 2;
            }
            else {
              local_10c = 3;
            }
          }
          _objc_storeStrong(&local_108,0);
          if (local_10c != 3) goto LAB_0150dd10;
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                   0x10);
        local_140 = (undefined *)0x0;
      } while (local_138 != (undefined *)0x0);
    }
LAB_0150dd10:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (DAT_028e3850 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVSpeechSynthesisVoice_026ced60,PTR_s_voiceWithLanguage__026aff90
                 ,&cf_zh_CN);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = DAT_028e3850;
      DAT_028e3850 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


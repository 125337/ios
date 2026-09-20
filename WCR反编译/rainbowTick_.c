// rainbowTick: @ 01f48198

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineUpdateLogView::rainbowTick_(WCRefineUpdateLogView *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_190;
  double local_188;
  undefined *local_180;
  undefined *local_178;
  long local_170;
  undefined *local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  double local_118;
  undefined4 local_10c;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  SEL local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = (undefined *)param_1;
  _objc_storeStrong(&local_f0,param_3);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_sponsorLineRanges_026c8f28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_e0;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_logTextView_026a9fc0);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_textStorage_026b9fe8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_f8;
  local_108 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
  puVar1 = local_e0;
  if ((puVar3 == (undefined *)0x0) || (local_108 == (undefined *)0x0)) {
    local_10c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rainbowPhase_026c8f40);
    in_d0 = in_d0 + DAT_0232c6c8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRainbowPhase__026c8f48);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rainbowPhase_026c8f40);
    puVar1 = local_e0;
    if (1.0 <= in_d0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rainbowPhase_026c8f40);
      in_d0 = in_d0 - 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRainbowPhase__026c8f48);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rainbowPhase_026c8f40);
    local_118 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_beginEditing_026b9ff8);
    _memset(auStack_160,0,0x40);
    puVar1 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar4 = *local_150;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar4 != 0) {
            _objc_enumerationMutation(*local_150 - lVar4,puVar1);
          }
          lVar5 = *(long *)(local_158 + (long)local_1e0 * 8);
          puVar2 = PTR_s_rangeValue_026ba098;
          local_120 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_170 = lVar5;
          local_168 = puVar2;
          if (((lVar5 != 0x7fffffffffffffff) && (puVar2 != (undefined *)0x0)) &&
             (puVar3 = local_108, local_b8 = lVar5, local_b0 = puVar2,
             (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
             puVar2 + lVar5 <= puVar3)) {
            local_178 = local_168;
            for (local_180 = (undefined *)0x0; local_180 < local_178; local_180 = local_180 + 1) {
              dVar6 = (double)NEON_ucvtf(local_180);
              dVar7 = (double)NEON_ucvtf(local_178);
              local_188 = local_118 + dVar6 / dVar7;
              if (1.0 <= local_188) {
                local_188 = local_188 - 1.0;
              }
              puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,0x3feb333333333333,0x3fee666666666666,0x3ff0000000000000,
                         PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithHue_saturation_brightne_026b8910);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = local_180 + local_170;
              local_d8 = 1;
              local_c0 = 1;
              local_190 = puVar2;
              local_c8 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_addAttribute_value_range__026a1d88,
                         *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070,puVar2,local_d0
                         ,1);
              _objc_storeStrong(&local_190,0);
            }
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_endEditing_026ba018);
    local_10c = 0;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


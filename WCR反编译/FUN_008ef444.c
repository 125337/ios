// FUN_008ef444 @ 008ef444

void FUN_008ef444(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong local_1e8;
  ulong local_1e0;
  cfstringStruct *local_180;
  undefined1 *local_178;
  undefined *local_170;
  undefined8 local_168;
  cfstringStruct *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  int local_f8;
  undefined8 *local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_e8 = &cf___;
  }
  pcVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &cf___;
    local_f8 = 1;
  }
  else {
    _memset(auStack_140,0,0x40);
    uVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1e0 != 0) {
      lVar8 = *local_130;
      local_1e8 = 0;
      do {
        do {
          if (*local_130 - lVar8 != 0) {
            _objc_enumerationMutation(*local_130 - lVar8,uVar1);
          }
          local_100 = *(undefined8 *)(local_138 + local_1e8 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_<__(_s[_>____>_____<___>);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          local_148 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar4,9,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_d8;
          pcVar6 = local_d8;
          local_150 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          local_c0 = 0;
          local_b8 = 0;
          local_168 = 0;
          local_160 = pcVar6;
          local_c8 = pcVar6;
          local_b0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_firstMatchInString_options_range_0269ef48,pcVar3,0,0,pcVar6);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_158 = puVar5;
          if (puVar5 != (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberOfRanges_0269ef18);
            bVar2 = true;
            if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar5) {
              puVar7 = local_158;
              puVar4 = PTR_s_rangeAtIndex__0269ef20;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_rangeAtIndex__0269ef20,2);
              bVar2 = puVar7 == (undefined1 *)0x7fffffffffffffff;
              local_178 = puVar7;
              local_170 = puVar4;
            }
          }
          pcVar3 = local_d8;
          if (bVar2) {
            local_f8 = 3;
          }
          else {
            puVar7 = local_158;
            puVar4 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_rangeAtIndex__0269ef20,2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_substringWithRange__0269d138,puVar7,puVar4);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar3;
            FUN_008efb90();
            _objc_retainAutoreleasedReturnValue();
            local_180 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_f8 = 3;
            }
            else {
              if (local_e8 != (undefined8 *)0x0) {
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_xml___);
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *local_e8 = puVar4;
              }
              pcVar3 = local_180;
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = pcVar3;
              local_f8 = 1;
            }
            _objc_storeStrong(&local_180,0);
          }
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_148,0);
          if (local_f8 != 3) goto LAB_008efab0;
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    local_f8 = 0;
LAB_008efab0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_f8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = &cf___;
      local_f8 = 1;
    }
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


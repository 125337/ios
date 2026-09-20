// renderNSLogLines: @ 00911fe0

/* WARNING: Removing unreachable block (ram,0x00912268) */
/* WARNING: Removing unreachable block (ram,0x00912374) */
/* Function Stack Size: 0x18 bytes */

void LogViewerViewController::renderNSLogLines_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_290;
  ulong local_288;
  undefined *local_240;
  undefined *local_210;
  undefined *local_208;
  long local_200 [3];
  undefined *local_1e8;
  long local_1e0;
  long local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  long local_188;
  undefined *local_180;
  undefined *local_178;
  byte local_169;
  undefined8 local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  byte local_141;
  undefined8 local_140;
  byte local_131;
  undefined *local_130;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  undefined *local_110;
  undefined4 local_104;
  ulong local_100;
  SEL local_f8;
  undefined *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = (undefined *)param_1;
  _objc_storeStrong(&local_100,param_3);
  uVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_104 = 1;
  }
  else {
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_119 = 0;
    local_240 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_240 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_240;
    }
    local_119 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_240;
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_131 = 0;
    local_141 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    local_131 = 1;
    local_130 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = puVar2;
    if ((local_141 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    if ((local_131 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    local_159 = 0;
    local_169 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_159 = 1;
    local_158 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar2;
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_38 = local_110;
    local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    local_30 = local_150;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
    local_178 = puVar2;
    _objc_alloc_init();
    local_180 = puVar3;
    _memset(auStack_1c8,0,0x40);
    uVar1 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_c8,0x10);
    if (local_288 != 0) {
      lVar5 = *local_1b8;
      local_290 = 0;
      do {
        do {
          if (*local_1b8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar5,uVar1);
          }
          lVar6 = *(long *)(local_1c0 + local_290 * 8);
          local_188 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          if (lVar6 != 0) {
            lVar6 = local_188;
            puVar2 = PTR_s_rangeOfString_options__0269d118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_rangeOfString_options__0269d118,
                       &cf____d_2___d_2___d_2_______d_3_____,0x400);
            local_1d8 = lVar6;
            local_1d0 = puVar2;
            if (lVar6 == 0x7fffffffffffffff) {
              puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_210 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_appendAttributedString__026a6388,puVar2);
              _objc_storeStrong(&local_210,0);
            }
            else {
              lVar4 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_substringWithRange__0269d138,lVar6,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
              local_1e0 = lVar4;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              puVar2 = local_128;
              uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
              lVar6 = local_1e0;
              local_1e8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
              local_e0 = 0;
              local_d8 = 0;
              local_200[1] = 0;
              local_200[2] = lVar6;
              local_e8 = lVar6;
              local_d0 = lVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_addAttribute_value_range__026a1d88,uVar7,puVar2,0,lVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_appendAttributedString__026a6388,local_1e8);
              lVar6 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_substringFromIndex__0269d120,local_1d0 + local_1d8);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
              local_200[0] = lVar6;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_208 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_appendAttributedString__026a6388,puVar2);
              _objc_storeStrong(&local_208);
              _objc_storeStrong(local_200,0);
              _objc_storeStrong(&local_1e8,0);
              _objc_storeStrong(&local_1e0,0);
            }
            puVar2 = local_180;
            puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendAttributedString__026a6388);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_c8,0x10
                  );
        local_290 = 0;
      } while (local_288 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_110,0);
    local_104 = 0;
  }
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


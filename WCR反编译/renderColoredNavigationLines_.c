// renderColoredNavigationLines: @ 009107fc

/* WARNING: Removing unreachable block (ram,0x00910a84) */
/* WARNING: Removing unreachable block (ram,0x00910b90) */
/* Function Stack Size: 0x18 bytes */

void LogViewerViewController::renderColoredNavigationLines_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_2f0;
  ulong local_2e8;
  undefined *local_298;
  undefined *local_268;
  undefined8 local_260;
  ulong local_258;
  undefined *local_250;
  undefined *local_248;
  ulong local_240 [3];
  undefined *local_228;
  ulong local_220;
  ulong local_218;
  undefined *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  byte local_189;
  undefined8 local_188;
  byte local_179;
  undefined *local_178;
  undefined *local_170;
  byte local_161;
  undefined8 local_160;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  undefined4 local_124;
  ulong local_120;
  SEL local_118;
  undefined *local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  local_118 = param_2;
  local_110 = (undefined *)param_1;
  _objc_storeStrong(&local_120,param_3);
  uVar1 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_124 = 1;
  }
  else {
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_139 = 0;
    local_298 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_298 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_298;
    }
    local_139 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_298;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_151 = 0;
    local_161 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = puVar2;
    if ((local_161 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    local_179 = 0;
    local_189 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_179 = 1;
    local_178 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar2;
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_198 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,0,0x3fe3333333333333,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_1a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
    _objc_retainAutoreleasedReturnValue();
    local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_38 = local_130;
    local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    local_30 = local_170;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
    local_1b8 = puVar2;
    _objc_alloc_init();
    local_1c0 = puVar3;
    _memset(auStack_208,0,0x40);
    uVar1 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_c8,0x10);
    if (local_2e8 != 0) {
      lVar5 = *local_1f8;
      local_2f0 = 0;
      do {
        do {
          if (*local_1f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_200 + local_2f0 * 8);
          local_1c8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          if (uVar6 != 0) {
            uVar6 = local_1c8;
            puVar2 = PTR_s_rangeOfString_options__0269d118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_rangeOfString_options__0269d118,
                       &cf____d_2___d_2___d_2_______d_3_____,0x400);
            local_218 = uVar6;
            local_210 = puVar2;
            if (uVar6 == 0x7fffffffffffffff) {
              puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_268 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_appendAttributedString__026a6388,puVar2);
              _objc_storeStrong(&local_268,0);
            }
            else {
              uVar4 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c8,PTR_s_substringWithRange__0269d138,uVar6,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
              local_220 = uVar4;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              puVar2 = local_148;
              uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
              uVar6 = local_220;
              local_228 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0);
              local_e0 = 0;
              local_d8 = 0;
              local_240[1] = 0;
              local_240[2] = uVar6;
              local_e8 = uVar6;
              local_d0 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_addAttribute_value_range__026a1d88,uVar7,puVar2,0,uVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_appendAttributedString__026a6388,local_228);
              uVar6 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c8,PTR_s_substringFromIndex__0269d120,local_210 + local_218);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
              local_240[0] = uVar6;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              puVar2 = local_170;
              local_248 = puVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_250 = puVar2;
              uVar6 = local_240[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240[0],PTR_s_containsString__0269d0b0,&cf_PUSH_);
              if ((uVar6 & 1) == 0) {
                uVar6 = local_240[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_240[0],PTR_s_containsString__0269d0b0,&cf_POP);
                if ((uVar6 & 1) == 0) {
                  uVar6 = local_240[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_240[0],PTR_s_containsString__0269d0b0,&cf_DidAppear_);
                  if ((uVar6 & 1) == 0) {
                    uVar6 = local_240[0];
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_240[0],PTR_s_containsString__0269d0b0,&cf_PRESENT_);
                    if ((uVar6 & 1) != 0) {
                      _objc_storeStrong(&local_250,local_1b0);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_250,local_1a8);
                  }
                }
                else {
                  _objc_storeStrong(&local_250,local_1a0);
                }
              }
              else {
                _objc_storeStrong(&local_250,local_198);
              }
              puVar3 = local_248;
              puVar2 = local_250;
              uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
              uVar6 = local_240[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_240[0],PTR_s_length_0269cca0);
              local_100 = 0;
              local_f8 = 0;
              local_260 = 0;
              local_258 = uVar6;
              local_108 = uVar6;
              local_f0 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_addAttribute_value_range__026a1d88,uVar7,puVar2,0,uVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_appendAttributedString__026a6388,local_248);
              _objc_storeStrong(&local_250);
              _objc_storeStrong(&local_248,0);
              _objc_storeStrong(local_240,0);
              _objc_storeStrong(&local_228,0);
              _objc_storeStrong(&local_220,0);
            }
            puVar2 = local_1c0;
            puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendAttributedString__026a6388);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_c8,0x10
                  );
        local_2f0 = 0;
      } while (local_2e8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_130,0);
    local_124 = 0;
  }
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


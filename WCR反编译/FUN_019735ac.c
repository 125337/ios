// FUN_019735ac @ 019735ac

void FUN_019735ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined **local_2c8;
  undefined **local_2c0;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  long local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined **local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  byte local_150;
  undefined **local_148;
  undefined4 local_140;
  byte local_139;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  _objc_storeStrong(&local_120,param_1);
  local_128 = (undefined *)0x0;
  _objc_storeStrong(&local_128,param_2);
  local_130 = 0;
  _objc_storeStrong(&local_130,param_3);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_4);
  puVar3 = local_128;
  local_139 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  uVar1 = local_138;
  if (puVar3 == (undefined *)0x0) {
    local_140 = 1;
  }
  else {
    ppuVar4 = &local_188;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_0197509c;
    local_170 = &DAT_0258a3f8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_130;
    local_168 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_120;
    local_160 = uVar2;
    local_150 = local_139 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    _objc_retainBlock();
    local_148 = ppuVar4;
    FUN_019752c8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_128;
    puVar7 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
    local_f0 = 0;
    local_e8 = 0;
    local_1a0 = 0;
    ppuVar5 = ppuVar4;
    local_198 = puVar7;
    local_f8 = puVar7;
    local_e0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppuVar4,PTR_s_matchesInString_options_range__0269ef68,puVar3,0,0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    local_190 = ppuVar5;
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    local_1a8 = (undefined *)0x0;
    _memset(auStack_1f0,0,0x40);
    ppuVar4 = local_190;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c0 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10);
    if (local_2c0 != (undefined **)0x0) {
      lVar6 = *local_1e0;
      local_2c8 = (undefined **)0x0;
      do {
        do {
          if (*local_1e0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar6,ppuVar4);
          }
          puVar7 = *(undefined **)(local_1e8 + (long)local_2c8 * 8);
          puVar3 = PTR_s_range_0269ef50;
          local_1b0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          ppuVar5 = local_148;
          local_200 = puVar7;
          local_1f8 = puVar3;
          if (local_1a8 < puVar7) {
            local_208 = (long)puVar7 - (long)local_1a8;
            local_110 = local_1a8;
            local_108 = local_1a8;
            local_210 = local_1a8;
            puVar3 = local_128;
            local_118 = local_208;
            local_100 = local_208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_substringWithRange__0269d138,local_1a8,local_208);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)ppuVar5[2])();
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          puVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_substringWithRange__0269d138,local_200,local_1f8);
          _objc_retainAutoreleasedReturnValue();
          local_218 = puVar3;
          FUN_0197533c();
          _objc_retainAutoreleasedReturnValue();
          local_220 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            (*(code *)local_148[2])(local_148,local_218);
          }
          else {
            local_d8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
            local_c0 = local_138;
            local_d0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
            FUN_01975f38();
            _objc_retainAutoreleasedReturnValue();
            local_c8 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058;
            local_b0 = local_220;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
            _objc_retainAutoreleasedReturnValue();
            local_228 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            uVar1 = local_120;
            puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_appendAttributedString__026a6388);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_228,0);
          }
          local_1a8 = local_200 + (long)local_1f8;
          _objc_storeStrong(&local_220);
          _objc_storeStrong(&local_218,0);
          local_2c8 = (undefined **)((long)local_2c8 + 1);
        } while (local_2c8 < local_2c0);
        local_2c0 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (ppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                   0x10);
        local_2c8 = (undefined **)0x0;
      } while (local_2c0 != (undefined **)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    puVar3 = local_1a8;
    puVar7 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
    ppuVar4 = local_148;
    if (puVar3 < puVar7) {
      puVar3 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_substringFromIndex__0269d120,local_1a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar4[2])();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_168,0);
    local_140 = 0;
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


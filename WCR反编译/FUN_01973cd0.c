// FUN_01973cd0 @ 01973cd0

void FUN_01973cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong local_338;
  ulong local_330;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  long local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  local_110 = &DAT_028e4350;
  local_118 = 0;
  _objc_storeStrong(&local_118,&PTR___NSConcreteGlobalBlock_0258a398);
  if (*local_110 + 1 != 0) {
    _dispatch_once(*local_110 + 1,local_110,local_118);
  }
  _objc_storeStrong(&local_118,0);
  puVar2 = local_128;
  lVar7 = DAT_028e4340;
  puVar8 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  local_c0 = 0;
  local_b8 = 0;
  local_148 = 0;
  local_140 = puVar8;
  local_c8 = puVar8;
  local_b0 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar7,PTR_s_firstMatchInString_options_range_0269ef48,puVar2,0,0,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_120;
  puVar2 = local_128;
  local_138 = lVar7;
  if (lVar7 == 0) {
    FUN_019747d4();
    _objc_retainAutoreleasedReturnValue();
    FUN_019735ac(uVar1,puVar2,lVar7,local_130,0);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    local_14c = 1;
  }
  else {
    puVar8 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_rangeAtIndex__0269ef20,1);
    local_168 = lVar7;
    local_160 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_substringWithRange__0269d138,lVar7,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_128;
    lVar7 = local_138;
    puVar4 = PTR_s_rangeAtIndex__0269ef20;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rangeAtIndex__0269ef20,2);
    local_180 = lVar7;
    local_178 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_substringWithRange__0269d138,lVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_128;
    lVar7 = local_138;
    puVar4 = PTR_s_rangeAtIndex__0269ef20;
    local_170 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rangeAtIndex__0269ef20,3);
    local_198 = lVar7;
    local_190 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_substringWithRange__0269d138,lVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_128;
    lVar7 = local_138;
    puVar4 = PTR_s_rangeAtIndex__0269ef20;
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rangeAtIndex__0269ef20,4);
    local_1b0 = lVar7;
    local_1a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_substringWithRange__0269d138,lVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_120;
    puVar2 = local_158;
    local_1a0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_stringByAppendingString__0269d398,local_170);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    FUN_019747d4();
    _objc_retainAutoreleasedReturnValue();
    FUN_019735ac(uVar1,puVar2,puVar8,local_130,0);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_188;
    uVar3 = DAT_028e4348;
    puVar8 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
    local_e0 = 0;
    local_d8 = 0;
    local_1c8 = 0;
    local_1c0 = puVar8;
    local_e8 = puVar8;
    local_d0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_matchesInString_options_range__0269ef68,puVar2,0,0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = (undefined *)0x0;
    local_1b8 = uVar3;
    _memset(auStack_218,0,0x40);
    uVar3 = local_1b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_330 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
    if (local_330 != 0) {
      lVar7 = *local_208;
      local_338 = 0;
      do {
        do {
          if (*local_208 - lVar7 != 0) {
            _objc_enumerationMutation(*local_208 - lVar7,uVar3);
          }
          puVar8 = *(undefined **)(local_210 + local_338 * 8);
          puVar2 = PTR_s_range_0269ef50;
          local_1d8 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar1 = local_120;
          if (local_1d0 < puVar8) {
            local_108 = (long)puVar8 - (long)local_1d0;
            local_100 = local_1d0;
            local_f8 = local_1d0;
            puVar4 = local_188;
            local_f0 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_substringWithRange__0269d138,local_1d0,local_108);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            FUN_01963e8c();
            _objc_retainAutoreleasedReturnValue();
            FUN_019735ac(uVar1,puVar4,puVar5,local_130,0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          uVar1 = local_120;
          puVar4 = local_188;
          puVar5 = local_1d8;
          puVar6 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_rangeAtIndex__0269ef20,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_substringWithRange__0269d138,puVar5,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_019747f8();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(uVar1,puVar4,puVar5,local_130,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar1 = local_120;
          puVar4 = local_188;
          puVar5 = local_1d8;
          puVar6 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_rangeAtIndex__0269ef20,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_substringWithRange__0269d138,puVar5,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_01963e8c();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(uVar1,puVar4,puVar5,local_130,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar1 = local_120;
          puVar4 = local_188;
          puVar5 = local_1d8;
          puVar6 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_rangeAtIndex__0269ef20,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_substringWithRange__0269d138,puVar5,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_0197481c();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(uVar1,puVar4,puVar5,local_130,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_1d0 = puVar8 + (long)puVar2;
          local_338 = local_338 + 1;
        } while (local_338 < local_330);
        local_330 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10
                  );
        local_338 = 0;
      } while (local_330 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_1d0;
    puVar8 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
    uVar1 = local_120;
    if (puVar2 < puVar8) {
      puVar8 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_substringFromIndex__0269d120,local_1d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      FUN_01963e8c();
      _objc_retainAutoreleasedReturnValue();
      FUN_019735ac(uVar1,puVar8,puVar2,local_130,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)();
    }
    uVar1 = local_120;
    puVar2 = local_1a0;
    FUN_019747d4();
    _objc_retainAutoreleasedReturnValue();
    FUN_019735ac(uVar1,puVar2,puVar8,local_130,0);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_158,0);
    local_14c = 0;
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


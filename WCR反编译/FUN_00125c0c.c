// FUN_00125c0c @ 00125c0c

void FUN_00125c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_408;
  undefined *local_400;
  undefined *local_388;
  undefined *local_380;
  undefined *local_2e8;
  undefined *local_2c8;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined4 local_168;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  ulong local_140;
  undefined8 local_138;
  long *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  local_148 = (undefined *)0x0;
  _objc_storeStrong(&local_148,param_3);
  local_150 = (undefined *)0x0;
  _objc_storeStrong(&local_150,param_4);
  uVar1 = local_140;
  local_151 = param_5;
  FUN_0010dc1c();
  if ((uVar1 & 1) == 0) {
    local_168 = 1;
    goto LAB_001269c4;
  }
  FUN_001257f8();
  if ((uVar1 & 1) != 0) {
    local_168 = 1;
    goto LAB_001269c4;
  }
  local_130 = &DAT_028c8600;
  local_138 = 0;
  _objc_storeStrong(&local_138,&PTR___NSConcreteGlobalBlock_0257a3c8);
  if (*local_130 + 1 != 0) {
    _dispatch_once(*local_130 + 1,local_130,local_138);
  }
  _objc_storeStrong(&local_138,0);
  puVar4 = DAT_028c8548;
  local_170 = (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(puVar4);
  puVar2 = DAT_028c8548;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c8548,PTR_s_objectForKeyedSubscript__0269d098,local_140);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_170;
  local_170 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_sync_exit(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_170 == (undefined *)0x0) {
    puVar3 = local_148;
    FUN_00119ab8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_170;
    local_170 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = local_150;
  FUN_00119ab8();
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      local_168 = 1;
    }
    else {
      local_168 = 1;
    }
  }
  else if (((local_151 & 1) == 0) &&
          (uVar1 = local_140, FUN_00126af4(local_140,local_178), (uVar1 & 1) == 0)) {
    local_168 = 1;
  }
  else {
    puVar3 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
    puVar4 = DAT_028c8548;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8548,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,local_140);
      _objc_sync_exit(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_00125838(local_140,local_178);
      local_168 = 1;
    }
    else {
      puVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_mutableCopy_0269d8a0);
      local_189 = 0;
      local_2c8 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_2c8 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_188 = local_2c8;
      }
      local_189 = puVar4 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = local_2c8;
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_188);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_minusSet__0269ed80,local_170);
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_mutableCopy_0269d8a0);
      local_1a1 = 0;
      local_2e8 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_2e8 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = local_2e8;
      }
      local_1a1 = puVar4 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = local_2e8;
      if ((local_1a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_minusSet__0269ed80,local_178);
      puVar4 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
      if ((puVar4 == (undefined *)0x0) &&
         (puVar3 = local_198, (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0),
         puVar4 = DAT_028c8548, puVar3 == (undefined *)0x0)) {
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c8548,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,local_140);
        _objc_sync_exit(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_00125838(local_140,local_178);
        local_168 = 1;
      }
      else {
        if ((local_151 & 1) == 0) {
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
          puVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
          puVar3 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
          puVar5 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
          FUN_00126f74(puVar2,puVar4,puVar3,puVar5);
          uVar1 = local_140;
          puVar3 = local_170;
          puVar4 = local_178;
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
            FUN_00127040(uVar1,puVar3,puVar4,puVar2);
            local_168 = 1;
            goto LAB_00126984;
          }
        }
        FUN_00125838(local_140,local_178);
        _memset(auStack_1f0,0,0x40);
        puVar4 = local_198;
        (*(code *)PTR__objc_retain_02578638)();
        local_380 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                   0x10);
        if (local_380 != (undefined *)0x0) {
          lVar7 = *local_1e0;
          local_388 = (undefined *)0x0;
          do {
            do {
              if (*local_1e0 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar7,puVar4);
              }
              uVar8 = *(undefined8 *)(local_1e8 + (long)local_388 * 8);
              local_1b0 = uVar8;
              FUN_00116ae8(uVar8,local_140);
              _objc_unsafeClaimAutoreleasedReturnValue(uVar8);
              local_388 = local_388 + 1;
            } while (local_388 < local_380);
            local_380 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8
                       ,0x10);
            local_388 = (undefined *)0x0;
          } while (local_380 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = DAT_028c8548;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c8548,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,local_140);
        _objc_sync_exit(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar1 = local_140;
        local_1f8 = param_1;
        FUN_00127460(local_140,&cf_leave);
        if ((uVar1 & 1) == 0) {
          _memset(auStack_240,0,0x40);
          puVar4 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_400 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                     0x10);
          if (local_400 != (undefined *)0x0) {
            lVar7 = *local_230;
            local_408 = (undefined *)0x0;
            do {
              do {
                if (*local_230 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_230 - lVar7,puVar4);
                }
                uVar1 = local_140;
                uVar8 = *(undefined8 *)(local_238 + (long)local_408 * 8);
                uVar6 = local_140;
                local_200 = uVar8;
                FUN_001181e8(local_140,uVar8);
                _objc_retainAutoreleasedReturnValue();
                FUN_00118bc0(local_1f8,uVar1,uVar8,uVar6,&cf___);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                local_408 = local_408 + 1;
              } while (local_408 < local_400);
              local_400 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                         auStack_128,0x10);
              local_408 = (undefined *)0x0;
            } while (local_400 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_168 = 0;
      }
LAB_00126984:
      _objc_storeStrong(&local_198);
      _objc_storeStrong(&local_180,0);
    }
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
LAB_001269c4:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


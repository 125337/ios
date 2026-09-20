// FUN_003bba90 @ 003bba90

void FUN_003bba90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  uint local_390;
  uint local_38c;
  uint local_37c;
  cfstringStruct *local_370;
  cfstringStruct *local_358;
  undefined *local_318;
  undefined *local_310;
  undefined *local_2f8;
  byte local_2cc;
  long local_2b0;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined *local_240;
  long local_238;
  long local_230;
  cfstringStruct *local_228;
  undefined8 local_220;
  undefined8 local_218;
  cfstringStruct *local_210;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  byte local_1f0;
  byte local_1ef;
  undefined *local_1e8;
  byte local_1d9;
  long local_1d8;
  byte local_1ca;
  bool local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  byte local_1a9;
  cfstringStruct *local_1a8;
  byte local_19a;
  byte local_199;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  byte local_121;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  byte local_101;
  long local_100;
  byte local_f1;
  long local_f0;
  long local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar5;
  }
  else {
    lVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_101 = 0;
    local_2b0 = lVar9;
    if (lVar9 == 0) {
      local_2b0 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_2b0;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_2b0;
    }
    local_101 = lVar9 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_2b0;
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(lVar9);
    lVar9 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
    if (lVar9 == 0) {
      puVar5 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_dc = 1;
      local_b0 = puVar5;
    }
    else {
      puVar5 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_groupIdsContainingMember__026a2ee8,local_e8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_c0;
      local_118 = puVar5;
      FUN_003bc8f0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRefineConfig_026cdf58;
      local_120 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_131 = 0;
      local_141 = 0;
      local_2cc = 0;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_131 = 1;
        local_130 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_141 = 1;
        local_140 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2cc = (byte)puVar4;
      }
      if ((local_141 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_140);
      }
      if ((local_131 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_130);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_121 = local_2cc & 1;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar5;
      _memset(auStack_198,0,0x40);
      puVar5 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_allGroups_026a2bd0);
      _objc_retainAutoreleasedReturnValue();
      local_2f8 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_2f8 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_310 = local_2f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                 0x10);
      if (local_310 != (undefined *)0x0) {
        lVar9 = *local_188;
        local_318 = (undefined *)0x0;
        do {
          do {
            if (*local_188 - lVar9 != 0) {
              _objc_enumerationMutation(*local_188 - lVar9,local_2f8);
            }
            pcVar10 = *(cfstringStruct **)(local_190 + (long)local_318 * 8);
            local_158 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            local_199 = (byte)pcVar6;
            pcVar6 = local_158;
            FUN_00396ad8();
            local_19a = (byte)pcVar6;
            pcVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_disabled_026a2c20);
            local_1a9 = 0;
            bVar1 = 1;
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              local_1a9 = 1;
              local_1a8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = 1;
              if ((pcVar6 != (cfstringStruct *)0x0) && (bVar1 = 0, (local_199 & 1) == 0)) {
                pcVar6 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_kind_026a27e8);
                bVar1 = 0;
                if (pcVar6 != (cfstringStruct *)0x0) {
                  bVar1 = local_19a ^ 1;
                }
              }
            }
            if ((local_1a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a8);
            }
            if ((bVar1 & 1) == 0) {
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              local_358 = pcVar6;
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_358 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1b8 = local_358;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1c9 = false;
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_370 = local_1b8;
              }
              else {
                local_370 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_name_0269d828);
                _objc_retainAutoreleasedReturnValue();
                local_1c8 = local_370;
              }
              local_1c9 = pcVar10 != (cfstringStruct *)0x0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1c0 = local_370;
              if ((local_1c9 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              lVar8 = local_e8;
              local_1d9 = 0;
              if ((local_19a & 1) == 0) {
                if ((local_199 & 1) == 0) {
                  puVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,PTR_s_containsObject__0269cbb8,local_1b8);
                  local_390 = (uint)puVar5;
                }
                else {
                  puVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
                  local_38c = 0;
                  if (puVar5 == (undefined *)0x0) {
                    local_38c = local_121 ^ 1;
                  }
                  local_390 = local_38c & 1;
                }
                local_37c = local_390;
              }
              else {
                lVar7 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_session_0269d000);
                _objc_retainAutoreleasedReturnValue();
                local_1d9 = 1;
                local_1d8 = lVar7;
                FUN_003bcb18();
                local_37c = (uint)lVar8;
              }
              if ((local_1d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
              }
              puVar4 = local_110;
              pcVar6 = local_1c0;
              puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
              local_260 = PTR___NSConcreteStackBlock_02578660;
              local_258 = 0xc2000000;
              local_254 = 0;
              local_250 = FUN_003bcd48;
              local_248 = &DAT_0257cc08;
              local_1ca = local_37c != 0;
              (*(code *)PTR__objc_retain_02578638)();
              lVar8 = local_e8;
              local_240 = puVar4;
              (*(code *)PTR__objc_retain_02578638)();
              lVar7 = local_c0;
              local_238 = lVar8;
              local_1f0 = local_19a & 1;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar10 = local_1b8;
              local_230 = lVar7;
              local_1ef = local_199 & 1;
              (*(code *)PTR__objc_retain_02578638)();
              uVar3 = local_b8;
              local_228 = pcVar10;
              (*(code *)PTR__objc_retain_02578638)();
              uVar2 = local_c8;
              local_220 = uVar3;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar10 = local_1c0;
              local_218 = uVar2;
              (*(code *)PTR__objc_retain_02578638)();
              lVar8 = local_120;
              local_210 = pcVar10;
              (*(code *)PTR__objc_retain_02578638)();
              uVar3 = local_d0;
              local_208 = lVar8;
              (*(code *)PTR__objc_retain_02578638)();
              uVar2 = local_d8;
              local_200 = uVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_1f8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar6,0,&local_260)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setImageName__0269fb18,&cf_folder);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e8,PTR_s_setSelected__0269fd48,local_1ca & 1);
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1e8);
              _objc_storeStrong(&local_1e8);
              _objc_storeStrong(&local_1f8,0);
              _objc_storeStrong(&local_200,0);
              _objc_storeStrong(&local_208,0);
              _objc_storeStrong(&local_210,0);
              _objc_storeStrong(&local_218,0);
              _objc_storeStrong(&local_220,0);
              _objc_storeStrong(&local_228,0);
              _objc_storeStrong(&local_230,0);
              _objc_storeStrong(&local_238,0);
              _objc_storeStrong(&local_240,0);
              _objc_storeStrong(&local_1c0,0);
              _objc_storeStrong(&local_1b8,0);
            }
            local_318 = local_318 + 1;
          } while (local_318 < local_310);
          local_310 = local_2f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,
                     auStack_a8,0x10);
          local_318 = (undefined *)0x0;
        } while (local_310 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_2f8);
      puVar5 = local_150;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar5;
      local_dc = 1;
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


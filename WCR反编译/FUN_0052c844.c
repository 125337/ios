// FUN_0052c844 @ 0052c844

void FUN_0052c844(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_580;
  undefined *local_578;
  undefined *local_538;
  undefined *local_530;
  undefined *local_470;
  undefined *local_448;
  ulong local_3d8;
  ulong local_3d0;
  undefined *local_398;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  undefined8 local_2c0;
  undefined **local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined1 *local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  byte local_249;
  undefined *local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined *local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = &local_1b0;
  local_1b0 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_00520b10();
  uVar5 = local_1b0;
  if ((uVar2 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar5 & 1) != 0) &&
       (uVar5 = local_1b0, (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0),
       uVar5 != 0)) {
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
      local_1c8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_momentsSpecialFollowContacts_026a4a78);
      _objc_retainAutoreleasedReturnValue();
      local_398 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_398 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0,local_398);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar4 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined *)0x0) {
        local_1c0 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar4;
        _memset(auStack_220,0,0x40);
        uVar5 = local_1b0;
        (*(code *)PTR__objc_retain_02578638)();
        local_3d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        if (local_3d0 != 0) {
          lVar10 = *local_210;
          local_3d8 = 0;
          do {
            do {
              if (*local_210 - lVar10 != 0) {
                _objc_enumerationMutation(*local_210 - lVar10,uVar5);
              }
              uVar11 = *(ulong *)(local_218 + local_3d8 * 8);
              local_1e0 = uVar11;
              FUN_0052b368();
              _objc_retainAutoreleasedReturnValue();
              local_228 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_length_0269cca0);
              if (((uVar11 == 0) || (uVar11 = local_228, FUN_0052bac4(), (uVar11 & 1) != 0)) ||
                 (puVar4 = local_1d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1d0,PTR_s_containsObject__0269cbb8,local_228),
                 ((ulong)puVar4 & 1) == 0)) {
                local_1c0 = 3;
              }
              else {
                puVar4 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,local_228);
                _objc_retainAutoreleasedReturnValue();
                local_230 = puVar4;
                if (puVar4 == (undefined *)0x0) {
                  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_230;
                  local_230 = puVar6;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_230,
                             local_228);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_1e0)
                ;
                _objc_storeStrong(&local_230,0);
                local_1c0 = 0;
              }
              _objc_storeStrong(&local_228,0);
              local_3d8 = local_3d8 + 1;
            } while (local_3d8 < local_3d0);
            local_3d0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                       0x10);
            local_3d8 = 0;
          } while (local_3d0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
        puVar6 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
        puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
        if (puVar6 == (undefined *)0x0) {
          local_1c0 = 1;
        }
        else {
          puVar6 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_momentsSpecialFollowProcessedTid_026a4b78);
          _objc_retainAutoreleasedReturnValue();
          local_448 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            local_448 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_orderedSetWithArray__026a4b80,local_448);
          _objc_retainAutoreleasedReturnValue();
          local_238 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar4 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_momentsSpecialFollowWatermarks_026a4b88);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_249 = 0;
          local_470 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            local_470 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            local_248 = local_470;
          }
          local_249 = puVar6 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_240 = local_470;
          if ((local_249 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_248);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)();
          FUN_0052d8e8();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_258 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_260 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_1d8;
          puVar4 = local_240;
          local_2b0 = PTR___NSConcreteGlobalBlock_02578658;
          local_2a8 = 0xd0800000;
          local_2a4 = 0;
          local_2a0 = FUN_0052da08;
          local_298 = &DAT_0257dbe8;
          local_268 = puVar7;
          (*(code *)PTR__objc_retain_02578638)();
          puVar8 = local_238;
          local_290 = puVar4;
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_260;
          local_288 = puVar8;
          local_270 = local_258;
          (*(code *)PTR__objc_retain_02578638)();
          puVar4 = local_268;
          local_280 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_278 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_2b0);
          while (puVar8 = local_238,
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0),
                section_000003d8.segname + 1 <= puVar8) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_removeObjectAtIndex__0269d530,0);
          }
          puVar8 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_setMomentsSpecialFollowProcessed_026a4b90);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          puVar4 = local_240;
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_setMomentsSpecialFollowWatermark_026a4b98,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          ppuVar9 = &PTR___NSConcreteGlobalBlock_0257dc08;
          _objc_retainBlock();
          local_2b8 = ppuVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_260,PTR_s_sortUsingComparator__0269d168,ppuVar9);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_268,PTR_s_sortUsingComparator__0269d168,local_2b8);
          _memset(auStack_300,0,0x40);
          puVar4 = local_260;
          (*(code *)PTR__objc_retain_02578638)();
          local_530 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_128,
                     0x10);
          if (local_530 != (undefined *)0x0) {
            lVar10 = *local_2f0;
            local_538 = (undefined *)0x0;
            do {
              do {
                if (*local_2f0 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_2f0 - lVar10,puVar4);
                }
                local_2c0 = *(undefined8 *)(local_2f8 + (long)local_538 * 8);
                FUN_0052ec34(local_2c0);
                local_538 = local_538 + 1;
              } while (local_538 < local_530);
              local_530 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,
                         auStack_128,0x10);
              local_538 = (undefined *)0x0;
            } while (local_530 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _memset(auStack_348,0,0x40);
          puVar4 = local_268;
          (*(code *)PTR__objc_retain_02578638)();
          local_578 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_1a8,
                     0x10);
          if (local_578 != (undefined *)0x0) {
            lVar10 = *local_338;
            local_580 = (undefined *)0x0;
            do {
              do {
                if (*local_338 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_338 - lVar10,puVar4);
                }
                local_308 = *(undefined8 *)(local_340 + (long)local_580 * 8);
                FUN_0052ef54(local_308);
                local_580 = local_580 + 1;
              } while (local_580 < local_578);
              local_578 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                         auStack_1a8,0x10);
              local_580 = (undefined *)0x0;
            } while (local_578 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_2b8);
          _objc_storeStrong(&local_278,0);
          _objc_storeStrong(&local_280,0);
          _objc_storeStrong(&local_288,0);
          _objc_storeStrong(&local_290,0);
          _objc_storeStrong(&local_268,0);
          _objc_storeStrong(&local_260,0);
          _objc_storeStrong(&local_240,0);
          _objc_storeStrong(&local_238,0);
          local_1c0 = 0;
        }
        _objc_storeStrong(&local_1d8,0);
      }
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
      goto LAB_0052d73c;
    }
  }
  local_1c0 = 1;
LAB_0052d73c:
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


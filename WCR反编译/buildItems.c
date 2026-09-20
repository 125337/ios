// buildItems @ 015f8f58

/* Function Stack Size: 0x10 bytes */

ID WCRQuickChatRuntime::buildItems(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  uint local_40c;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_380;
  undefined1 *local_378;
  undefined1 *local_370;
  undefined1 *local_350;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  byte local_221;
  long local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  byte local_1d1;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 *local_190;
  undefined *local_188;
  char *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  byte local_150;
  undefined **local_148 [3];
  undefined8 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  char *local_d0;
  byte local_c1;
  undefined1 *local_c0;
  SEL local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_quickChatDisplayMode_026b16c8);
  local_c1 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  pcVar3 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_015f9a60();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar3;
  FUN_015f9c44(pcVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_b0;
  local_e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_temporarilyHiddenUsernames_026b1630);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e8 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  puVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatRemovedUsernames_026b1608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  local_108 = &local_110;
  local_110 = 0;
  local_100 = 0x20000000;
  local_fc = 0x20;
  local_f8 = 0;
  local_128 = &local_130;
  local_130 = 0;
  local_120 = 0x20000000;
  local_11c = 0x20;
  local_118 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPrivateHasMore__026b16d0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupHasMore__026b16d8,0);
  puVar2 = local_e0;
  ppuVar7 = &local_1b8;
  local_1b8 = PTR___NSConcreteStackBlock_02578660;
  local_1b0 = 0xc2000000;
  local_1ac = 0;
  local_1a8 = FUN_015fa41c;
  local_1a0 = &DAT_02587578;
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = local_e8;
  local_198 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_f0;
  local_190 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_d0;
  local_188 = puVar2;
  local_150 = local_c1 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = local_c0;
  local_180 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar6 = local_b0;
  local_178 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_d8;
  local_170 = puVar6;
  local_160 = &local_130;
  local_158 = &local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = puVar2;
  _objc_retainBlock();
  puVar6 = local_c0;
  local_148[0] = ppuVar7;
  FUN_015fbd78(local_c0,local_d0,1);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar6;
  FUN_015fd124(puVar6,local_c0,local_d0,local_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_1c0;
  local_1c0 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  puVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatTopUsernames_026b15f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((local_c1 & 1) == 0) {
    local_350 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatRecentLimit_026b1708);
  }
  else {
    local_350 = (undefined1 *)0x0;
  }
  local_1d0 = local_350;
  puVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  if (((ulong)puVar5 & 1) != 0) {
    local_1d0 = (undefined1 *)0x0;
  }
  local_1d1 = (long)local_1d0 < 1;
  local_1e8 = 0x1e;
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sessionPageLimit_026b1710);
  local_370 = puVar5;
  if ((long)puVar5 < 0x1f) {
    local_370 = (undefined1 *)((long)&MACH_HEADER.reserved + 2);
  }
  local_1f8 = local_370;
  local_1e0 = local_370;
  if ((local_1d1 & 1) == 0) {
    local_208 = local_1d0;
    local_210 = local_370;
    if ((long)local_1d0 < (long)local_370) {
      local_380 = local_1d0;
    }
    else {
      local_380 = local_370;
    }
    local_218 = local_380;
    local_378 = local_380;
  }
  else {
    local_378 = local_370;
  }
  local_200 = local_378;
  local_220 = 0;
  local_221 = 0;
  local_1f0 = puVar5;
  _memset(auStack_270,0,0x40);
  puVar5 = local_1c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_3a0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_a8,0x10);
  if (local_3a0 != (undefined1 *)0x0) {
    lVar8 = *local_260;
    local_3a8 = (undefined1 *)0x0;
    do {
      do {
        if (*local_260 - lVar8 != 0) {
          _objc_enumerationMutation(*local_260 - lVar8,puVar5);
        }
        local_230 = *(undefined8 *)(local_268 + (long)local_3a8 * 8);
        puVar6 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
        if ((((ulong)puVar6 & 1) == 0) && ((long)local_200 <= local_220)) {
          local_221 = 1;
          goto LAB_015f97d0;
        }
        puVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        ppuVar7 = local_148[0];
        uVar1 = local_230;
        puVar4 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsObject__0269cbb8,local_230);
        (*(code *)ppuVar7[2])(ppuVar7,uVar1,(ulong)puVar4 & 0xffffffff);
        puVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        if (puVar2 < puVar4) {
          local_220 = local_220 + 1;
        }
        local_3a8 = local_3a8 + 1;
      } while (local_3a8 < local_3a0);
      local_3a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_a8,0x10)
      ;
      local_3a8 = (undefined1 *)0x0;
    } while (local_3a0 != (undefined1 *)0x0);
  }
LAB_015f97d0:
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_setSessionHasMore__026b1718,
             (local_221 & 1) != 0 && ((local_1d1 & 1) != 0 || (long)local_200 < (long)local_1d0));
  puVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_privateHasMore_026b1720);
    local_40c = 1;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupHasMore_026b1728);
      local_40c = (uint)puVar5;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSessionHasMore__026b1718,local_40c & 1);
  }
  FUN_015fd674();
  puVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(local_148,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_198,0);
  __Block_object_dispose(&local_130,8);
  __Block_object_dispose(&local_110,8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}


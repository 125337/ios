// persistFeatureConfigPostingNotification: @ 01c963e8

/* Function Stack Size: 0x14 bytes */

bool WCRefinePluginFeatureManagementViewController::persistFeatureConfigPostingNotification_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_260;
  undefined *local_248;
  undefined *local_230;
  undefined *local_1f8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  byte local_c1;
  SEL local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = (byte)param_3;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hiddenFeatureIDs_026c2b38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasSponsored_026c2b18);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hiddenFeatureIDs_026c2b38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _memset(auStack_110,0,0x40);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cloudHiddenFeatureIDs_026c2ab0);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_198 != (undefined *)0x0) {
    lVar4 = *local_100;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,puVar1);
        }
        local_d0 = *(undefined8 *)(local_108 + (long)local_1a0 * 8);
        puVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hiddenFeatureIDs_026c2b38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_b8;
  local_118 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_orderedFeatureIDs_026c2b20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_120 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hiddenFeatureIDs_026c2b38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hiddenFeatureIDs_026c2b38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_139 = 0;
  local_1f8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1f8 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_138 = local_1f8;
  }
  local_139 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_1f8;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cloudHiddenFeatureIDs_026c2ab0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_130;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cloudHiddenFeatureIDs_026c2ab0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_unionSet__026a2cb0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_118;
  FUN_01c96cac(local_118,local_130);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_118;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_pluginFeatureOrder_026c2a80);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_230 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_230;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_pluginFeatureHiddenItems_026a8408);
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_248 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_248;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_pluginFeatureSuppressedControlle_026a8410);
  _objc_retainAutoreleasedReturnValue();
  local_260 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_260 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_260;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_isEqualToArray__0269e9b0,local_120);
  puVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToArray__0269e9b0,local_128);
  puVar3 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToArray__0269e9b0,local_148);
  if ((((((byte)puVar1 ^ 1) & 1) == 0) && ((((byte)puVar2 ^ 1) & 1) == 0)) &&
     ((((byte)puVar3 ^ 1) & 1) == 0)) {
    local_a9 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setPluginFeatureOrder__026c2c00,local_120)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_setPluginFeatureHiddenItems__026c2c08,local_128);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_setPluginFeatureSuppressedContro_026c2c10,local_148);
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_postGlobalSettingsChangedNotific_026a6558);
    }
    local_a9 = 1;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


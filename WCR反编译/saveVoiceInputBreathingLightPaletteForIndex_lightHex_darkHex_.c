// saveVoiceInputBreathingLightPaletteForIndex:lightHex:darkHex: @ 01a3bdb0

/* Function Stack Size: 0x28 bytes */

void WCRefineGeneralFunctionViewController::
     saveVoiceInputBreathingLightPaletteForIndex_lightHex_darkHex_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  long_long lVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  long_long lVar8;
  undefined *puVar9;
  long lVar10;
  long_long lVar11;
  undefined *local_1d0;
  undefined *local_1c8;
  byte local_194;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  long_long local_140;
  undefined *local_138;
  byte local_129;
  ID local_128;
  ID local_120;
  undefined4 local_114;
  long local_110;
  ulong local_108;
  long local_100;
  ulong local_f8;
  long_long local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_3;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f8,param_4);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_5);
  uVar3 = local_f8;
  FUN_01a3b068();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = local_100;
  local_108 = uVar3;
  FUN_01a3b068();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_108;
  local_110 = lVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if ((uVar3 == 0) &&
     (lVar10 = local_110, (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
     lVar10 == 0)) {
    local_114 = 1;
  }
  else {
    uVar3 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      _objc_storeStrong(&local_108,local_110);
    }
    lVar10 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    if (lVar10 == 0) {
      _objc_storeStrong(&local_110,local_108);
    }
    IVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_voiceInputBreathingLightDefaultH_026bc4e8,local_f0,&cf_lightHex);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_e0;
    local_120 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_voiceInputBreathingLightDefaultH_026bc4e8,local_f0,&cf_darkHex);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_108;
    local_128 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isEqualToString__0269ccc8,local_120);
    local_194 = 0;
    if ((uVar3 & 1) != 0) {
      lVar10 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isEqualToString__0269ccc8,local_128);
      local_194 = (byte)lVar10;
    }
    local_129 = local_194 & 1;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar6;
    _memset(auStack_180,0,0x40);
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_1c8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
    if (local_1c8 != (undefined *)0x0) {
      lVar10 = *local_170;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar10 != 0) {
            _objc_enumerationMutation(*local_170 - lVar10,puVar7);
          }
          lVar11 = *(long_long *)(local_178 + (long)local_1d0 * 8);
          local_140 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_objectForKey__0269e048,&cf_index);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          lVar2 = local_f0;
          (*(code *)PTR__objc_release_02578630)(lVar11);
          if (lVar8 != lVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_140);
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar6 = local_138;
    if ((local_129 & 1) == 0) {
      local_d8 = &cf_index;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = &cf_lightHex;
      local_b8 = local_108;
      local_c8 = &cf_darkHex;
      local_b0 = local_110;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_c0 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    puVar6 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_sortedArrayUsingComparator__0269fae8,
               &PTR___NSConcreteGlobalBlock_0258af20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRefineConfig_026cdf58;
    local_188 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_reloadTableData_0269dca8);
    pcVar1 = &cf__b_Yyr;
    if ((local_129 & 1) == 0) {
      pcVar1 = &cf__T8Topr_OX_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    local_114 = 0;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_017a9e54 @ 017a9e54

void FUN_017a9e54(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  ulong local_380;
  ulong local_378;
  ulong local_338;
  ulong local_330;
  char *local_270;
  char *local_268;
  undefined *local_260;
  ulong *local_258;
  ulong *local_250 [3];
  int local_234;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined *local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  ulong local_188;
  byte local_17a;
  undefined1 local_179;
  char *local_178;
  char *local_170;
  undefined1 local_161;
  ulong local_160 [3];
  char *local_148;
  ulong local_140;
  undefined8 local_138;
  ulong *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*DAT_028e4130)(param_1,param_2);
  puVar1 = local_130;
  FUN_017b57cc(local_130,"m_tableViewMgr");
  uVar2 = *puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar2;
  if (DAT_028e4230 == (char *)0x0) {
    pcVar3 = "WCTableViewSectionManager";
    _objc_getClass();
    DAT_028e4230 = pcVar3;
  }
  pcVar3 = DAT_028e4230;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultSection_026a5fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_140;
  local_148 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_getTableView_026a09c8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_WCRefineConfig_026cdf58;
  local_160[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar9);
  local_161 = SUB81(puVar4,0);
  if (((ulong)puVar4 & 1) != 0) {
    if (DAT_028e4230 == (char *)0x0) {
      pcVar3 = "WCTableViewSectionManager";
      _objc_getClass();
      DAT_028e4230 = pcVar3;
    }
    pcVar3 = DAT_028e4230;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultSection_026a5fd8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar3;
    if (DAT_028e4238 == (char *)0x0) {
      pcVar3 = "WCTableViewNormalCellManager";
      _objc_getClass();
      DAT_028e4238 = pcVar3;
    }
    pcVar3 = DAT_028e4238;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_normalCellForSel_target_title_ri_026a0a88,
               PTR_s_openThemeExchange_026b49c0,local_130,&cf__NQQbc,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addCell__0269e3f8,pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_insertSection_At__026a5cd8,local_170,0);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
  }
  puVar9 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar9);
  local_179 = SUB81(puVar4,0);
  if (((ulong)puVar4 & 1) != 0) {
    local_17a = 0;
    uVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_valueForKey__0269d128,&cf_sections);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar2;
    iVar5 = 0;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      iVar5 = 0;
      if (uVar2 != 0) {
        _memset(auStack_1d0,0,0x40);
        uVar2 = local_188;
        (*(code *)PTR__objc_retain_02578638)();
        local_330 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10
                  );
        if (local_330 != 0) {
          lVar6 = *local_1c0;
          local_338 = 0;
          do {
            do {
              if (*local_1c0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar6,uVar2);
              }
              uVar7 = *(ulong *)(local_1c8 + local_338 * 8);
              local_190 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_valueForKey__0269d128,&cf_cells);
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = uVar7;
              if (uVar7 != 0) {
                _memset(auStack_220,0,0x40);
                uVar7 = local_1d8;
                (*(code *)PTR__objc_retain_02578638)();
                local_378 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_128,0x10);
                if (local_378 != 0) {
                  lVar8 = *local_210;
                  local_380 = 0;
                  do {
                    do {
                      if (*local_210 - lVar8 != 0) {
                        _objc_enumerationMutation(*local_210 - lVar8,uVar7);
                      }
                      puVar9 = *(undefined **)(local_218 + local_380 * 8);
                      local_228 = (undefined *)0x0;
                      local_1e0 = puVar9;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar9,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_getUserInfoValueForKey__026a83f8);
                      if (((ulong)puVar9 & 1) != 0) {
                        puVar9 = local_1e0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1e0,PTR_s_performSelector_withObject__026ca7c0,
                                   PTR_s_getUserInfoValueForKey__026a83f8,&cf_userMethod);
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        local_230 = puVar9;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
                        if (((ulong)puVar9 & 1) != 0) {
                          puVar9 = local_230;
                          _NSSelectorFromString();
                          local_228 = puVar9;
                        }
                        _objc_storeStrong(&local_230,0);
                      }
                      if (local_228 == PTR_s_openWCRefineEntry_026b49b0) {
                        local_17a = 1;
                        local_234 = 5;
                        goto LAB_017aa6e0;
                      }
                      local_380 = local_380 + 1;
                    } while (local_380 < local_378);
                    local_378 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                               auStack_128,0x10);
                    local_380 = 0;
                  } while (local_378 != 0);
                }
                local_234 = 0;
LAB_017aa6e0:
                (*(code *)PTR__objc_release_02578630)(uVar7);
              }
              if ((local_17a & 1) == 0) {
                local_234 = 0;
              }
              else {
                local_234 = 3;
              }
              _objc_storeStrong(&local_1d8,0);
              if (local_234 != 0) goto LAB_017aa810;
              local_338 = local_338 + 1;
            } while (local_338 < local_330);
            local_330 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                       0x10);
            local_338 = 0;
          } while (local_330 != 0);
        }
        local_234 = 0;
LAB_017aa810:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        iVar5 = local_234;
      }
    }
    puVar1 = &local_188;
    _objc_storeStrong(iVar5,puVar1,0);
    if ((local_17a & 1) == 0) {
      FUN_017b58bc();
      _objc_retainAutoreleasedReturnValue();
      local_250[0] = puVar1;
      FUN_017b5ac4();
      _objc_retainAutoreleasedReturnValue();
      local_260 = PTR_s_openWCRefineEntry_026b49b0;
      local_258 = puVar1;
      if (DAT_028e4230 == (char *)0x0) {
        pcVar3 = "WCTableViewSectionManager";
        _objc_getClass();
        DAT_028e4230 = pcVar3;
      }
      pcVar3 = DAT_028e4230;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultSection_026a5fd8);
      _objc_retainAutoreleasedReturnValue();
      local_268 = pcVar3;
      if (DAT_028e4238 == (char *)0x0) {
        pcVar3 = "WCTableViewNormalCellManager";
        _objc_getClass();
        DAT_028e4238 = pcVar3;
      }
      pcVar3 = DAT_028e4238;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_normalCellForSel_target_title_ri_026a0a88,local_260,local_130,
                 local_250[0],local_258,0);
      _objc_retainAutoreleasedReturnValue();
      local_270 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_addCell__0269e3f8,pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_insertSection_At__026a5cd8,local_268,0);
      _objc_storeStrong(&local_270);
      _objc_storeStrong(&local_268,0);
      _objc_storeStrong(&local_258,0);
      _objc_storeStrong(local_250,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_reloadData_0269e400);
  _objc_storeStrong(local_160);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


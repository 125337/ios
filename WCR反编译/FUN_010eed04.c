// FUN_010eed04 @ 010eed04

void FUN_010eed04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_268;
  undefined *local_260;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 != (undefined *)0x0) {
    FUN_010ef448();
    _objc_retainAutoreleasedReturnValue();
    DAT_028e3441 = 1;
    local_158 = puVar3;
    _memset(auStack_1a0,0,0x40);
    local_c0 = &cf_loadSimpleRuleSets;
    local_b8 = &cf_loadRuleSets;
    local_b0 = &cf_loadColors;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_260 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != (undefined *)0x0) {
      lVar6 = *local_190;
      local_268 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar6 != 0) {
            _objc_enumerationMutation(*local_190 - lVar6,puVar1);
          }
          uVar7 = *(undefined8 *)(local_198 + (long)local_268 * 8);
          local_160 = uVar7;
          _NSSelectorFromString();
          puVar2 = local_158;
          local_1a8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_respondsToSelector__026ca818,uVar7);
          if (((ulong)puVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,local_1a8);
          }
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_268 = (undefined *)0x0;
      } while (local_260 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    DAT_028e3441 = 0;
    FUN_010ef568(local_158);
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    local_1b8 = PTR_s_defaultCenter_026ca5e0;
    local_1c0 = PTR_s_getService__0269d170;
    local_1b0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar4 & 1) == 0) {
      local_1c4 = 1;
    }
    else {
      pcVar5 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,local_1b8);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_respondsToSelector__026ca818,local_1c0);
      puVar1 = local_1c0;
      pcVar4 = local_1d0;
      if (((ulong)pcVar5 & 1) == 0) {
        local_1c4 = 1;
      }
      else {
        pcVar5 = "WCCSSMgr";
        _objc_getClass("WCCSSMgr");
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar1,pcVar5);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = pcVar4;
        _memset(auStack_220,0,0x40);
        local_150 = &cf_parseNewStyleCss;
        local_148 = &cf_reloadAllViewCssStyle;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_150,2);
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2b0 != (undefined *)0x0) {
          lVar6 = *local_210;
          local_2b8 = (undefined *)0x0;
          do {
            do {
              if (*local_210 - lVar6 != 0) {
                _objc_enumerationMutation(*local_210 - lVar6,puVar1);
              }
              uVar7 = *(undefined8 *)(local_218 + (long)local_2b8 * 8);
              local_1e0 = uVar7;
              _NSSelectorFromString();
              pcVar4 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_respondsToSelector__026ca818,uVar7);
              if (((ulong)pcVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,uVar7);
              }
              local_2b8 = local_2b8 + 1;
            } while (local_2b8 < local_2b0);
            local_2b0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                       auStack_140,0x10);
            local_2b8 = (undefined *)0x0;
          } while (local_2b0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_1d8,0);
        local_1c4 = 0;
      }
      _objc_storeStrong(&local_1d0,0);
    }
    _objc_storeStrong(&local_158,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_00699d70 @ 00699d70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00699d70(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_448;
  ulong local_438;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined *local_370;
  undefined *local_368;
  bool local_339;
  ulong local_338;
  bool local_329;
  ulong local_328;
  ulong local_320;
  ulong local_318;
  ulong local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  ulong local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  undefined8 local_278;
  uint local_26c;
  ulong local_268;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  ulong local_210;
  ulong local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined1 auStack_1e0 [128];
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_210 = 0;
  _objc_storeStrong(&local_210,param_1);
  _memset(auStack_258,0,0x40);
  local_c0 = &cf_m_tableViewMgr;
  local_b8 = &cf_tableViewMgr;
  local_b0 = &cf_tableViewManager;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_368 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_368 != (undefined *)0x0) {
    lVar5 = *local_248;
    local_370 = (undefined *)0x0;
    do {
      do {
        if (*local_248 - lVar5 != 0) {
          _objc_enumerationMutation(*local_248 - lVar5,puVar2);
        }
        uVar6 = *(undefined8 *)(local_250 + (long)local_370 * 8);
        local_218 = uVar6;
        _NSSelectorFromString();
        uVar3 = local_210;
        local_260 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_respondsToSelector__026ca818,uVar6);
        if ((uVar3 & 1) != 0) {
          uVar4 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,local_260);
          _objc_retainAutoreleasedReturnValue();
          local_268 = uVar4;
          FUN_0069bf70();
          uVar3 = local_268;
          bVar1 = (uVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_208 = uVar3;
          }
          local_26c = (uint)bVar1;
          _objc_storeStrong(&local_268,0);
          if (local_26c != 0) goto LAB_00699fe4;
        }
        local_370 = local_370 + 1;
      } while (local_370 < local_368);
      local_368 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10)
      ;
      local_370 = (undefined *)0x0;
    } while (local_368 != (undefined *)0x0);
  }
  local_26c = 0;
LAB_00699fe4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_26c == 0) {
    _memset(auStack_2b8,0,0x40);
    local_160 = &cf_m_tableViewMgr;
    local_158 = &cf__m_tableViewMgr;
    local_150 = &cf_tableViewMgr;
    local_148 = &cf__tableViewMgr;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_160,
               4);
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3b0 != (undefined *)0x0) {
      lVar5 = *local_2a8;
      local_3b8 = (undefined *)0x0;
      do {
        do {
          if (*local_2a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_2a8 - lVar5,puVar2);
          }
          local_278 = *(undefined8 *)(local_2b0 + (long)local_3b8 * 8);
          uVar4 = local_210;
          FUN_0069c020(local_210,local_278);
          _objc_retainAutoreleasedReturnValue();
          local_2c0 = uVar4;
          FUN_0069bf70();
          uVar3 = local_2c0;
          bVar1 = (uVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_208 = uVar3;
          }
          local_26c = (uint)bVar1;
          _objc_storeStrong(&local_2c0,0);
          if (local_26c != 0) goto LAB_0069a204;
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_140,
                   0x10);
        local_3b8 = (undefined *)0x0;
      } while (local_3b0 != (undefined *)0x0);
    }
    local_26c = 0;
LAB_0069a204:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_26c == 0) {
      _memset(auStack_308,0,0x40);
      local_200 = &cf_m_tableViewMgr;
      local_1f8 = &cf__m_tableViewMgr;
      local_1f0 = &cf_tableViewMgr;
      local_1e8 = &cf__tableViewMgr;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_200,4);
      _objc_retainAutoreleasedReturnValue();
      local_3f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3f8 != (undefined *)0x0) {
        lVar5 = *local_2f8;
        local_400 = (undefined *)0x0;
        do {
          do {
            if (*local_2f8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_2f8 - lVar5,puVar2);
            }
            local_2c8 = *(undefined8 *)(local_300 + (long)local_400 * 8);
            uVar3 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_class_0269cd60);
            uVar6 = local_2c8;
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_UTF8String_026a2e68);
            _class_getInstanceVariable(uVar3,uVar6);
            local_310 = uVar3;
            if (uVar3 != 0) {
              uVar4 = local_210;
              _object_getIvar(local_210,uVar3);
              _objc_retainAutoreleasedReturnValue();
              local_318 = uVar4;
              FUN_0069bf70();
              uVar3 = local_318;
              bVar1 = (uVar4 & 1) != 0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_208 = uVar3;
              }
              local_26c = (uint)bVar1;
              _objc_storeStrong(&local_318,0);
              if (local_26c != 0) goto LAB_0069a480;
            }
            local_400 = local_400 + 1;
          } while (local_400 < local_3f8);
          local_3f8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_1e0,
                     0x10);
          local_400 = (undefined *)0x0;
        } while (local_3f8 != (undefined *)0x0);
      }
      local_26c = 0;
LAB_0069a480:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_26c == 0) {
        uVar3 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_210,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
        local_329 = (uVar3 & 1) == 0;
        if (local_329) {
          local_438 = 0;
        }
        else {
          local_438 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_328 = local_438;
        }
        local_329 = !local_329;
        (*(code *)PTR__objc_retain_02578638)();
        local_320 = local_438;
        if (local_329) {
          (*(code *)PTR__objc_release_02578630)(local_328);
        }
        local_339 = local_320 == 0;
        if (local_339) {
          local_448 = 0;
        }
        else {
          local_448 = local_320;
          FUN_0069c1ac();
          _objc_retainAutoreleasedReturnValue();
          local_338 = local_448;
        }
        local_339 = !local_339;
        (*(code *)PTR__objc_retain_02578638)();
        local_208 = local_448;
        if (local_339) {
          (*(code *)PTR__objc_release_02578630)(local_338);
        }
        local_26c = 1;
        _objc_storeStrong(&local_320,0);
      }
    }
  }
  _objc_storeStrong(&local_210,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_208);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


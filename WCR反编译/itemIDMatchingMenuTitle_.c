// itemIDMatchingMenuTitle: @ 01103d64

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::itemIDMatchingMenuTitle_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_398;
  ulong local_390;
  ulong local_340;
  ulong local_338;
  ulong local_2f8;
  ulong local_2f0;
  undefined *local_2d0;
  ulong local_2c8;
  ulong local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  ulong local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  uint local_1d4;
  ulong local_1d0;
  ulong local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  uVar8 = local_1c8;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
  if (uVar8 == 0) {
    local_1b0 = 0;
    local_1d4 = 1;
  }
  else {
    _memset(auStack_220,0,0x40);
    IVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_defaultLongPressEntries_026aecf8);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2f0 != 0) {
      lVar7 = *local_210;
      local_2f8 = 0;
      do {
        do {
          if (*local_210 - lVar7 != 0) {
            _objc_enumerationMutation(*local_210 - lVar7,IVar2);
          }
          uVar8 = *(ulong *)(local_218 + local_2f8 * 8);
          local_1e0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = local_1d0;
          local_228 = uVar8;
          _WCRPluginIconTitleMatches(local_1d0,uVar8);
          uVar8 = local_228;
          bVar1 = (uVar10 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar8;
          }
          local_1d4 = (uint)bVar1;
          _objc_storeStrong(&local_228,0);
          if (local_1d4 != 0) goto LAB_01103f9c;
          local_2f8 = local_2f8 + 1;
        } while (local_2f8 < local_2f0);
        local_2f0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        local_2f8 = 0;
      } while (local_2f0 != 0);
    }
    local_1d4 = 0;
LAB_01103f9c:
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_1d4 == 0) {
      _memset(auStack_270,0,0x40);
      IVar2 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_rawLongPressCustomItems_026aed90);
      _objc_retainAutoreleasedReturnValue();
      local_338 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_338 != 0) {
        lVar7 = *local_260;
        local_340 = 0;
        do {
          do {
            if (*local_260 - lVar7 != 0) {
              _objc_enumerationMutation(*local_260 - lVar7,IVar2);
            }
            uVar9 = *(ulong *)(local_268 + local_340 * 8);
            local_230 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar9;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if ((uVar10 & 1) != 0) {
              uVar8 = local_230;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_1d4 = 1;
              local_1b0 = uVar8;
              goto LAB_011041ac;
            }
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          local_340 = 0;
        } while (local_338 != 0);
      }
      local_1d4 = 0;
LAB_011041ac:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (local_1d4 == 0) {
        _memset(auStack_2b8,0,0x40);
        IVar2 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_allNativeAndDiscoveredLongPressE_026aed40);
        _objc_retainAutoreleasedReturnValue();
        local_390 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_390 != 0) {
          lVar7 = *local_2a8;
          local_398 = 0;
          do {
            do {
              if (*local_2a8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_2a8 - lVar7,IVar2);
              }
              uVar10 = *(ulong *)(local_2b0 + local_398 * 8);
              local_278 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = local_278;
              local_2c0 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              FUN_010f4f48();
              _objc_retainAutoreleasedReturnValue();
              local_2c8 = uVar10;
              (*(code *)PTR__objc_release_02578630)(uVar8);
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              FUN_010f4f48();
              _objc_retainAutoreleasedReturnValue();
              local_2d0 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              uVar8 = local_2c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2c8,PTR_s_isEqualToString__0269ccc8,local_1d0);
              if (((uVar8 & 1) == 0) &&
                 ((puVar3 = local_2d0,
                  (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_length_0269cca0),
                  puVar3 == (undefined *)0x0 ||
                  (puVar3 = local_2d0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2d0,PTR_s_isEqualToString__0269ccc8,local_1d0),
                  ((ulong)puVar3 & 1) == 0)))) {
                local_1d4 = 0;
              }
              else {
                uVar8 = local_2c0;
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = uVar8;
                local_1d4 = 1;
              }
              _objc_storeStrong(&local_2d0);
              _objc_storeStrong(&local_2c8,0);
              _objc_storeStrong(&local_2c0,0);
              if (local_1d4 != 0) goto LAB_011044f8;
              local_398 = local_398 + 1;
            } while (local_398 < local_390);
            local_390 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8
                       ,0x10);
            local_398 = 0;
          } while (local_390 != 0);
        }
        local_1d4 = 0;
LAB_011044f8:
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if (local_1d4 == 0) {
          local_1b0 = 0;
          local_1d4 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


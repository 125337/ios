// FUN_002669f0 @ 002669f0

void FUN_002669f0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong local_218;
  ulong local_210;
  ulong local_168;
  ulong local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8 [2];
  ulong local_c8;
  uint local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_b0 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_c0 = 1;
  }
  else {
    local_c8 = 0;
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_valueForKey__0269d128,&cf_m_scrollActionSheet);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_c8;
    local_c8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_c8 == 0) {
      local_c0 = 1;
    }
    else {
      local_d8[0] = 0;
      uVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_itemArray_026a1328);
      if ((uVar5 & 1) != 0) {
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_itemArray_026a1328);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_d8[0];
        local_d8[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_d8[0];
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = local_d8[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_count_0269cfe0), uVar5 == 0)) {
        local_c0 = 1;
      }
      else {
        uVar4 = local_d8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_e0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar5 = local_e0;
        if ((uVar4 & 1) == 0) {
          local_c0 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_e8 = uVar5;
          _memset(auStack_130,0,0x40);
          uVar5 = local_e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_210 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          if (local_210 != 0) {
            lVar7 = *local_120;
            local_218 = 0;
            do {
              do {
                if (*local_120 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar7,uVar5);
                }
                uVar8 = *(ulong *)(local_128 + local_218 * 8);
                local_138 = 0;
                local_f0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_valueForKey__0269d128,&cf_title);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_138;
                local_138 = uVar8;
                (*(code *)PTR__objc_release_02578630)(uVar4);
                uVar4 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_isEqualToString__0269ccc8,&cf_OX_h_S);
                local_c0 = (uint)((uVar4 & 1) != 0);
                _objc_storeStrong(&local_138,0);
                if (local_c0 != 0) goto LAB_00267008;
                local_218 = local_218 + 1;
              } while (local_218 < local_210);
              local_210 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_218 = 0;
            } while (local_210 != 0);
          }
          local_c0 = 0;
LAB_00267008:
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (local_c0 == 0) {
            pcVar6 = "MMScrollActionSheetItem";
            _objc_getClass();
            local_148 = pcVar6;
            if (pcVar6 == (char *)0x0) {
              local_c0 = 1;
            }
            else {
              _objc_alloc_init();
              local_150 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
              if (((ulong)pcVar6 & 1) != 0) {
                pcVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setTitle__0269cef0,&cf_OX_h_S)
                ;
              }
              FUN_00267450();
              _objc_retainAutoreleasedReturnValue();
              local_158 = pcVar6;
              if ((pcVar6 != (char *)0x0) &&
                 (pcVar6 = local_150,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150,PTR_s_respondsToSelector__026ca818,PTR_s_setIconImg__026a1330)
                 , ((ulong)pcVar6 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_setIconImg__026a1330,local_158);
              }
              uVar5 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_mutableCopy_0269d8a0);
              local_160 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_addObject__0269d180,local_150);
              uVar5 = local_d8[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_mutableCopy_0269d8a0);
              local_168 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_setObject_atIndexedSubscript__0269e970,local_160,0);
              uVar5 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_setItemArray__026a1338);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_setItemArray__026a1338,local_168);
              }
              uVar5 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_respondsToSelector__026ca818,
                         PTR_s_relayoutScrollSheet_026a1340);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_relayoutScrollSheet_026a1340);
              }
              _objc_storeStrong(&local_168);
              _objc_storeStrong(&local_160,0);
              _objc_storeStrong(&local_158,0);
              _objc_storeStrong(&local_150,0);
              local_c0 = 0;
            }
          }
          _objc_storeStrong(&local_e8,0);
        }
        _objc_storeStrong(&local_e0,0);
      }
      _objc_storeStrong(local_d8,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


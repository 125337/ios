// FUN_007d46a4 @ 007d46a4

byte FUN_007d46a4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1c8;
  undefined *local_1c0;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8 [3];
  uint local_dc;
  ulong local_d8;
  byte local_c9;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  if (local_d8 == 0) {
    local_c9 = 0;
    local_dc = 1;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
    if (((ulong)puVar2 & 1) != 0) {
      uVar5 = local_d8;
      FUN_007d4cb4(local_d8,&cf_userMethod);
      _objc_retainAutoreleasedReturnValue();
      local_f8[0] = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_isEqualToString__0269ccc8,&cf_openWCRefineEntry);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        local_c9 = 1;
      }
      local_dc = (uint)bVar1;
      _objc_storeStrong(local_f8,0);
      if (local_dc != 0) goto LAB_007d4c04;
    }
    uVar5 = local_d8;
    FUN_007d5124();
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar5;
    FUN_007d54cc();
    if ((uVar5 & 1) == 0) {
      FUN_007d5940();
      _objc_retainAutoreleasedReturnValue();
      local_108 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
      if (uVar5 == 0) {
        local_c9 = 0;
        local_dc = 1;
      }
      else {
        local_48 = &cf_key;
        local_40 = &cf_controller;
        local_38 = &cf_userMethod;
        local_30 = &cf_method;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_48,4);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar2;
        _memset(auStack_158,0,0x40);
        puVar2 = local_110;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,
                   0x10);
        if (local_1c0 != (undefined *)0x0) {
          lVar4 = *local_148;
          local_1c8 = (undefined *)0x0;
          do {
            do {
              if (*local_148 - lVar4 != 0) {
                _objc_enumerationMutation(*local_148 - lVar4,puVar2);
              }
              local_118 = *(undefined8 *)(local_150 + (long)local_1c8 * 8);
              uVar3 = local_d8;
              FUN_007d4cb4(local_d8,local_118);
              _objc_retainAutoreleasedReturnValue();
              local_160 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
              uVar5 = 0;
              if (uVar3 == 0) {
LAB_007d4ac4:
                local_dc = 0;
              }
              else {
                uVar3 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_containsObject__0269cbb8,local_160);
                uVar5 = uVar3 & 0xffffffff;
                if ((uVar3 & 1) == 0) goto LAB_007d4ac4;
                uVar5 = 1;
                local_c9 = 1;
                local_dc = 1;
              }
              _objc_storeStrong(uVar5,&local_160,0);
              if (local_dc != 0) goto LAB_007d4b58;
              local_1c8 = local_1c8 + 1;
            } while (local_1c8 < local_1c0);
            local_1c0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8
                       ,0x10);
            local_1c8 = (undefined *)0x0;
          } while (local_1c0 != (undefined *)0x0);
        }
        local_dc = 0;
LAB_007d4b58:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_dc == 0) {
          local_c9 = 0;
          local_dc = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108,0);
    }
    else {
      local_c9 = 1;
      local_dc = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
LAB_007d4c04:
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


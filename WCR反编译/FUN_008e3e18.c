// FUN_008e3e18 @ 008e3e18

byte FUN_008e3e18(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong local_178;
  ulong local_170;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  uint local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (lVar7 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar7 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,uVar3);
          }
          local_d8 = *(cfstringStruct **)(local_110 + local_178 * 8);
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = &cf___;
          pcVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar5 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar5;
            FUN_008e5574();
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_120;
            local_120 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          pcVar4 = local_120;
          _WCRPluginIconTitleMatches(local_120,local_c0);
          bVar1 = ((ulong)pcVar4 & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_d0 = (uint)bVar1;
          _objc_storeStrong(&local_120,0);
          if (local_d0 != 0) goto LAB_008e41b8;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_d0 = 0;
LAB_008e41b8:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


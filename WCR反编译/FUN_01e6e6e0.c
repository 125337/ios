// FUN_01e6e6e0 @ 01e6e6e0

byte FUN_01e6e6e0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *local_1a8;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_140;
  cfstringStruct *local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  cfstringStruct *local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    _memset(auStack_118,0,0x40);
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardWebHTMLRepositoryItems_026b2db0);
    _objc_retainAutoreleasedReturnValue();
    local_140 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_140 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_158 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
              );
    if (local_158 != (cfstringStruct *)0x0) {
      lVar5 = *local_108;
      local_160 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,local_140);
          }
          uVar6 = *(ulong *)(local_110 + (long)local_160 * 8);
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          FUN_01e6dc70();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar3 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if ((uVar3 == 0) ||
             (uVar3 = local_120,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_120,PTR_s_isEqualToString__0269ccc8,local_c0), (uVar3 & 1) == 0)) {
            local_c4 = 0;
          }
          else {
            local_a9 = 1;
            local_c4 = 1;
          }
          _objc_storeStrong(&local_120,0);
          if (local_c4 != 0) goto LAB_01e6e9d4;
          local_160 = (cfstringStruct *)((long)&local_160->field0_0x0 + 1);
        } while (local_160 < local_158);
        local_158 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_160 = (cfstringStruct *)0x0;
      } while (local_158 != (cfstringStruct *)0x0);
    }
    local_c4 = 0;
LAB_01e6e9d4:
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_c0;
    if (local_c4 == 0) {
      FUN_01e6df84();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
      bVar1 = false;
      bVar2 = false;
      if ((uVar3 & 1) != 0) {
        pcVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
        bVar2 = false;
        if (((ulong)pcVar4 & 1) != 0) {
          local_128 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardWebHTML_026c6dc8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_1a8 = local_128;
          if (local_128 == (cfstringStruct *)0x0) {
            local_1a8 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
          bVar2 = local_1a8 != (cfstringStruct *)0x0;
        }
      }
      local_a9 = bVar2;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      (*(code *)PTR__objc_release_02578630)(local_140);
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


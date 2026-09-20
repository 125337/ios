// FUN_00274fd4 @ 00274fd4

byte FUN_00274fd4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_198;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  cfstringStruct *local_100;
  ulong local_f8;
  int local_f0;
  cfstringStruct *local_e0;
  ulong local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e0,param_2);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c9 = 0;
    local_f0 = 1;
  }
  else {
    uVar2 = local_d8;
    FUN_002798dc(local_d8,local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar2;
    FUN_0027a1c0(uVar2,&cf_codingFormat);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      pcVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_198 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_198 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = local_198;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _memset(auStack_148,0,0x40);
      local_c8 = &cf_xWT121;
      local_c0 = &cf_xWT122;
      local_b8 = &cf_xWT123;
      local_b0 = &cf_xWT202;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c0 != (undefined *)0x0) {
        lVar5 = *local_138;
        local_1c8 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,puVar4);
            }
            local_108 = *(undefined8 *)(local_140 + (long)local_1c8 * 8);
            pcVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_containsString__0269d0b0,local_108);
            if (((ulong)pcVar1 & 1) != 0) {
              local_c9 = 1;
              local_f0 = 1;
              goto LAB_002753d8;
            }
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1c8 = (undefined *)0x0;
        } while (local_1c0 != (undefined *)0x0);
      }
      local_f0 = 0;
LAB_002753d8:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_f0 == 0) {
        local_c9 = 0;
        local_f0 = 1;
      }
      _objc_storeStrong(&local_100,0);
    }
    else {
      local_c9 = 1;
      local_f0 = 1;
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


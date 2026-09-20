// FUN_00942d18 @ 00942d18

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00942d18(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_1bc;
  ulong local_198;
  ulong local_190;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  uint local_cc;
  cfstringStruct *local_c8;
  ulong local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar3 = "CMessageWrap";
  _objc_getClass();
  local_c8 = (cfstringStruct *)pcVar3;
  if (((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) || (local_b8 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar8 = *local_108;
      local_198 = 0;
      do {
        do {
          if (*local_108 - lVar8 != 0) {
            _objc_enumerationMutation(*local_108 - lVar8,uVar2);
          }
          uVar9 = *(undefined8 *)(local_110 + local_198 * 8);
          local_d8 = uVar9;
          _NSSelectorFromString();
          pcVar4 = local_c8;
          local_120 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar9);
          if (((ulong)pcVar4 & 1) != 0) {
            local_128 = (cfstringStruct *)0x0;
            pcVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_120,local_b8);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_128;
            local_128 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar5 = local_128;
            FUN_009407ac();
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_128;
            local_128 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            local_1bc = 0;
            if (pcVar4 != (cfstringStruct *)0x0) {
              puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1bc = (uint)puVar7;
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            pcVar4 = local_128;
            bVar1 = (local_1bc & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar4;
            }
            local_cc = (uint)bVar1;
            _objc_storeStrong(&local_128,0);
            if (local_cc != 0) goto LAB_00943130;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_cc = 0;
LAB_00943130:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}


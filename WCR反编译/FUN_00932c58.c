// FUN_00932c58 @ 00932c58

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00932c58(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8 [3];
  long local_e0 [4];
  cfstringStruct *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = &cf_WCRefine;
  iVar3 = 0x92d880;
  _dladdr(_WCRefineCrashReporterLogDirectory,local_e0);
  if ((iVar3 != 0) && (local_e0[0] != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,local_e0[0])
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_f8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_length_0269cca0);
    if (puVar4 != (undefined *)0x0) {
      _objc_storeStrong(puVar4,&local_c0,local_f8[0]);
    }
    _objc_storeStrong(local_f8,0);
  }
  _memset(auStack_140,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_1a8 != 0) {
    lVar7 = *local_130;
    local_1b0 = 0;
    do {
      do {
        if (*local_130 - lVar7 != 0) {
          _objc_enumerationMutation(*local_130 - lVar7,uVar2);
        }
        uVar8 = *(ulong *)(local_138 + local_1b0 * 8);
        local_100 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_containsString__0269d0b0,local_c0);
        if ((uVar8 & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_0093300c;
        }
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_1b0 = 0;
    } while (local_1a8 != 0);
  }
  bVar1 = false;
LAB_0093300c:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


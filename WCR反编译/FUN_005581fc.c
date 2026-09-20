// FUN_005581fc @ 005581fc

void FUN_005581fc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar4 = *local_f8;
      local_148 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_100 + local_148 * 8);
          local_c8 = uVar5;
          if (DAT_028cb430 == (char *)0x0) {
            pcVar3 = "WCDataItem";
            _objc_getClass();
            DAT_028cb430 = pcVar3;
          }
          pcVar3 = DAT_028cb430;
          _objc_retainAutoreleaseReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
          if ((uVar5 & 1) != 0) {
            FUN_00555580(local_c8);
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


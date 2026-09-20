// FUN_01b6feb4 @ 01b6feb4

void FUN_01b6feb4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  cfstringStruct *local_170;
  ulong local_140;
  ulong local_138;
  bool local_109;
  cfstringStruct *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar3 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_140 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x40));
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_endImportBatchAndReload_026bfaa8);
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_109 = *(long *)(param_1 + 0x48) < 1;
    if (local_109) {
      local_170 = &cf_lgS_eQvh_;
    }
    else {
      local_170 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_170;
    }
    local_109 = !local_109;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_170);
    if (local_109) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_finishDouTuImportCount_unresolve_026bfab8,
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


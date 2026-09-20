// FUN_00933a10 @ 00933a10

/* WARNING: Removing unreachable block (ram,0x00933e74) */

void FUN_00933a10(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  pthread_t p_Var5;
  char *pcVar6;
  ssize_t sVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong local_8a8;
  ulong local_8a0;
  size_t local_828;
  undefined *local_820;
  int local_80c;
  ulong local_7f0;
  char *local_7e8;
  undefined1 auStack_7d8 [8];
  long local_7d0;
  long *local_7c8;
  undefined8 local_798;
  ulong local_790;
  int local_788;
  undefined4 local_774;
  ulong local_770;
  undefined1 auStack_768 [512];
  undefined1 auStack_568 [128];
  undefined8 auStack_4e8 [40];
  char acStack_3a8 [768];
  char acStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_770 = 0;
  _objc_storeStrong(&local_770,param_1);
  if (local_770 == 0) {
    local_774 = 1;
    goto LAB_0093459c;
  }
  uVar3 = local_770;
  (*(code *)PTR__objc_msgSend_02578628)(local_770,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_UTF8String_026a2e68);
  _snprintf(acStack_a8,0x80,"%s");
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_770;
  (*(code *)PTR__objc_msgSend_02578628)(local_770,PTR_s_reason_0269de08);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_UTF8String_026a2e68);
  _snprintf(acStack_3a8,0x300,"%s");
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _bzero(auStack_4e8,0x140);
  local_788 = 0;
  uVar3 = local_770;
  (*(code *)PTR__objc_msgSend_02578628)(local_770,PTR_s_callStackReturnAddresses_026aa6f8);
  _objc_retainAutoreleasedReturnValue();
  local_790 = uVar3;
  _memset(auStack_7d8,0,0x40);
  uVar3 = local_790;
  (*(code *)PTR__objc_retain_02578638)();
  local_8a0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7d8,auStack_568,0x10);
  if (local_8a0 != 0) {
    lVar9 = *local_7c8;
    local_8a8 = 0;
    do {
      do {
        if (*local_7c8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_7c8 - lVar9,uVar3);
        }
        uVar10 = *(undefined8 *)(local_7d0 + local_8a8 * 8);
        local_798 = uVar10;
        if (0x27 < local_788) {
          local_774 = 2;
          goto LAB_00933e0c;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_unsignedIntegerValue_026cabb8);
        lVar11 = (long)local_788;
        local_788 = local_788 + 1;
        auStack_4e8[lVar11] = uVar10;
        local_8a8 = local_8a8 + 1;
      } while (local_8a8 < local_8a0);
      local_8a0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7d8,auStack_568,0x10)
      ;
      local_8a8 = 0;
    } while (local_8a0 != 0);
  }
  local_774 = 0;
LAB_00933e0c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = auStack_4e8;
  FUN_00934600(puVar4,local_788,0);
  local_7e8 = &DAT_028cf3c4;
  uVar1 = _snprintf(&DAT_028cf3c4,0x2fff,"LastObjCException (captured at throw):\n",&DAT_00002ff7);
  if (((int)uVar1 < 1) || (0x2ffe < uVar1)) {
    local_7f0 = 0;
  }
  else {
    local_7e8 = &DAT_028cf3c4 + (int)uVar1;
    local_7f0 = (long)&DAT_00002fff - (long)(int)uVar1;
  }
  if (7 < local_7f0) {
    iVar2 = _snprintf(local_7e8,local_7f0,"  Name:    %s\n");
    if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
      local_7f0 = 0;
    }
    else {
      local_7e8 = local_7e8 + iVar2;
      local_7f0 = local_7f0 - (long)iVar2;
    }
  }
  if (7 < local_7f0) {
    iVar2 = _snprintf(local_7e8,local_7f0,"  Reason:  %s\n");
    if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
      local_7f0 = 0;
    }
    else {
      local_7e8 = local_7e8 + iVar2;
      local_7f0 = local_7f0 - (long)iVar2;
    }
  }
  if (7 < local_7f0) {
    if (DAT_028d23c8 == (pthread_t)0x0) {
LAB_00934094:
      _pthread_main_np();
    }
    else {
      p_Var5 = _pthread_self();
      iVar2 = _pthread_equal(p_Var5,DAT_028d23c8);
      if (iVar2 == 0) goto LAB_00934094;
    }
    iVar2 = _snprintf(local_7e8,local_7f0,"  Thread:  main=%s\n");
    if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
      local_7f0 = 0;
    }
    else {
      local_7e8 = local_7e8 + iVar2;
      local_7f0 = local_7f0 - (long)iVar2;
    }
  }
  if (7 < local_7f0) {
    iVar2 = _snprintf(local_7e8,local_7f0,"  wcr_in_stack: %s\n");
    if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
      local_7f0 = 0;
    }
    else {
      local_7e8 = local_7e8 + iVar2;
      local_7f0 = local_7f0 - (long)iVar2;
    }
  }
  if (7 < local_7f0) {
    iVar2 = _snprintf(local_7e8,local_7f0,"  ThrowResolved:\n",local_7f0 - 8);
    if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
      local_7f0 = 0;
    }
    else {
      local_7e8 = local_7e8 + iVar2;
      local_7f0 = local_7f0 - (long)iVar2;
    }
  }
  for (local_80c = 0; local_80c < local_788 && 0x40 < local_7f0; local_80c = local_80c + 1) {
    FUN_00933218(auStack_768,0x200,local_80c,auStack_4e8[local_80c]);
    if (7 < local_7f0) {
      iVar2 = _snprintf(local_7e8,local_7f0,"%s");
      if ((iVar2 < 1) || (local_7f0 <= (ulong)(long)iVar2)) {
        local_7f0 = 0;
      }
      else {
        local_7e8 = local_7e8 + iVar2;
        local_7f0 = local_7f0 - (long)iVar2;
      }
    }
  }
  if (((7 < local_7f0) &&
      (iVar2 = _snprintf(local_7e8,local_7f0,s_Note__nearOK__1KB_nearUNREL_stri_024117f6,
                         local_7f0 - 8), 0 < iVar2)) && ((ulong)(long)iVar2 < local_7f0)) {
    local_7e8 = local_7e8 + iVar2;
  }
  *local_7e8 = '\0';
  DAT_028d23d0 = (int)local_7e8 + -0x28cf3c4;
  pcVar6 = acStack_a8;
  FUN_00934708(pcVar6,(byte)puVar4 & 1);
  if ((((ulong)pcVar6 & 1) == 0) || (DAT_028cebb0 == '\0')) {
    local_774 = 1;
  }
  else {
    FUN_00934804();
    iVar2 = _open(&DAT_028cebb0,0x601);
    if (-1 < iVar2) {
      local_820 = &DAT_028cf3c4;
      local_828 = (size_t)DAT_028d23d0;
      do {
        while( true ) {
          if (local_828 == 0) goto LAB_00934568;
          sVar7 = _write(iVar2,local_820,local_828);
          if (sVar7 < 0) break;
          if (sVar7 == 0) goto LAB_00934568;
          local_820 = local_820 + sVar7;
          local_828 = local_828 - sVar7;
        }
        piVar8 = ___error();
      } while (*piVar8 == 4);
LAB_00934568:
      _fsync(iVar2);
      _close(iVar2);
    }
    local_774 = 0;
  }
  _objc_storeStrong(&local_790,0);
LAB_0093459c:
  _objc_storeStrong(&local_770,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


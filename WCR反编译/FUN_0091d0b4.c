// FUN_0091d0b4 @ 0091d0b4

void FUN_0091d0b4(long param_1)

{
  ulong uVar1;
  int *piVar2;
  size_t sVar3;
  ulong local_840;
  long local_838;
  long local_830;
  undefined1 auStack_828 [2048];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = param_1 + 0x20;
  local_838 = param_1;
  local_830 = param_1;
  _objc_loadWeakRetained();
  local_840 = uVar1;
  if (uVar1 == 0) {
    sVar3 = 1;
  }
  else {
    do {
      while( true ) {
        sVar3 = (size_t)*(uint *)(param_1 + 0x28);
        _read(sVar3,auStack_828,0x800);
        if ((long)sVar3 < 1) break;
        uVar1 = local_840;
        (*(code *)PTR__objc_msgSend_02578628)(local_840,PTR_s_stderrBackupFD_026aa498);
        if (-1 < (int)uVar1) {
          uVar1 = local_840;
          (*(code *)PTR__objc_msgSend_02578628)(local_840,PTR_s_stderrBackupFD_026aa498);
          _write((int)uVar1,auStack_828,sVar3);
        }
        uVar1 = local_840;
        (*(code *)PTR__objc_msgSend_02578628)(local_840,PTR_s_isNSLogMonitoring_026aa398);
        if (((uVar1 & 1) != 0) &&
           (uVar1 = local_840,
           (*(code *)PTR__objc_msgSend_02578628)(local_840,PTR_s_nsLogPaused_026aa4a8),
           (uVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_840,PTR_s_handleSTDERRBytes_length__026aa4b0,auStack_828,sVar3);
        }
      }
    } while (((long)sVar3 < 0) && (piVar2 = ___error(), *piVar2 == 4));
    if ((long)sVar3 < 0) {
      piVar2 = ___error();
      sVar3 = (size_t)(*piVar2 - 0x23U);
      if (*piVar2 - 0x23U != 0) {
        piVar2 = ___error();
        sVar3 = (size_t)(*piVar2 - 0x23);
      }
    }
  }
  _objc_storeStrong(sVar3,&local_840,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


// FUN_01129504 @ 01129504

void FUN_01129504(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double local_78;
  double local_70;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_invalidated_026a6d50);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_showWithTotalCount__026a1630,
                 *(undefined8 *)(param_1 + 0x28));
      lVar2 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_containerView_026a6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (lVar3 == 0) {
        return;
      }
    }
    if (1.0 <= *(double *)(param_1 + 0x30)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_stopSimulatedProgress_026af218);
    }
    if (*(double *)(param_1 + 0x30) < 1.0) {
      local_78 = *(double *)(param_1 + 0x30);
      dVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_displayedProgress_026af1b0);
      if (local_78 < dVar4) {
        local_78 = dVar4;
      }
      local_70 = local_78;
    }
    else {
      local_70 = 1.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,*(undefined8 *)(param_1 + 0x20),
               PTR_s_applyProgress_failedCount_animat_026af1b8,*(undefined8 *)(param_1 + 0x38),1);
  }
  return;
}


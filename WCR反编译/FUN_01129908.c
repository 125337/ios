// FUN_01129908 @ 01129908

void FUN_01129908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double local_1e8;
  double local_1e0;
  undefined *local_1c8;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  long local_160;
  undefined *local_c8;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_invalidated_026a6d50);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 == 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      local_160 = *(long *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_totalCount_026a3130);
      if (local_160 < 1) {
        local_160 = 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_showWithTotalCount__026a1630,local_160);
      lVar2 = *(long *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_containerView_026a6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (lVar3 == 0) goto LAB_0112a120;
    }
    local_178 = *(double *)(param_5 + 0x30);
    if (local_178 < 0.0) {
      local_178 = 0.0;
    }
    if (1.0 <= local_178) {
      local_180 = 1.0;
    }
    else {
      local_180 = local_178;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_stopSimulatedProgress_026af218);
    dVar9 = 1.0;
    if (local_180 < 1.0) {
      dVar9 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_displayedProgress_026af1b0);
      local_190 = dVar9;
      if (dVar9 <= local_180) {
        local_190 = local_180;
      }
      local_188 = local_190;
    }
    else {
      local_188 = 1.0;
    }
    dVar8 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_applyProgress_failedCount_animat_026af1b8,0,1);
    lVar3 = *(long *)(param_5 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressLabelWidthConstraint_026af220);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = 42.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    else {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_percentLabel_026af180);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar7);
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      puVar4 = *(undefined **)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_percentLabel_026af180);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        dVar8 = 13.0;
        local_c8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = local_c8;
      }
      local_30 = local_1c8;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_sizeWithAttributes__026cab08);
      local_1e0 = (double)(long)dVar8 + 2.0;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (puVar5 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_1e0 < 42.0) {
        local_1e0 = 42.0;
      }
      dVar9 = 76.0;
      if (76.0 <= local_1e0) {
        local_1e8 = 76.0;
      }
      else {
        local_1e8 = local_1e0;
      }
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressLabelWidthConstraint_026af220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar7);
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressTrackView_026af188);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth(local_1e8,dVar9,param_3,param_4);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if (0.0 < local_1e8) {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressFillWidthConstraint_026af190);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)((long)(local_1e8 * local_188));
      (*(code *)PTR__objc_release_02578630)(uVar7);
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressTrackView_026af188);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
  }
LAB_0112a120:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


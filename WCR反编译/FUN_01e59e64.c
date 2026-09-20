// FUN_01e59e64 @ 01e59e64

void FUN_01e59e64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  lVar6 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_wrapGeneration_026c69b8);
  if (lVar6 == lVar2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    local_50 = *(double *)(param_1 + 0x38);
    uStack_38 = *(undefined8 *)(param_1 + 0x50);
    local_40 = *(undefined8 *)(param_1 + 0x48);
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      dVar7 = *(double *)(param_1 + 0x38);
      _CGRectGetMaxX(dVar7,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50));
      local_50 = dVar7 + 8.0;
    }
    else {
      dVar7 = *(double *)(param_1 + 0x38);
      _CGRectGetMinX(dVar7,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50));
      local_50 = (dVar7 - 8.0) - *(double *)(param_1 + 0x48);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_58 = uStack_38;
    local_60 = local_40;
    uStack_88 = uStack_48;
    local_90 = local_50;
    uStack_78 = uStack_38;
    local_80 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,uStack_48,local_40,uStack_38,*(undefined8 *)(param_1 + 0x28),
               PTR_s_setFrame__026ca960);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_indicatorView_026c6920);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,PTR__OBJC_CLASS___CATransaction_026ce3d8,
               PTR_s_setAnimationDuration__026a04d8);
    puVar1 = PTR__OBJC_CLASS___CATransaction_026ce3d8;
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,PTR_s_functionWithName__026ca648,
               *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_02578430);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAnimationTimingFunction__026c6a18);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___CATransaction_026ce3d8;
    local_b8 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_c8 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    local_b0 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    local_a0 = *(undefined8 *)(param_1 + 0x48);
    local_c0 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setCompletionBlock__026a55d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x28),PTR_s_setFrame__026ca960);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_indicatorView_026c6920);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
  }
  return;
}


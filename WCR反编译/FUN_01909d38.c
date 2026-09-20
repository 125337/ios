// FUN_01909d38 @ 01909d38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01909d38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_30 = param_1;
  local_28 = param_1;
  FUN_0190a28c();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_50 = uVar6;
  uStack_48 = uVar7;
  local_40 = uVar8;
  uStack_38 = uVar9;
  local_70 = uVar6;
  uStack_68 = uVar7;
  local_60 = uVar8;
  uStack_58 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,uStack_68,local_60,uStack_58);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uStack_a8 = uStack_48;
  local_b0 = local_50;
  uStack_98 = uStack_38;
  local_a0 = local_40;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_a8;
  local_d0 = local_b0;
  uStack_b8 = uStack_98;
  local_c0 = local_a0;
  uVar2 = local_b0;
  uVar6 = uStack_a8;
  uVar7 = local_a0;
  uVar8 = uStack_98;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar9);
  local_d8 = 0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hexTextField_026b8628);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_redTextField_026b87a0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_greenTextField_026b87d0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_blueTextField_026b87f8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_blueTextField_026b87f8);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_d8;
          local_d8 = lVar5;
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
      }
      else {
        lVar5 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_greenTextField_026b87d0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_d8;
        local_d8 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_redTextField_026b87a0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_d8;
      local_d8 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_hexTextField_026b8628);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_d8;
    local_d8 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_convertRect_toView__0269ded8);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    _CGRectInset();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar6,uVar7,uVar8,uVar9,PTR_s_scrollRectToVisible_animated__026b89e0,0);
    (*(code *)PTR__objc_release_02578630)(uVar9);
  }
  _objc_storeStrong(&local_d8,0);
  return;
}


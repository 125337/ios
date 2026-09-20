// FUN_0112a318 @ 0112a318

void FUN_0112a318(double param_1,long param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_128;
  double local_118;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  long local_58;
  undefined1 local_49;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_2 + 0x20);
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_invalidated_026a6d50);
  local_39 = 0;
  local_49 = 0;
  bVar2 = false;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    lVar4 = *(long *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 == 0;
    local_49 = uVar1;
    local_48 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar2) {
    if (*(long *)(param_2 + 0x30) != 0) {
      (**(code **)(*(long *)(param_2 + 0x30) + 0x10))();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_stopSimulatedProgress_026af218);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_setInvalidated__026a6d70,1);
    lVar4 = *(long *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar4 == 0) {
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
        lVar4 = *(long *)(param_2 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                     *(undefined8 *)(param_2 + 0x28));
        }
      }
      if (*(long *)(param_2 + 0x30) != 0) {
        (**(code **)(*(long *)(param_2 + 0x30) + 0x10))();
      }
    }
    else {
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_progressFillView_026af178);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        param_1 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_2 + 0x20),PTR_s_applyProgress_failedCount_animat_026af1b8,0
                   ,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_showTimestamp_026af228);
      if (param_1 <= 0.0) {
        local_118 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
        local_118 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_2 + 0x20),PTR_s_showTimestamp_026af228);
        local_118 = param_1 - local_118;
      }
      local_60 = local_118;
      local_68 = 0.75;
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
        local_68 = DAT_02323c78;
      }
      local_80 = DAT_02323ec8;
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
        local_80 = 0.35;
      }
      local_88 = local_68 - local_118;
      local_128 = local_80;
      if (local_80 < local_88) {
        local_128 = local_88;
      }
      local_90 = local_128;
      local_78 = local_128;
      local_70 = local_80;
      dVar6 = _dispatch_time(0,(long)(local_128 * 1000000000.0));
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_0112a980;
      local_c0 = &DAT_02585848;
      lVar4 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      local_b8 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = *(byte *)(param_2 + 0x38) & 1;
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      local_b0 = uVar7;
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      local_a8 = uVar8;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = uVar7;
      _dispatch_after(dVar6,puVar5,&local_d8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  return;
}


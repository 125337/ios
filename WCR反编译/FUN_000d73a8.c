// FUN_000d73a8 @ 000d73a8

void FUN_000d73a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48 [3];
  long *local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = &local_28;
  local_28 = 0;
  local_20 = param_4;
  local_18 = param_3;
  _objc_storeStrong(plVar1,param_5);
  FUN_000e9b50();
  lVar2 = local_28;
  local_30 = plVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar2;
  if (local_30 == (long *)((long)&MACH_HEADER.cputype + 1)) {
    FUN_000ec210(0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    if (lVar2 == 0) {
      uStack_58 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      local_60 = *(undefined8 *)PTR__CGPointZero_025782e0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,lVar2);
      local_60 = param_1;
      uStack_58 = param_2;
    }
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (lVar2 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      FUN_000ec76c(local_18,local_48[0]);
      uStack_68 = uStack_58;
      local_70 = local_60;
      FUN_000ec880(local_60,uStack_58,local_18,0);
    }
    else if (lVar2 == 2) {
      uStack_78 = uStack_58;
      local_80 = local_60;
      FUN_000ec880(local_60,uStack_58,local_18,1);
    }
    else if (lVar2 == 3) {
      uStack_88 = uStack_58;
      local_90 = local_60;
      FUN_000ec880(local_60,uStack_58,local_18,0);
      FUN_000ec934(local_18);
    }
    else if (lVar2 - 4U < 2) {
      FUN_000eb8bc(local_18,1);
    }
    local_94 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if ((lVar2 == 1) && (local_30 != (long *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithStyle__026ca710,0);
      local_a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_prepare_026ca7d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_impactOccurred_026ca6a0);
      _objc_storeStrong(&local_a0,0);
      FUN_000ed1ec(local_18,local_30);
      local_94 = 0;
    }
    else {
      local_94 = 1;
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}


// evaluateFaceIDThenUnlockSettings @ 01120af4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::evaluateFaceIDThenUnlockSettings(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  code *local_60;
  undefined *local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_plusLongPressAuthenticating_026aef78);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___LAContext_026cdfa8;
    _objc_alloc_init();
    local_40 = 0;
    local_48 = 0;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_48);
    _objc_storeStrong(&local_40,local_48);
    bVar1 = ((ulong)puVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setPlusLongPressAuthenticating__026aefe8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_suppressForegroundExitAutoHideFo_026aefb0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setLocalizedFallbackTitle__026aec38,&cf_eQ_x);
      local_80 = 0;
      local_70 = 0x32000000;
      local_6c = 0x30;
      local_68 = FUN_011146f4;
      local_60 = FUN_01114748;
      puVar3 = local_38;
      local_78 = &local_80;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_38;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01120dc4;
      local_98 = &DAT_02585620;
      IVar4 = local_28;
      local_88 = &local_80;
      local_58 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_evaluatePolicy_localizedReason_r_0269cc28,1,&cf_eQy__YSn_,&local_b0);
      _objc_storeStrong(&local_90);
      __Block_object_dispose(&local_80,8);
      _objc_storeStrong(&local_58,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentSettingsPasswordAlert_026af108);
    }
    local_4c = (uint)!bVar1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentSettingsPasswordAlert_026af108);
  }
  return;
}


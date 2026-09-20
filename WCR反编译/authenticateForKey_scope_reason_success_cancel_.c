// authenticateForKey:scope:reason:success:cancel: @ 010f1260

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

void WCRefinePageLockGuard::authenticateForKey_scope_reason_success_cancel_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               undefined4 param_7,ID param_8,undefined4 param_9)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *local_138;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  code *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  undefined *local_68;
  byte local_5d;
  undefined4 local_5c;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isWithinProtectionWindowForKey_s_026aec18,local_38,local_40);
  if ((IVar4 & 1) == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasEncryptionPasscode_026aec20);
    local_5d = (byte)IVar4;
    puVar1 = PTR__OBJC_CLASS___LAContext_026cdfa8;
    _objc_alloc_init();
    local_70 = 0;
    local_80 = 0;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_80);
    _objc_storeStrong(&local_70,local_80);
    local_71 = (byte)puVar1;
    if ((((ulong)puVar1 & 1) == 0) && ((local_5d & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf_HQ_W0_OR_0_Nn__xTQ_O_udkR);
      if (local_58 != 0) {
        (**(code **)(local_58 + 0x10))();
      }
      local_5c = 1;
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authenticating_026aec28);
      if ((IVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAuthenticating__026aebc0,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingKey__026aebd8,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingSuccess__026aebc8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingCancel__026aebd0,local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPasscodeAttempts__026aebe0,0);
        if ((local_71 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentPasscodePrompt_026aec30);
          local_5c = 1;
        }
        else {
          pcVar2 = &cf_eQ_x;
          if ((local_5d & 1) == 0) {
            pcVar2 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setLocalizedFallbackTitle__026aec38,pcVar2);
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_138 = &cf__vN;
          }
          else {
            local_138 = local_48;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_138;
          local_b8 = 0;
          local_a8 = 0x32000000;
          local_a4 = 0x30;
          local_a0 = FUN_010f17a0;
          local_98 = FUN_010f17f4;
          puVar3 = local_68;
          local_b0 = &local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_68;
          pcVar2 = local_88;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_010f1820;
          local_d0 = &DAT_02585620;
          IVar4 = local_28;
          local_c0 = &local_b8;
          local_90 = puVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_evaluatePolicy_localizedReason_r_0269cc28,1,pcVar2,&local_e8);
          _objc_storeStrong(&local_c8);
          __Block_object_dispose(&local_b8,8);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_88,0);
          local_5c = 0;
        }
      }
      else {
        local_5c = 1;
      }
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))();
    }
    local_5c = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}


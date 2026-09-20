// authenticateWithBiometrics @ 00006be0

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::authenticateWithBiometrics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined *local_70;
  ID local_68 [3];
  undefined8 local_50;
  undefined1 local_41;
  long local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_biometricAuthenticating_0269cb40);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBiometricAuthenticating__0269cc10,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBiometricAttempted__0269cb90,1);
    puVar3 = PTR__OBJC_CLASS___LAContext_026cdfa8;
    _objc_alloc_init();
    local_40 = 0;
    local_50 = 0;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_50);
    _objc_storeStrong(&local_40,local_50);
    puVar1 = local_38;
    puVar4 = PTR___dispatch_main_q_02578680;
    local_41 = SUB81(puVar3,0);
    if ((((ulong)puVar3 & 1) == 0) || (local_40 != 0)) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = &DAT_00006f44;
      local_70 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_68[0] = IVar2;
      _dispatch_async(puVar4,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_8c = 1;
      _objc_storeStrong(local_68,0);
    }
    else {
      local_c0 = 0;
      local_b0 = 0x32000000;
      local_ac = 0x30;
      local_a8 = FUN_00007010;
      local_a0 = FUN_00007064;
      local_b8 = &local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_28;
      puVar4 = local_38;
      local_98 = puVar1;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_00007090;
      local_d8 = &DAT_02578c80;
      local_c8 = &local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_evaluatePolicy_localizedReason_r_0269cc28,1,&cf__vNN_O,&local_f0);
      _objc_storeStrong(&local_d0);
      __Block_object_dispose(&local_c0,8);
      _objc_storeStrong(&local_98,0);
      local_8c = 0;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}


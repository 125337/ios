// FUN_0000c1c8 @ 0000c1c8

byte FUN_0000c1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  (*DAT_028c79d0)(local_18,local_20,local_28,local_30);
  puVar2 = PTR_EncryptionLock_026ce008;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_EncryptionLock_026ce008,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = PTR_EncryptionLock_026ce008;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_EncryptionLock_026ce008,PTR_s_sharedInstance_0269cd30)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_EncryptionLock_026ce008;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_EncryptionLock_026ce008,PTR_s_sharedInstance_0269cd30)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (byte)uVar1 & 1;
}


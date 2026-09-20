// FUN_021e3654 @ 021e3654

/* WARNING: Removing unreachable block (ram,0x021e38d0) */
/* WARNING: Removing unreachable block (ram,0x021e38d8) */
/* WARNING: Removing unreachable block (ram,0x021e38d4) */

void FUN_021e3654(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 local_d8;
  undefined1 auStack_70 [16];
  long local_60;
  long local_58;
  code *local_50;
  long local_48;
  
  lVar1 = param_1;
  FUN_02223840();
  _objc_retainAutoreleasedReturnValue();
  FUN_021c7714();
  lVar2 = lVar1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = &DAT_028c6d88;
  local_48 = lVar2;
  FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
  puVar4 = puVar3;
  FUN_021f8eb0();
  pcVar5 = FUN_021e38f4;
  __ss14_ArrayProtocolPsE6filterySay7ElementQzGSbAEKXEKF(FUN_021e38f4,0,puVar3,puVar4);
  local_50 = pcVar5;
  FUN_021c8348();
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021e3934,0,puVar3);
  FUN_021c83bc(&local_50);
  lVar1 = param_1;
  FUN_02223ac0(param_1,local_d8,0x7763696d);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222d60(lVar1,local_d8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_02222cc0(0x3ff0000000000000,lVar1,local_d8);
    FUN_02222080(param_1,local_d8,lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = param_1;
  FUN_02223840(param_1,local_d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  local_58 = lVar2;
  (*(code *)PTR__objc_retain_02578638)(param_1);
  local_60 = param_1;
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021f8f24,auStack_70,puVar3,pcVar5);
  (*(code *)PTR__objc_release_02578630)(param_1);
  FUN_021c83bc(&local_58);
  return;
}


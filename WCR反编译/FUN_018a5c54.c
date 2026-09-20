// FUN_018a5c54 @ 018a5c54

void FUN_018a5c54(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  byte local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_018a5da4;
  local_40 = &DAT_02589d08;
  local_20 = param_1;
  local_18 = param_1;
  _objc_copyWeak(auStack_30,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = *(byte *)(param_1 + 0x40) & 1;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentNativePageSheetConfirmWit_0269ed28,uVar3,uVar4,0,&cf_nx,&cf_Sm,
             &local_58);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_storeStrong(&local_38,0);
  _objc_destroyWeak(auStack_30);
  return;
}


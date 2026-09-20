// FUN_010a8870 @ 010a8870

void FUN_010a8870(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_010a89d4;
  local_30 = &DAT_025831d8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_28 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_TTYl_X__W,uVar4,&cf_fbc_SNS,
             &local_48,&cf_Sm);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}


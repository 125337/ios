// FUN_006db034 @ 006db034

void FUN_006db034(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_006db14c;
  local_30 = &DAT_025794e0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf__Smo_c,uVar3,&cf_zT,0,
             &cf_MRSS,&local_48);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}


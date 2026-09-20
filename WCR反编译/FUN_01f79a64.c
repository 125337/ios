// FUN_01f79a64 @ 01f79a64

void FUN_01f79a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar4 = PTR_WCRefineHelper_026ce000;
  lVar1 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01f79c34;
  local_48 = &DAT_0257cd48;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd,lVar2,&cf_Rd,&local_60,
             &cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}


// FUN_01f7ffbc @ 01f7ffbc

void FUN_01f7ffbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar4 = PTR_WCRefineHelper_026ce000;
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01f80148;
  local_38 = &DAT_0257cd48;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd,lVar2,&cf_Rd,&local_50,
             &cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_destroyWeak(auStack_28);
  _objc_storeStrong(&local_30,0);
  return;
}


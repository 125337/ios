// FUN_0028f44c @ 0028f44c

void FUN_0028f44c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WOX_0RvQ_
            );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0028f5b8;
  local_40 = &DAT_0257b5a8;
  local_28 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_38 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  FUN_00276dc8(uVar3,&local_58);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}


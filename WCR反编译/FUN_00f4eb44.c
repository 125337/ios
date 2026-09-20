// FUN_00f4eb44 @ 00f4eb44

void FUN_00f4eb44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined8 uVar4;
  undefined *local_88;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = (undefined *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_31 = 0;
  local_88 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_88 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_88;
  }
  local_31 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_88;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar3 = _dispatch_time(0,200000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_00f4ed44;
  local_58 = &DAT_0257a740;
  local_40 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_28;
  local_50 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar1;
  _dispatch_after(dVar3,puVar2,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_28,0);
  return;
}


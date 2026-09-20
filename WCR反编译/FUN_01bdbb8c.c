// FUN_01bdbb8c @ 01bdbb8c

void FUN_01bdbb8c(long param_1)

{
  undefined *puVar1;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
             &cf_ck_WRd_g0W_X__);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  pdVar2 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_50 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar4;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
  _dispatch_async(pdVar2);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  _objc_storeStrong(&local_40,0);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


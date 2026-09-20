// FUN_01bdccb0 @ 01bdccb0

void FUN_01bdccb0(long param_1)

{
  undefined *puVar1;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
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
             &cf_ck_Wnt_YS_X__);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  pdVar2 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_48 = uVar3;
  _dispatch_async(pdVar2);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


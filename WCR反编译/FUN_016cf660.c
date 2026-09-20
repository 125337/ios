// FUN_016cf660 @ 016cf660

void FUN_016cf660(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48 [3];
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W_eQh__);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  pdVar3 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_016cf828;
  local_60 = &DAT_02578f80;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_20;
  local_58 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_30;
  local_50 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = puVar2;
  _dispatch_async(pdVar3,&local_78);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


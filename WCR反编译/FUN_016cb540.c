// FUN_016cb540 @ 016cb540

void FUN_016cb540(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  dispatch_queue_t pdVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar2 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_016be9f0();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W_eQ_R_
              );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_50 = puVar4;
    FUN_016bd4f8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar5;
    pdVar6 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_016cb814;
    local_78 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_58;
    local_70 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_50;
    local_68 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar4;
    _dispatch_async(pdVar6,&local_90);
    (*(code *)PTR__objc_release_02578630)(pdVar6);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_f);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_30,0);
  return;
}


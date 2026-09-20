// FUN_016c7020 @ 016c7020

void FUN_016c7020(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  local_28 = param_1;
  FUN_016c7238();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
               &cf_ck_W_eQW_SO_);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    pdVar4 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_016c73bc;
    local_60 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_40;
    local_50 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar3;
    _dispatch_async(pdVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_fW_SOeN);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}


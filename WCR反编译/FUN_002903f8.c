// FUN_002903f8 @ 002903f8

void FUN_002903f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_20 != 0;
  local_30 = param_1;
  if (bVar1) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WS_);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_20;
    puVar2 = PTR_WCRefineHelper_026ce000;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_0029064c;
    local_60 = &DAT_02579820;
    local_48 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_58 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_wcr_sendVideoAtPath_toContact_co_0269d4e0,uVar6,lVar3,&local_78);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRJ_Y);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}


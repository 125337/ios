// FUN_003d17b8 @ 003d17b8

void FUN_003d17b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    _objc_initWeak(auStack_30,local_18);
    lVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_38 = lVar1;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_003d1998;
    local_50 = &DAT_0257cd48;
    _objc_copyWeak(auStack_40,auStack_30);
    lVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdO,
               &cf__RdOSJ_YU_dkd_ONSb_Y0,&cf_Rd,&local_68,&cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_storeStrong(&local_48);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
    _objc_destroyWeak(auStack_30);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


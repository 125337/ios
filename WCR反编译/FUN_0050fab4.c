// FUN_0050fab4 @ 0050fab4

void FUN_0050fab4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined1 auStack_38 [8];
  uint local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = (DAT_028cb058 & 1) == 0;
  local_20 = param_2;
  if (bVar1) {
    _objc_initWeak(auStack_38,local_18);
    uVar2 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00510b4c;
    local_50 = &DAT_0257d8f8;
    _objc_copyWeak(auStack_48,auStack_38);
    local_40 = local_20;
    FUN_005103c4(uVar2,&local_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gybd_O_WL);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}


// _WCRefineSpecialFollowRepostMoment @ 005a4c24

void _WCRefineSpecialFollowRepostMoment(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  bVar1 = local_18 != 0;
  if (bVar1) {
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_005a4d30;
    local_30 = &DAT_025790c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    FUN_005a116c(lVar2,&local_48);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}


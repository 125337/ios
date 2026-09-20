// FUN_008432a8 @ 008432a8

void FUN_008432a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00843500();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_0082fb1c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      uVar2 = local_20;
      FUN_0082fb1c();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    pcVar3 = "WCTimeLineViewController";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       (uVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,pcVar3),
       (uVar1 & 1) == 0)) {
      local_30 = 1;
    }
    else {
      _objc_storeStrong(&DAT_026f4830,&cf_WCListView_initTableView);
      FUN_00843730(local_38);
      local_30 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}


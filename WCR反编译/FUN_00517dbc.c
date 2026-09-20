// FUN_00517dbc @ 00517dbc

void FUN_00517dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_78;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  bVar1 = DAT_028cb068 == (code *)0x0;
  if (bVar1) {
    local_78 = local_38;
  }
  else {
    local_78 = local_20;
    (*DAT_028cb068)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  uVar3 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_48;
  }
  FUN_0051890c();
  uVar2 = local_40;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  else {
    uVar3 = local_20;
    FUN_0051897c(local_20,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


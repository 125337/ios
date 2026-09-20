// FUN_00845710 @ 00845710

void FUN_00845710(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  uint local_44;
  ulong local_40;
  undefined1 local_35;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _objc_storeStrong(&DAT_026f4830,&cf_main_tab);
  uVar2 = local_18;
  FUN_00831270();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 == 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00845638();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_35 = (undefined1)uVar3;
    local_40 = (ulong)((uVar3 & 1) != 0);
    FUN_00810a08(local_18,local_20,local_40);
    local_44 = 1;
  }
  else {
    local_50 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_valueForKey__0269d128,&cf_selectedViewController);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    bVar1 = false;
    if (local_50 != 0) {
      uVar2 = local_50;
      FUN_0084548c();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 != local_18;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (!bVar1) {
      FUN_0084415c(local_28,local_20);
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}


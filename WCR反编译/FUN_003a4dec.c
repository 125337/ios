// FUN_003a4dec @ 003a4dec

void FUN_003a4dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    FUN_003672a4();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    FUN_003a4f00(local_38,*(undefined8 *)(param_1 + 0x20));
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    FUN_00367970();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}


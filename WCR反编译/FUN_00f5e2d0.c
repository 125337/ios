// FUN_00f5e2d0 @ 00f5e2d0

void FUN_00f5e2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
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
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else if (local_20 == 0) {
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00f5e478;
    local_50 = &DAT_02582318;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1,
               PTR_s_applyStraightRouteFrom_to_comple_026ac750,&local_68);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1,
               PTR_s_applyMKRoute_start_destination_t_026ac758,local_20,
               *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20));
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}


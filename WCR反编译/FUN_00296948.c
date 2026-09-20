// FUN_00296948 @ 00296948

void FUN_00296948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_00296a5c;
  local_38 = &DAT_0257b728;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  FUN_0028f980(&local_50);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}


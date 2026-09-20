// FUN_016c73bc @ 016c73bc

void FUN_016c73bc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30 = param_1;
  local_28 = param_1;
  FUN_016c7624(uVar1,*(undefined8 *)(param_1 + 0x28),&local_58,&local_60,&local_68);
  _objc_storeStrong(&local_38,local_58);
  _objc_storeStrong(&local_40,local_60);
  _objc_storeStrong(&local_48,local_68);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_50 = uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_016c7f2c;
  local_a8 = &DAT_025881d0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_80 = local_50;
  local_a0 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_40;
  local_98 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_48;
  local_90 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = uVar1;
  _dispatch_async(puVar2,&local_c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


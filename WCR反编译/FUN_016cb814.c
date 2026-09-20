// FUN_016cb814 @ 016cb814

void FUN_016cb814(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_48 = 0;
  local_30 = param_1;
  local_28 = param_1;
  FUN_016cb9f0(uVar1,*(undefined8 *)(param_1 + 0x28),&local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,local_48);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_40 = uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_016ccad4;
  local_78 = &DAT_02578f80;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_40;
  local_70 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_38;
  local_68 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = uVar3;
  _dispatch_async(puVar2,&local_90);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


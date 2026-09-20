// FUN_00701e50 @ 00701e50

void FUN_00701e50(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  byte local_47;
  byte local_46;
  long local_40;
  undefined8 local_38;
  byte local_29;
  long local_28;
  
  local_38 = 0;
  local_29 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR___dispatch_main_q_02578680;
  local_40 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_0070207c;
  local_80 = &DAT_0257f208;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_48 = local_29 & 1;
  local_70 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = *(undefined8 *)(param_1 + 0x40);
  local_47 = *(byte *)(param_1 + 0x48) & 1;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_60 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_46 = *(byte *)(param_1 + 0x49) & 1;
  local_58 = uVar3;
  _dispatch_async(puVar1,&local_98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_38,0);
  return;
}


// FUN_008f9cac @ 008f9cac

void FUN_008f9cac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_50 = 0;
  local_58 = 0;
  local_30 = param_1;
  local_28 = param_1;
  FUN_008e0574(uVar1,*(undefined8 *)(param_1 + 0x28),&local_50,&local_58);
  _objc_storeStrong(&local_38,local_50);
  _objc_storeStrong(&local_40,local_58);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_41 = (byte)uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_008f9ee4;
  local_90 = &DAT_02580db0;
  local_68 = local_41 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_40;
  local_88 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_78 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar3;
  _dispatch_async(puVar2,&local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}


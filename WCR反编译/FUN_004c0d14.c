// FUN_004c0d14 @ 004c0d14

undefined8
FUN_004c0d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pcVar1 = DAT_028cac08;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  uStack_78 = uStack_38;
  local_80 = local_40;
  uStack_68 = uStack_28;
  local_70 = local_30;
  (*pcVar1)(local_40,uStack_38,local_30,uStack_28,param_5,local_50);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_58 = param_5;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_004c27dc;
  local_a0 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_98[0] = uVar2;
  _dispatch_async(puVar3,&local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_98);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  return uVar2;
}


// FUN_00086108 @0x86108


void FUN_00086108(long param_1)



{

  undefined *puVar1;

  undefined1 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 *puStack_b0;

  undefined1 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 *puStack_78;

  undefined8 local_70;

  undefined8 *puStack_68;

  undefined8 local_60;

  code *local_58;

  code *pcStack_50;

  undefined8 local_48;

  

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0;

  local_60 = 0x3032000000;

  local_58 = FUN_00030178;

  pcStack_50 = FUN_00030188;

  local_48 = 0;

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_00086254;

  puStack_88 = &DAT_0038a580;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  puStack_68 = &local_70;

  _objc_retain(uVar3);

  local_80 = uVar3;

  puStack_78 = &local_70;

  uVar2 = FUN_000042e4(&local_a0);

  local_e0 = puVar1;

  local_d8 = 0xc2000000;

  local_d0 = FUN_000884bc;

  puStack_c8 = &DAT_0038a5e0;

  uVar4 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar4);

  uVar3 = *(undefined8 *)(param_1 + 0x30);

  local_c0 = uVar4;

  _objc_retain(uVar3);

  local_b8 = uVar3;

  puStack_b0 = &local_70;

  local_a8 = uVar2;

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_e0);

  _objc_release(local_b8);

  _objc_release(local_c0);

  _objc_release(local_80);

  __Block_object_dispose(&local_70,8);

  _objc_release(local_48);

  return;

}





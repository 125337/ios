// FUN_000c2ae0 @0xc2ae0


void FUN_000c2ae0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 uStack_40;

  undefined8 local_38;

  

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_000c2ba0;

  puStack_58 = &DAT_0038b700;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar2);

  local_38 = *(undefined8 *)(param_1 + 0x40);

  uVar3 = *(undefined8 *)(param_1 + 0x30);

  local_50 = uVar2;

  _objc_retain(uVar3);

  uStack_40 = *(undefined8 *)(param_1 + 0x38);

  local_48 = uVar3;

  FUN_00294700(uVar1,extraout_x1,1,&local_70);

  _objc_release(local_48);

  _objc_release(local_50);

  return;

}





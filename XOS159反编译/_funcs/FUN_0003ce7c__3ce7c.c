// FUN_0003ce7c @0x3ce7c


void FUN_0003ce7c(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 uStack_40;

  undefined8 local_38;

  

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_0003cf78;

  puStack_60 = &DAT_00389630;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar2);

  uVar3 = *(undefined8 *)(param_1 + 0x30);

  local_58 = uVar2;

  _objc_retain(uVar3);

  uVar5 = *(undefined8 *)(param_1 + 0x40);

  uVar4 = *(undefined8 *)(param_1 + 0x38);

  local_50 = uVar3;

  _objc_retain(*(undefined8 *)(param_1 + 0x40));

  uVar2 = *(undefined8 *)(param_1 + 0x48);

  local_48 = uVar4;

  uStack_40 = uVar5;

  _objc_retain(uVar2);

  local_38 = uVar2;

  FUN_00294700(uVar1,extraout_x1,1,&local_78);

  _objc_release(local_38);

  _objc_release(uStack_40);

  _objc_release(local_50);

  _objc_release(local_58);

  return;

}





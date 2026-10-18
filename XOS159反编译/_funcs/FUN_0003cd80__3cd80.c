// FUN_0003cd80 @0x3cd80


void FUN_0003cd80(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  local_80 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = 0xc2000000;

  local_70 = FUN_0003ce7c;

  puStack_68 = &DAT_00389660;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar1);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  local_60 = uVar1;

  local_58 = param_3;

  _objc_retain(uVar2);

  uStack_48 = *(undefined8 *)(param_1 + 0x30);

  uVar1 = *(undefined8 *)(param_1 + 0x38);

  local_50 = uVar2;

  local_40 = param_2;

  _objc_retain(uVar1);

  local_38 = uVar1;

  _objc_retain(param_2);

  _objc_retain(param_3);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

  _objc_release(local_38);

  _objc_release(local_40);

  _objc_release(local_50);

  _objc_release(local_58);

  _objc_release(local_60);

  _objc_release(param_2);

  _objc_release(param_3);

  return;

}





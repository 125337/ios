// FUN_000f95ac @0xf95ac


void FUN_000f95ac(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined1 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  undefined8 uStack_50;

  undefined8 local_48;

  undefined1 local_40;

  undefined8 local_38;

  

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  FUN_002951c0(&_OBJC_CLASS___NSURL,param_2,*(undefined8 *)(param_1 + 0x30));

  auVar4 = _objc_retainAutoreleasedReturnValue();

  local_38 = 0;

  uVar2 = FUN_002937e0(uVar1,auVar4._8_8_,uVar3,auVar4._0_8_,&local_38);

  uVar1 = local_38;

  _objc_retain(local_38);

  _objc_release(auVar4._0_8_);

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_000f96a0;

  puStack_60 = &DAT_0038c2e0;

  uVar3 = *(undefined8 *)(param_1 + 0x38);

  local_40 = uVar2;

  _objc_retain(uVar3);

  uStack_50 = *(undefined8 *)(param_1 + 0x40);

  local_48 = uVar1;

  local_58 = uVar3;

  _objc_retain(uVar1);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_78);

  _objc_release(local_48);

  _objc_release(local_58);

  _objc_release(uVar1);

  return;

}





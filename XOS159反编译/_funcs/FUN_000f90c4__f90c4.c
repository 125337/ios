// FUN_000f90c4 @0xf90c4


void FUN_000f90c4(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  undefined8 uStack_40;

  undefined1 local_38;

  

  _UIImagePNGRepresentation(*(undefined8 *)(param_1 + 0x20));

  auVar2 = _objc_retainAutoreleasedReturnValue();

  local_38 = FUN_002a6580(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_1 + 0x28),1);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_000f9174;

  puStack_50 = &DAT_0038c280;

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  _objc_retain(uVar1);

  uStack_40 = *(undefined8 *)(param_1 + 0x38);

  local_48 = uVar1;

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_48);

  _objc_release(auVar2._0_8_);

  return;

}





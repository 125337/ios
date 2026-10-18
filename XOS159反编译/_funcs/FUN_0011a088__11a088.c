// FUN_0011a088 @0x11a088


void FUN_0011a088(long param_1)



{

  dispatch_time_t dVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  dVar1 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0011a140;

  puStack_50 = &DAT_0038ca30;

  local_38 = *(undefined8 *)(param_1 + 0x30);

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar3);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  local_48 = uVar3;

  _objc_retain(uVar2);

  local_40 = uVar2;

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_40);

  _objc_release(local_48);

  return;

}





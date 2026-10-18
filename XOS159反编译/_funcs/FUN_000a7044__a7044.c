// FUN_000a7044 @0xa7044


void FUN_000a7044(long param_1,undefined8 param_2,long param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined2 local_38;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  if ((param_3 == 0) && (lVar1 = FUN_00297fa0(param_2), lVar1 != 0)) {

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_000a7144;

    puStack_58 = &DAT_0038ae60;

    local_38 = *(undefined2 *)(param_1 + 0x30);

    uVar3 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar3);

    uVar2 = *(undefined8 *)(param_1 + 0x28);

    local_50 = uVar3;

    _objc_retain(uVar2);

    local_48 = uVar2;

    _objc_retain(param_2);

    local_40 = param_2;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_70);

    _objc_release(local_40);

    _objc_release(local_48);

    _objc_release(local_50);

  }

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}





// FUN_0007ce24 @0x7ce24


void FUN_0007ce24(long param_1,undefined8 param_2,long param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 uStack_58;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  if ((param_3 == 0) && (lVar3 = FUN_00297fa0(param_2), lVar3 != 0)) {

    uVar5 = *(undefined8 *)(param_1 + 0x30);

    uVar6 = *(undefined8 *)(param_1 + 0x38);

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    uVar2 = *(undefined8 *)(param_1 + 0x28);

    _objc_retain(param_2);

    _objc_retain(uVar1);

    _objc_retain(uVar2);

    _dispatch_get_global_queue(0x11,0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc2000000;

    local_88 = FUN_000c0420;

    puStack_80 = &DAT_0038b610;

    local_78 = param_2;

    local_70 = uVar1;

    local_68 = uVar2;

    local_60 = uVar5;

    uStack_58 = uVar6;

    _objc_retain(uVar1);

    _objc_retain(uVar2);

    _dispatch_async(uVar4,&local_98);

    _objc_release(uVar4);

    _objc_release(local_68);

    _objc_release(local_70);

    _objc_release(local_78);

    _objc_release(uVar2);

    _objc_release(uVar1);

  }

  else {

    lVar3 = *(long *)(param_1 + 0x28);

    if (lVar3 != 0) {

      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);

    }

  }

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}





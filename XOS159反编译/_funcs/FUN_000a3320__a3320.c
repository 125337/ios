// FUN_000a3320 @0xa3320


void FUN_000a3320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined1 param_5,undefined8 param_6)



{

  undefined8 uVar1;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 uStack_60;

  undefined1 local_58;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  _dispatch_get_global_queue(0,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_000a37b4;

  puStack_88 = &DAT_0038ada0;

  local_80 = param_2;

  local_78 = param_3;

  local_70 = param_1;

  local_68 = param_4;

  uStack_60 = param_6;

  local_58 = param_5;

  _objc_retain(param_4);

  _objc_retain(param_1);

  _objc_retain(param_3);

  _objc_retain(param_2);

  _dispatch_async(uVar1,&local_a0);

  _objc_release(uVar1);

  _objc_release(local_68);

  _objc_release(local_70);

  _objc_release(local_78);

  _objc_release(local_80);

  _objc_release(param_4);

  _objc_release(param_1);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}





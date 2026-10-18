// FUN_0006fa64 @0x6fa64


void FUN_0006fa64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain(param_2);

  _objc_retain(param_4);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0006fb20;

  puStack_50 = &DAT_00388e30;

  local_48 = *(undefined8 *)(param_1 + 0x20);

  local_40 = param_4;

  local_38 = param_2;

  _objc_retain(param_2);

  _objc_retain(param_4);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_38);

  _objc_release(local_40);

  _objc_release(param_2);

  _objc_release(param_4);

  return;

}





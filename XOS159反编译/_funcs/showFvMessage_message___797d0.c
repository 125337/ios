// showFvMessage:message: @0x797d0


/* Function Stack Size: 0x20 bytes */



void _0x016d26c7::showFvMessage_message_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  dispatch_time_t dVar1;

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  ID local_48;

  ID local_40;

  ID local_38;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  dVar1 = _dispatch_time(0,250000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_000798a0;

  puStack_50 = &DAT_00388e30;

  local_48 = param_1;

  local_40 = param_3;

  local_38 = param_4;

  _objc_retain(param_4);

  _objc_retain(param_3);

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_38);

  _objc_release(local_40);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}





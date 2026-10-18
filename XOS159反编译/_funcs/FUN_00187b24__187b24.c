// FUN_00187b24 @0x187b24


void FUN_00187b24(undefined8 param_1,undefined8 param_2,ulong param_3)



{

  dispatch_time_t dVar1;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  (*DAT_003e8ce8)();

  FUN_00187694();

  if ((((param_3 & 1) == 0) && ((DAT_003e8d31 & 1) != 0)) && ((DAT_003e8d32 & 1) != 0)) {

    dVar1 = _dispatch_time(0,500000000);

    local_48 = PTR___NSConcreteStackBlock_003886f0;

    local_40 = 0xc0000000;

    local_38 = FUN_00187fe8;

    puStack_30 = &DAT_0038abe0;

    local_28 = param_1;

    _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&local_48);

  }

  return;

}





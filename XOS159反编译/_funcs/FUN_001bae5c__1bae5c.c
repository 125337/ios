// FUN_001bae5c @0x1bae5c


void FUN_001bae5c(long param_1)



{

  long lVar1;

  dispatch_time_t dVar2;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  FUN_001bac18();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    if (param_1 < 1) {

      _NSLog(&cf__);

    }

    else {

      dVar2 = _dispatch_time(0,5000000000);

      local_48 = PTR___NSConcreteStackBlock_003886f0;

      local_40 = 0xc0000000;

      local_38 = FUN_001bb394;

      puStack_30 = &DAT_0038a6f0;

      local_28 = param_1;

      _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_48);

    }

  }

  else {

    FUN_001ba408(0,0);

  }

  _objc_release(lVar1);

  return;

}





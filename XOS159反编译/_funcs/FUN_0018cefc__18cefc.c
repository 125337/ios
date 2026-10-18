// FUN_0018cefc @0x18cefc


void FUN_0018cefc(long param_1)



{

  dispatch_time_t dVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  dVar1 = _dispatch_time(0,2000000000);

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038df40);

  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b4e0(auVar4._0_8_,auVar4._8_8_,

                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));

    _objc_release(auVar4._0_8_);

    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);

    uVar2 = *(undefined8 *)(lVar3 + 0x28);

    *(undefined8 *)(lVar3 + 0x28) = 0;

    _objc_release(uVar2);

    return;

  }

  return;

}





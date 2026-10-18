// FUN_00004234 @0x4234


void FUN_00004234(void)



{

  undefined8 uVar1;

  long lVar2;

  

  FUN_000041f0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_sync_enter();

  if (((DAT_003e76a0 == 0) && ((DAT_003e76a8 & 1) == 0)) &&

     (lVar2 = FUN_00293860(DAT_003e7470), lVar2 != 0)) {

    DAT_003e76a8 = 1;

    _objc_sync_exit(uVar1);

    _objc_release(uVar1);

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038a500);

    return;

  }

  _objc_sync_exit(uVar1);

  _objc_release(uVar1);

  return;

}





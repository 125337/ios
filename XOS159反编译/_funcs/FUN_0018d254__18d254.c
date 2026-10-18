// FUN_0018d254 @0x18d254


void FUN_0018d254(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  void *pvVar1;

  undefined8 uVar2;

  double dVar3;

  

  _objc_retain(param_4);

  dVar3 = param_1;

  if (((DAT_003e94f0 == '\x01') &&

      (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) && (DAT_003e94b8 != 0.0)

     ) {

    dVar3 = 1.0;

    if (1.0 <= param_1 + DAT_003e94b8) {

      dVar3 = param_1 + DAT_003e94b8;

    }

  }

  (*DAT_003e94d8)(dVar3,param_2,param_3,param_4);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_4);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}





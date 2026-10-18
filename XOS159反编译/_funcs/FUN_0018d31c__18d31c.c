// FUN_0018d31c @0x18d31c


void FUN_0018d31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  void *pvVar1;

  long lVar2;

  long lVar3;

  double dVar4;

  double dVar5;

  

  _objc_retain(param_3);

  if ((DAT_003e94f0 != '\x01') ||

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 != (void *)0x0)) {

    (*DAT_003e94e0)(param_1,param_2,param_3);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    goto LAB_0018d38c;

  }

  _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

  (*DAT_003e94e0)(param_1,param_2,param_3);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _pthread_setspecific(DAT_003e94b0,(void *)0x0);

  if (lVar3 == 0) {

    lVar2 = 0;

  }

  else {

    dVar4 = (double)FUN_0029a040(lVar3);

    dVar5 = 1.0;

    if (1.0 <= dVar4 + DAT_003e94b8) {

      dVar5 = dVar4 + DAT_003e94b8;

    }

    if (DAT_003e8e48 != 0) {

      FUN_0018d628(dVar5);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 != 0) goto LAB_0018d488;

    }

    if (DAT_003e94b8 == 0.0) {

      _objc_retain(lVar3);

      lVar2 = lVar3;

    }

    else {

      _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

      FUN_002955c0(dVar5,lVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _pthread_setspecific(DAT_003e94b0,(void *)0x0);

    }

  }

LAB_0018d488:

  _objc_release(lVar3);

LAB_0018d38c:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}





// FUN_0018d178 @0x18d178


void FUN_0018d178(double param_1,double param_2,undefined8 param_3,undefined8 param_4)



{

  void *pvVar1;

  long lVar2;

  double dVar3;

  

  if ((DAT_003e94f0 == '\x01') &&

     (pvVar1 = _pthread_getspecific(DAT_003e94b0), pvVar1 == (void *)0x0)) {

    dVar3 = param_1 + DAT_003e94b8;

    param_1 = 1.0;

    if (1.0 <= dVar3) {

      param_1 = dVar3;

    }

    if (DAT_003e8e48 != 0) {

      if (*(double *)PTR__UIFontWeightSemibold_00388430 <= param_2) {

        FUN_0018d828(param_1);

        lVar2 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_0018d628(param_1);

        lVar2 = _objc_retainAutoreleasedReturnValue();

      }

      if (lVar2 != 0) goto LAB_0018d1dc;

    }

  }

  (*DAT_003e94d0)(param_1,param_2,param_3,param_4);

  _objc_retainAutoreleasedReturnValue();

LAB_0018d1dc:

  _objc_autoreleaseReturnValue();

  return;

}





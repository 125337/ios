// FUN_0010ebf8 @0x10ebf8


void FUN_0010ebf8(long param_1)



{

  long lVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  if ((param_1 != 0) && (lVar1 = FUN_00297fa0(param_1), lVar1 != 0)) {

    if (DAT_003e8240 != -1) {

      FUN_0028f2d8();

    }

    lVar1 = DAT_003e8238;

    if (DAT_003e8238 != 0) {

      auVar3 = FUN_00297fa0(param_1);

      lVar2 = FUN_002992e0(lVar1,auVar3._8_8_,param_1,0,0,auVar3._0_8_);

      lVar1 = DAT_003e8238;

      if (lVar2 != 0) {

        auVar3 = FUN_00297fa0(param_1);

        FUN_002a4540(lVar1,auVar3._8_8_,param_1,0,0,auVar3._0_8_,&cf_Wo);

        lVar1 = _objc_retainAutoreleasedReturnValue();

        goto LAB_0010eca8;

      }

    }

  }

  _objc_retain(param_1);

  lVar1 = param_1;

LAB_0010eca8:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}





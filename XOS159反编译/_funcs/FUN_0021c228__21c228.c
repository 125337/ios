// FUN_0021c228 @0x21c228


ulong FUN_0021c228(undefined8 param_1,undefined8 param_2,long param_3)



{

  uint uVar1;

  long lVar2;

  ulong uVar3;

  byte local_31;

  

  _objc_retain();

  if (DAT_003eaaf0 <= 0.0) {

    uVar3 = 0;

  }

  else if (DAT_003ead50 == '\x01') {

    local_31 = 0;

    uVar1 = FUN_00212b7c(param_1,param_2,param_3,&local_31);

    uVar3 = (ulong)(uVar1 & local_31);

  }

  else {

    lVar2 = FUN_0020eb40(param_1,param_2);

    if (0 < lVar2) {

      param_3 = lVar2;

    }

    uVar3 = FUN_00211744(param_1,param_2,param_3);

  }

  _objc_release(param_1);

  return uVar3;

}





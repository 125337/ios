// FUN_00212910 @0x212910


undefined * FUN_00212910(undefined8 param_1)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  auVar4 = FUN_00293860(DAT_003eaa20);

  if (auVar4._0_8_ == 0) {

    puVar1 = (undefined *)FUN_00214314(param_1);

  }

  else {

    puVar1 = (undefined *)FUN_00296700(DAT_003eaa20,auVar4._8_8_,param_1);

    if (puVar1 == (undefined *)0x7fffffffffffffff) {

      lVar2 = FUN_00293860(DAT_003eaa20);

      lVar3 = FUN_00214314(param_1);

      puVar1 = &UNK_00002710 + lVar2 + lVar3;

    }

  }

  _objc_release(param_1);

  return puVar1;

}





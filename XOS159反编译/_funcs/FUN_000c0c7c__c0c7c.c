// FUN_000c0c7c @0xc0c7c


void FUN_000c0c7c(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  lVar2 = *(long *)(param_1 + 0x30);

  if (*(long *)(param_1 + 0x20) == 0) {

    if (lVar2 != 0) {

                    /* WARNING: Could not recover jumptable at 0x000c0d1c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

      (**(code **)(lVar2 + 0x10))(lVar2,0,*(undefined8 *)(param_1 + 0x28));

      return;

    }

  }

  else if (lVar2 != 0) {

    FUN_00290de0();

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a44a0(&cf_mp3_,auVar3._8_8_,auVar3._0_8_);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);

    _objc_release(uVar1);

    _objc_release(auVar3._0_8_);

    return;

  }

  return;

}





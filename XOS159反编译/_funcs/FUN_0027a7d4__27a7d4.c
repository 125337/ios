// FUN_0027a7d4 @0x27a7d4


void FUN_0027a7d4(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  auVar3 = FUN_00293860(*(undefined8 *)(param_1 + 0x20));

  uVar1 = auVar3._8_8_;

  if (auVar3._0_8_ != 0) {

    uVar2 = 0;

    do {

      FUN_00299500(*(undefined8 *)(param_1 + 0x20),uVar1,uVar2);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(*(undefined8 *)(param_1 + 0x28),auVar3._8_8_,uVar2);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      auVar4 = FUN_002a5a20();

      FUN_00295360(auVar3._0_8_,auVar4._8_8_,auVar4._0_8_);

      _objc_release(uVar1);

      _objc_release(auVar3._0_8_);

      uVar2 = uVar2 + 1;

      auVar3 = FUN_00293860(*(undefined8 *)(param_1 + 0x20));

      uVar1 = auVar3._8_8_;

    } while (uVar2 < auVar3._0_8_);

  }

  return;

}





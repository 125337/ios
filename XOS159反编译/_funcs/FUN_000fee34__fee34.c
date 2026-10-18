// FUN_000fee34 @0xfee34


void FUN_000fee34(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined1 auVar8 [16];

  

  (*DAT_003e7f70)();

  FUN_000ff404(param_4);

  FUN_000ff4a8();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_002a6280(param_4);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 != 0) && (uVar3 = _objc_opt_respondsToSelector(lVar2,"isSender"), (uVar3 & 1) != 0))

    {

      uVar4 = FUN_00297a80(lVar2);

      FUN_000822c8(param_4);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if ((lVar5 != 0) && (FUN_00295600(lVar5), 0.0 < param_3)) {

        uVar6 = FUN_00104f14(param_4,lVar2);

        FUN_00101340(uVar4,uVar6,0);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        lVar7 = auVar8._0_8_;

        if (lVar7 != 0) {

          FUN_0029ec00(lVar5,auVar8._8_8_,lVar7);

        }

        FUN_00110b08(lVar5,uVar4,uVar6,0);

        _objc_release(lVar7);

      }

      _objc_release(lVar5);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  return;

}





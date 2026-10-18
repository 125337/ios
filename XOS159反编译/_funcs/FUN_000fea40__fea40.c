// FUN_000fea40 @0xfea40


void FUN_000fea40(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  

  (*DAT_003e7f50)();

  FUN_000ff404(param_4);

  FUN_002a6280(param_4);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_000822c8(param_4);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 != 0) && (FUN_00295600(lVar3), 0.0 < param_3)) {

    FUN_000ff4a8();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (((lVar4 == 0) ||

        ((lVar2 == 0 || (uVar5 = _objc_opt_respondsToSelector(lVar2,"isSender"), (uVar5 & 1) == 0)))

        ) || (((DAT_003e7ed8 & 1) == 0 && (iVar1 = FUN_000ff8f8(lVar2), iVar1 != 0)))) {

      FUN_00104dfc(lVar3,0);

    }

    else {

      uVar6 = FUN_00297a80(lVar2);

      uVar7 = FUN_00104f14(param_4,lVar2);

      FUN_00101340(uVar6,uVar7,0);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00104dfc(lVar3,uVar8);

      FUN_00110b08(lVar3,uVar6,uVar7,0);

      _objc_release(uVar8);

    }

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  return;

}





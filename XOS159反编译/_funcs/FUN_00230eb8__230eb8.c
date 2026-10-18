// FUN_00230eb8 @0x230eb8


long FUN_00230eb8(void)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  

  FUN_002987e0(&_OBJC_CLASS___UIScreen);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_respondsToSelector(uVar1,"maximumFramesPerSecond");

  if ((uVar2 & 1) == 0) {

    lVar3 = 0x3c;

  }

  else {

    lVar3 = FUN_00298ac0(uVar1);

    if (lVar3 < 0x3d) {

      lVar3 = 0x3c;

    }

  }

  _objc_release(uVar1);

  return lVar3;

}





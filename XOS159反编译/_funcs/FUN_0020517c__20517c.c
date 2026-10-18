// FUN_0020517c @0x20517c


void FUN_0020517c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  if ((DAT_003eaa30 == '\x01') && (uVar2 = FUN_0021af90(param_1), (uVar2 & 1) != 0)) {

    FUN_002115b0(param_1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00299420(&_OBJC_CLASS___NSNumber,auVar4._8_8_,param_4);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00293560(auVar4._0_8_,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    if (iVar1 == 0) {

      (*DAT_003eac20)(param_1,param_2,param_3,param_4);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      iVar1 = FUN_0021c228(param_1,param_4,0);

      if (iVar1 == 0) {

        uVar3 = 0;

      }

      else {

        _objc_alloc(&_OBJC_CLASS___UIView);

        uVar3 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar3,auVar5._8_8_,auVar5._0_8_);

        _objc_release(auVar5._0_8_);

      }

    }

    _objc_release(auVar4._0_8_);

  }

  else {

    (*DAT_003eac20)(param_1,param_2,param_3,param_4);

    uVar3 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}





// FUN_00204de8 @0x204de8


void FUN_00204de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  if ((DAT_003eaa30 != '\x01') || (auVar6 = FUN_0021af90(param_1), (auVar6._0_8_ & 1) == 0)) {

    (*DAT_003eac18)(param_1,param_2,param_3,param_4);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    goto LAB_002050a8;

  }

  FUN_002a4de0(param_1,auVar6._8_8_,param_3,param_4);

  FUN_002115b0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00299420(&_OBJC_CLASS___NSNumber,auVar6._8_8_,param_4);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00293560(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  if (iVar1 == 0) {

    (*DAT_003eac18)(param_1,param_2,param_3,param_4);

    uVar4 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    if (DAT_003eaac8 - 5U < 2) {

      FUN_0020e91c(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if ((lVar2 == 0) || (lVar3 = FUN_002974a0(lVar2), lVar3 != param_4)) {

        iVar1 = FUN_0021c15c(param_1,param_4,0);

        if (iVar1 == 0) {

          uVar4 = 0;

          goto LAB_00205098;

        }

        _objc_alloc(&_OBJC_CLASS___UIView);

        uVar4 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar7._0_8_;

        FUN_0029cf60(uVar4,auVar7._8_8_,uVar5);

      }

      else {

        _objc_alloc(&_OBJC_CLASS___UIView);

        uVar4 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar7._0_8_;

        FUN_0029cf60(uVar4,auVar7._8_8_,uVar5);

      }

      _objc_release(uVar5);

    }

    else {

      iVar1 = FUN_0021c15c(param_1,param_4,0);

      if (iVar1 == 0) {

        iVar1 = FUN_0021bf00(param_1,param_4);

        if (iVar1 == 0) {

          uVar4 = 0;

          goto LAB_002050a0;

        }

        _objc_alloc(&_OBJC_CLASS___UIView);

        uVar4 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        lVar2 = auVar7._0_8_;

        FUN_0029cf60(uVar4,auVar7._8_8_,lVar2);

      }

      else {

        _objc_alloc(&_OBJC_CLASS___UIView);

        uVar4 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        lVar2 = auVar7._0_8_;

        FUN_0029cf60(uVar4,auVar7._8_8_,lVar2);

      }

    }

LAB_00205098:

    _objc_release(lVar2);

  }

LAB_002050a0:

  _objc_release(auVar6._0_8_);

LAB_002050a8:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}





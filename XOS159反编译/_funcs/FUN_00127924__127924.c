// FUN_00127924 @0x127924


undefined1  [16]

FUN_00127924(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  undefined8 uVar5;

  undefined8 uVar6;

  

  uVar6 = param_2._8_8_;

  uVar5 = param_2._0_8_;

  _objc_retain();

  _objc_retain(param_4);

  if (param_3 != 0) {

    FUN_002a4880(param_4);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

      uVar3 = _objc_opt_isKindOfClass(param_3,uVar2);

      _objc_release(lVar1);

      if ((uVar3 & 1) != 0) {

        FUN_002a4880(param_4);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_00295600(param_4);

        FUN_00293720(uVar2,extraout_x1,param_3);

        _objc_release(uVar2);

        goto LAB_001279d4;

      }

    }

  }

  FUN_00295600(param_4);

LAB_001279d4:

  _objc_release(param_4);

  _objc_release(param_3);

  auVar4._8_8_ = uVar6;

  auVar4._0_8_ = uVar5;

  return auVar4;

}





// FUN_00204c5c @0x204c5c


undefined1  [16]

FUN_00204c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  ulong uVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  if ((DAT_003eaa30 == '\x01') && (auVar5 = FUN_0021af90(param_1), (auVar5._0_8_ & 1) != 0)) {

    uVar2 = FUN_002a4de0(param_1,auVar5._8_8_,param_3,param_4);

    FUN_002115b0(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00299420(&_OBJC_CLASS___NSNumber,auVar5._8_8_,param_4);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00293560(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    if (iVar1 == 0) {

      auVar6 = (*DAT_003eac10)(param_1,param_2,param_3,param_4);

    }

    else {

      iVar1 = FUN_0021c228(param_1,param_4,uVar2);

      uVar4 = DAT_003eaaf0;

      if (iVar1 == 0) {

        uVar4 = 0x10000000000000;

      }

      auVar6._8_8_ = 0;

      auVar6._0_8_ = uVar4;

    }

    uVar2 = auVar6._8_8_;

    _objc_release(auVar5._0_8_);

    auVar5._8_8_ = uVar2;

    auVar5._0_8_ = auVar6._0_8_;

  }

  else {

    auVar5 = (*DAT_003eac10)(param_1,param_2,param_3,param_4);

  }

  uVar2 = auVar5._8_8_;

  _objc_release(param_3);

  auVar3._8_8_ = uVar2;

  auVar3._0_8_ = auVar5._0_8_;

  return auVar3;

}





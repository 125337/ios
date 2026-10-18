// FUN_00212b7c @0x212b7c


undefined8 FUN_00212b7c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)



{

  int iVar1;

  undefined1 uVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,&DAT_003ead88);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299400(&_OBJC_CLASS___NSNumber,auVar7._8_8_,param_2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar8 = _objc_opt_isKindOfClass(uVar4,uVar5);

  if ((auVar8._0_8_ & 1) != 0) {

    FUN_00299540(uVar4,auVar8._8_8_,&cf_v);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_002a5a00();

    iVar1 = DAT_003eaab4;

    _objc_release(uVar5);

    if (iVar3 == iVar1) {

      uVar5 = extraout_x1;

      if (0 < param_3) {

        FUN_00299540(uVar4,extraout_x1,&cf_raw);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar6 = FUN_002974a0();

        _objc_release(uVar5);

        uVar5 = extraout_x1_00;

        if (lVar6 != param_3) goto LAB_00212cc8;

      }

      FUN_00299540(uVar4,uVar5,&cf_skip);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar2 = FUN_002924e0();

      *param_4 = uVar2;

      _objc_release(uVar5);

      uVar5 = 1;

      goto LAB_00212ccc;

    }

  }

LAB_00212cc8:

  uVar5 = 0;

LAB_00212ccc:

  _objc_release(uVar4);

  _objc_release(auVar7._0_8_);

  _objc_release(param_1);

  return uVar5;

}





// FUN_0013222c @0x13222c


void FUN_0013222c(long param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  long lVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 == 0) goto LAB_001323f0;

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) == 0) {

LAB_001322f8:

    _objc_getAssociatedObject(param_1,&DAT_0030e548);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar7._0_8_;

    uVar3 = FUN_002977c0(lVar6,auVar7._8_8_,param_2);

    if ((uVar3 & 1) == 0) {

      _objc_setAssociatedObject(param_1,&DAT_0030e548,param_2,1);

      auVar7 = _objc_opt_respondsToSelector(param_1,"setTextColor:");

      if ((auVar7._0_8_ & 1) != 0) {

        FUN_002a1da0(param_1,auVar7._8_8_,param_2);

      }

      uVar3 = _objc_opt_respondsToSelector(param_1,"attributedText");

      if (((uVar3 & 1) != 0) &&

         (uVar3 = _objc_opt_respondsToSelector(param_1,"setAttributedText:"), (uVar3 & 1) != 0)) {

        FUN_00291ee0(param_1);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00297fa0();

        if (lVar4 != 0) {

          uVar5 = FUN_00299020(uVar2);

          auVar7 = FUN_00297fa0();

          FUN_00291060(uVar5,auVar7._8_8_,

                       *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360,param_2,0,

                       auVar7._0_8_);

          FUN_0029cd60(param_1,extraout_x1,uVar5);

          _objc_release(uVar5);

        }

        _objc_release(uVar2);

      }

    }

  }

  else {

    _objc_retain(param_1);

    FUN_001311b4(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002977c0(auVar7._0_8_,auVar7._8_8_,param_2);

    _objc_release(auVar7._0_8_);

    if (iVar1 == 0) {

      _objc_release(param_1);

      goto LAB_001322f8;

    }

    _objc_getAssociatedObject(param_1,&DAT_0030e548);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    lVar6 = param_1;

    if (lVar4 == 0) {

      _objc_setAssociatedObject(param_1,&DAT_0030e548,param_2,1);

    }

  }

  _objc_release(lVar6);

LAB_001323f0:

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}





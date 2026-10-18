// FUN_000c0fb0 @0xc0fb0


void FUN_000c0fb0(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  char *pcVar9;

  undefined1 auVar10 [16];

  

  _objc_retain();

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(param_1,auVar10._8_8_,auVar10._0_8_);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_1);

  _objc_release(auVar10._0_8_);

  lVar2 = FUN_00297fa0(uVar1);

  if (lVar2 == 0) {

    uVar3 = 0;

    goto LAB_000c123c;

  }

  uVar3 = _objc_getClass("MMThemeManager");

  pcVar9 = "sharedInstance";

  auVar10 = _objc_opt_respondsToSelector(uVar3,"sharedInstance");

  uVar4 = auVar10._8_8_;

  if ((auVar10._0_8_ & 1) == 0) {

    pcVar9 = "shareInstance";

    auVar10 = _objc_opt_respondsToSelector(uVar3,"shareInstance");

    uVar4 = auVar10._8_8_;

    if ((auVar10._0_8_ & 1) != 0) goto LAB_000c1070;

    pcVar9 = "defaultManager";

    auVar10 = _objc_opt_respondsToSelector(uVar3,"defaultManager");

    uVar4 = auVar10._8_8_;

    if ((auVar10._0_8_ & 1) != 0) goto LAB_000c1070;

    uVar4 = 0;

  }

  else {

LAB_000c1070:

    FUN_00299c80(uVar3,uVar4,pcVar9);

    uVar4 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00292400(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  uVar7 = _objc_opt_respondsToSelector(uVar4,"svgImageNamed:size:color:alpha:angle:ignoreNotFound:")

  ;

  uVar5 = uVar4;

  if (((uVar7 & 1) == 0) &&

     (uVar7 = _objc_opt_respondsToSelector

                        (uVar3,"svgImageNamed:size:color:alpha:angle:ignoreNotFound:"),

     uVar5 = uVar3, (uVar7 & 1) == 0)) {

    uVar7 = _objc_opt_respondsToSelector(uVar4,"svgImageNamed:size:color:");

    uVar5 = uVar4;

    if (((uVar7 & 1) != 0) ||

       (uVar7 = _objc_opt_respondsToSelector(uVar3,"svgImageNamed:size:color:"), uVar5 = uVar3,

       (uVar7 & 1) != 0)) {

      _objc_msgSend(0x4038000000000000,0x4038000000000000,uVar5,"svgImageNamed:size:color:",uVar1,

                    uVar6);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      goto LAB_000c112c;

    }

LAB_000c1134:

    auVar10 = _objc_opt_respondsToSelector(uVar4,"imageNamed:");

    uVar8 = auVar10._8_8_;

    uVar5 = uVar4;

    if (((auVar10._0_8_ & 1) != 0) ||

       (auVar10 = _objc_opt_respondsToSelector(uVar3,"imageNamed:"), uVar8 = auVar10._8_8_,

       uVar5 = uVar3, (auVar10._0_8_ & 1) != 0)) {

      FUN_00299ca0(uVar5,uVar8,"imageNamed:",uVar1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      if (auVar10._0_8_ != 0) goto LAB_000c1194;

    }

    uVar3 = 0;

  }

  else {

    _objc_msgSend(0x4038000000000000,0x4038000000000000,0x3ff0000000000000,uVar5,

                  "svgImageNamed:size:color:alpha:angle:ignoreNotFound:",uVar1,uVar6,0,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

LAB_000c112c:

    if (auVar10._0_8_ == 0) goto LAB_000c1134;

LAB_000c1194:

    FUN_00296620(auVar10._0_8_,auVar10._8_8_,1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar10._0_8_);

  }

  _objc_release(uVar6);

  _objc_release(uVar4);

LAB_000c123c:

  _objc_release(uVar1);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}





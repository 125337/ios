// numberOfSectionsInTableView: @0x10884


/* Function Stack Size: 0x18 bytes */



long_long _0x2f19de29::numberOfSectionsInTableView_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  long lVar2;

  long_long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  lVar2 = FUN_002a4e60(param_3);

  if (lVar2 == 0x3e9) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._0_8_;

    iVar1 = FUN_002924c0(uVar4,auVar5._8_8_,&cf_coverFunctionEnabled);

    lVar3 = 8;

    if (iVar1 == 0) {

      lVar3 = 4;

    }

  }

  else {

    lVar2 = FUN_002a4e60(param_3);

    if (lVar2 != 0x3ea) {

      lVar2 = FUN_002a4e60(param_3);

      if (lVar2 != 0x3eb) {

        lVar2 = FUN_002a4e60(param_3);

        if (lVar2 == 0x3ec) {

LAB_00010974:

          lVar3 = 1;

          goto LAB_00010930;

        }

        lVar2 = FUN_002a4e60(param_3);

        if (lVar2 == 0x3ed) {

          lVar3 = 0xb;

          goto LAB_00010930;

        }

        lVar2 = FUN_002a4e60(param_3);

        if (lVar2 != 0x3ee) {

          lVar2 = FUN_002a4e60(param_3);

          if (lVar2 != 0x3ef) {

            lVar2 = FUN_002a4e60(param_3);

            if (lVar2 == 0x3f0) {

              lVar3 = 5;

              goto LAB_00010930;

            }

            lVar2 = FUN_002a4e60(param_3);

            if (lVar2 == 0x3f1) {

              FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

              auVar5 = _objc_retainAutoreleasedReturnValue();

              iVar1 = FUN_002924c0(auVar5._0_8_,auVar5._8_8_,&cf_xzyBubbleShadowEnabled);

              _objc_release(auVar5._0_8_);

              lVar3 = 4;

              if (iVar1 == 0) {

                lVar3 = 1;

              }

              goto LAB_00010930;

            }

            lVar2 = FUN_002a4e60(param_3);

            if (lVar2 != 0x3f2) {

              lVar2 = FUN_002a4e60(param_3);

              if ((lVar2 != 0x3f4) && (lVar2 = FUN_002a4e60(param_3), lVar2 != 0x3f3)) {

                FUN_002a4e60(param_3);

                lVar3 = 2;

                goto LAB_00010930;

              }

              goto LAB_00010974;

            }

          }

          lVar3 = 6;

          goto LAB_00010930;

        }

      }

      lVar3 = 3;

      goto LAB_00010930;

    }

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._0_8_;

    iVar1 = FUN_002924c0(uVar4,auVar5._8_8_,&cf_mesMsgMergeEnabled);

    lVar3 = 7;

    if (iVar1 == 0) {

      lVar3 = 1;

    }

  }

  _objc_release(uVar4);

LAB_00010930:

  _objc_release(param_3);

  return lVar3;

}





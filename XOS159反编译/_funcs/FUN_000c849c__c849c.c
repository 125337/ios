// FUN_000c849c @0xc849c


undefined8 FUN_000c849c(undefined8 param_1)



{

  bool bVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  cfstringStruct *pcVar7;

  cfstringStruct *pcVar8;

  undefined8 extraout_x1;

  ulong uVar9;

  undefined1 auVar10 [16];

  

  _objc_retain();

  FUN_002a4880(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    lVar3 = 0;

  }

  else {

    uVar9 = 0;

    do {

      _objc_opt_class(lVar3);

      _NSStringFromClass();

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_00293580(auVar10._0_8_,auVar10._8_8_,&cf_NewMainFrameRightTopMenuBtn);

      _objc_release(auVar10._0_8_);

      if ((uVar4 & 1) != 0) {

        uVar6 = 1;

        goto LAB_000c86ac;

      }

      FUN_002a4880(lVar3);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar3);

      lVar3 = lVar5;

    } while ((lVar5 != 0) && (bVar1 = uVar9 < 4, uVar9 = uVar9 + 1, bVar1));

  }

  FUN_00290e20(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002984e0();

  pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar2 = &cf___;

  if (pcVar7 != (cfstringStruct *)0x0) {

    pcVar2 = pcVar7;

  }

  _objc_retain(pcVar2);

  _objc_release(pcVar7);

  _objc_release(uVar6);

  FUN_00293e00(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002984e0();

  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar7 = &cf___;

  if (pcVar8 != (cfstringStruct *)0x0) {

    pcVar7 = pcVar8;

  }

  _objc_retain(pcVar7);

  _objc_release(pcVar8);

  _objc_release(uVar6);

  auVar10 = FUN_00293580(pcVar2,extraout_x1,&cf__wc);

  if ((auVar10._0_8_ & 1) == 0) {

    auVar10 = FUN_00293580(pcVar7,auVar10._8_8_,&cf__wc);

    if ((auVar10._0_8_ & 1) == 0) {

      auVar10 = FUN_00293580(pcVar2,auVar10._8_8_,&cf_shortcut);

      if ((auVar10._0_8_ & 1) == 0) {

        auVar10 = FUN_00293580(pcVar2,auVar10._8_8_,&cf_0000000);

        if ((auVar10._0_8_ & 1) == 0) {

          auVar10 = FUN_00293580(pcVar2,auVar10._8_8_,&cf__);

          if ((auVar10._0_8_ & 1) == 0) {

            auVar10 = FUN_00293580(pcVar2,auVar10._8_8_,&cf__);

            if ((auVar10._0_8_ & 1) == 0) {

              auVar10 = FUN_00293580(pcVar7,auVar10._8_8_,&cf_shortcut);

              if ((auVar10._0_8_ & 1) == 0) {

                auVar10 = FUN_00293580(pcVar7,auVar10._8_8_,&cf_0000000);

                if ((auVar10._0_8_ & 1) == 0) {

                  auVar10 = FUN_00293580(pcVar7,auVar10._8_8_,&cf__);

                  if ((auVar10._0_8_ & 1) == 0) {

                    uVar6 = FUN_00293580(pcVar7,auVar10._8_8_,&cf__);

                    goto LAB_000c8690;

                  }

                }

              }

            }

          }

        }

      }

    }

  }

  uVar6 = 1;

LAB_000c8690:

  _objc_release(pcVar7);

  _objc_release(pcVar2);

LAB_000c86ac:

  _objc_release(lVar3);

  _objc_release(param_1);

  return uVar6;

}





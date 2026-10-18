// FUN_00123948 @0x123948


undefined8 FUN_00123948(long param_1)



{

  uint uVar1;

  uint uVar2;

  uint uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  FUN_0011a5d0();

  uVar8 = 0;

  if (((param_1 == 0) || ((DAT_003e8321 & 1) == 0)) || ((DAT_003e8322 & 1) == 0)) goto LAB_00123b88;

  uVar4 = FUN_00191b50(param_1);

  if (((uVar4 & 1) != 0) ||

     ((uVar4 = _objc_opt_respondsToSelector(param_1,"isSender"), (uVar4 & 1) != 0 &&

      (uVar4 = FUN_00297a80(param_1), (uVar4 & 1) != 0)))) {

    uVar8 = 0;

    goto LAB_00123b88;

  }

  uVar4 = _objc_opt_respondsToSelector(param_1,"messageWrap");

  if ((uVar4 & 1) == 0) {

    lVar5 = 0;

LAB_00123b7c:

    uVar8 = 0;

  }

  else {

    FUN_00298ce0(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if ((lVar5 == 0) || (uVar4 = FUN_00123bd8(lVar5), (uVar4 & 1) == 0)) goto LAB_00123b7c;

    uVar1 = FUN_00004788(param_1);

    uVar2 = FUN_000048dc(param_1);

    uVar3 = FUN_00005168(param_1);

    uVar8 = 0;

    if ((((uVar2 & uVar1 | uVar3 ^ 0xffffffff) & 1) != 0) && (((uVar2 ^ 1 | uVar1) & 1) != 0)) {

      lVar6 = _objc_getClass("TextMessageSubViewModel");

      if ((lVar6 != 0) && (auVar9 = _objc_opt_isKindOfClass(param_1), (auVar9._0_8_ & 1) != 0)) {

        FUN_002a6080(param_1,auVar9._8_8_,&cf_parentModel);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if ((lVar6 != 0) &&

           (auVar9 = _objc_opt_respondsToSelector(lVar6,"subViewModels"), (auVar9._0_8_ & 1) != 0))

        {

          FUN_002a6080(lVar6,auVar9._8_8_,&cf_subViewModels);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          uVar4 = FUN_00293860();

          if (uVar4 < 2) {

            _objc_release(uVar8);

          }

          else {

            FUN_00295440(uVar8);

            lVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            _objc_release(uVar8);

            if (lVar7 != param_1) {

              _objc_release(lVar6);

              goto LAB_00123b7c;

            }

          }

        }

        _objc_release(lVar6);

      }

      uVar8 = 1;

    }

  }

  _objc_release(lVar5);

LAB_00123b88:

  _objc_release(param_1);

  return uVar8;

}





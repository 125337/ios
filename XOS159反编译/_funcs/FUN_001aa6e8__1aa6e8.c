// FUN_001aa6e8 @0x1aa6e8


undefined1  [16] FUN_001aa6e8(long param_1)



{

  long *plVar1;

  byte bVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  double dVar9;

  double dVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  

  _objc_retain();

  uVar3 = FUN_0019ec90(param_1);

  dVar10 = 0.0;

  uVar11 = 0;

  if ((uVar3 & 1) != 0) {

    uVar4 = FUN_00191330(param_1);

    uVar11 = FUN_00191d84(param_1);

    FUN_001a029c(param_1,uVar4,uVar11);

    _objc_retain(param_1);

    if ((param_1 == 0) ||

       (uVar3 = _objc_opt_respondsToSelector(param_1,"isShowChatRoomDisplayName"), (uVar3 & 1) == 0)

       ) {

      _objc_release(param_1);

      dVar9 = 0.0;

      bVar2 = 1;

    }

    else {

      bVar2 = _objc_msgSend(param_1,"isShowChatRoomDisplayName");

      _objc_release(param_1);

      dVar9 = 0.0;

      if ((bVar2 & 1) == 0) {

        dVar9 = 13.0;

      }

    }

    dVar10 = 13.0;

    if ((int)uVar4 == 0 && (int)uVar11 == 0) {

      dVar10 = dVar9;

    }

    dVar10 = dVar10 + DAT_003e6ec0;

    uVar11 = 0;

    plVar1 = &DAT_003e95b0;

    if ((int)uVar4 == 0) {

      plVar1 = &DAT_003e95b8;

    }

    if (DAT_003e95d0 != 0) {

      lVar8 = *plVar1;

      auVar12 = _objc_opt_isKindOfClass(param_1);

      if ((auVar12._0_8_ & 1) != 0) {

        FUN_002a6080(param_1,auVar12._8_8_,&cf_parentModel);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          auVar12 = _objc_opt_respondsToSelector(lVar5,"subViewModels");

          if ((auVar12._0_8_ & 1) != 0) {

            FUN_002a6080(lVar5,auVar12._8_8_,&cf_subViewModels);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            uVar3 = FUN_00293860();

            if (1 < uVar3) {

              FUN_00295440(uVar4);

              lVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              FUN_00297d80(uVar4);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar8 == 1) {

                dVar9 = dVar10 + 13.0;

                if ((bVar2 & 1) == 0) {

                  dVar9 = dVar10;

                }

                if (lVar7 != param_1) {

                  dVar9 = 0.0;

                }

                dVar10 = dVar9 + -13.0;

                if ((bVar2 & 1 & lVar6 == param_1) == 0) {

                  dVar10 = dVar9;

                }

                uVar11 = 0;

              }

              else {

                uVar11 = 0;

                if (lVar6 != param_1) {

                  dVar10 = 0.0;

                  uVar11 = 0;

                }

              }

            }

            _objc_release(uVar4);

          }

        }

        _objc_release(lVar5);

      }

    }

  }

  _objc_release(param_1);

  auVar12._8_8_ = uVar11;

  auVar12._0_8_ = dVar10;

  return auVar12;

}





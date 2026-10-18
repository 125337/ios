// FUN_00127530 @0x127530


undefined8 FUN_00127530(long param_1,double *param_2)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  double dVar8;

  double dVar9;

  undefined1 auVar10 [16];

  double local_68;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      local_68 = 0.0;

      iVar1 = FUN_00191fd0(param_1,&local_68);

      if (((iVar1 != 0) && (dVar9 = 0.001, 0.001 <= ABS(local_68))) &&

         (uVar3 = _objc_opt_respondsToSelector(param_1,"viewModel"), (uVar3 & 1) != 0)) {

        auVar10 = _objc_opt_respondsToSelector(param_1,"getHeadImageView");

        if ((auVar10._0_8_ & 1) != 0) {

          FUN_00299c80(param_1,auVar10._8_8_,"viewModel");

          lVar4 = _objc_retainAutoreleasedReturnValue();

          if ((lVar4 == 0) ||

             ((uVar3 = _objc_opt_respondsToSelector(lVar4,"isSender"), (uVar3 & 1) != 0 &&

              (uVar3 = FUN_00297a80(lVar4), (uVar3 & 1) != 0)))) {

            uVar2 = 0;

          }

          else {

            uVar3 = _objc_opt_respondsToSelector(lVar4,"messageWrap");

            if ((uVar3 & 1) == 0) {

              lVar5 = 0;

LAB_001277c0:

              uVar2 = 0;

            }

            else {

              FUN_00298ce0(lVar4);

              lVar5 = _objc_retainAutoreleasedReturnValue();

              if ((lVar5 == 0) || (uVar3 = FUN_00123bd8(lVar5), (uVar3 & 1) != 0))

              goto LAB_001277c0;

              FUN_002959c0(param_1);

              lVar6 = _objc_retainAutoreleasedReturnValue();

              if (lVar6 == 0) {

LAB_001276e8:

                uVar2 = 0;

              }

              else {

                FUN_002a4880(lVar6);

                lVar7 = _objc_retainAutoreleasedReturnValue();

                if (lVar7 == 0) goto LAB_001276e8;

                FUN_00295600(lVar6);

                uVar3 = _CGRectIsEmpty();

                _objc_release(lVar7);

                if ((uVar3 & 1) != 0) goto LAB_001276e8;

                FUN_002a4880(lVar6);

                uVar2 = _objc_retainAutoreleasedReturnValue();

                FUN_00295600(lVar6);

                FUN_00293720(uVar2,extraout_x1,param_1);

                _objc_release(uVar2);

                dVar8 = 0.0;

                if (0.0 <= dVar9 + -4.0) {

                  dVar8 = dVar9 + -4.0;

                }

                *param_2 = dVar8;

                uVar2 = 1;

              }

              _objc_release(lVar6);

            }

            _objc_release(lVar5);

          }

          _objc_release(lVar4);

          goto LAB_0012761c;

        }

      }

    }

  }

  uVar2 = 0;

LAB_0012761c:

  _objc_release(param_1);

  return uVar2;

}





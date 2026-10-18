// FUN_000bbadc @0xbbadc


bool FUN_000bbadc(long param_1)



{

  bool bVar1;

  uint uVar2;

  int iVar3;

  int iVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  ulong uVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 extraout_x1;

  undefined1 auVar17 [16];

  long local_90;

  uint local_78;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar5 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar6 = _objc_opt_isKindOfClass(param_1,uVar5);

    if ((uVar6 & 1) != 0) {

      FUN_000839f4(param_1);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        bVar1 = false;

      }

      else {

        FUN_000a8b40(param_1);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        auVar17 = _objc_opt_respondsToSelector(lVar8,"getArrMessageNodeData");

        uVar5 = auVar17._8_8_;

        if ((auVar17._0_8_ & 1) == 0) {

LAB_000bbb7c:

          FUN_002a6080(lVar8,uVar5,&cf_m_arrMessageNodeData);

          lVar9 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_002957a0(lVar8);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar17._8_8_;

          lVar9 = auVar17._0_8_;

          if (lVar9 == 0) goto LAB_000bbb7c;

        }

        uVar5 = _objc_opt_class(&_OBJC_CLASS___NSArray);

        uVar6 = _objc_opt_isKindOfClass(lVar9,uVar5);

        if ((uVar6 & 1) == 0) {

LAB_000bbc20:

          bVar1 = false;

        }

        else {

          auVar17 = FUN_00293860(lVar9);

          if (auVar17._0_8_ == 0) goto LAB_000bbc20;

          uVar6 = FUN_00296720(lVar9,auVar17._8_8_,lVar7);

          _objc_getAssociatedObject(lVar7,PTR_LOOP_003e64b0);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          auVar17 = FUN_00297fa0(DAT_003e7488);

          if (auVar17._0_8_ == 0) {

            if (lVar8 != 0) goto LAB_000bbc34;

LAB_000bbcc0:

            if (uVar6 == 0x7fffffffffffffff) {

              iVar3 = FUN_000b3dcc(lVar7);

              if (iVar3 != 0) {

                uVar6 = 0;

                while( true ) {

                  auVar17 = FUN_00293860(lVar9);

                  if (auVar17._0_8_ <= uVar6) break;

                  FUN_00299500(lVar9,auVar17._8_8_,uVar6);

                  uVar10 = _objc_retainAutoreleasedReturnValue();

                  FUN_000856e8();

                  lVar11 = _objc_retainAutoreleasedReturnValue();

                  if (lVar11 == 0) {

                    iVar4 = 0;

                  }

                  else {

                    iVar4 = FUN_00298740(lVar11);

                  }

                  _objc_release(lVar11);

                  _objc_release(uVar10);

                  if (iVar4 == iVar3) {

                    if (uVar6 != 0x7fffffffffffffff) goto LAB_000bbd5c;

                    break;

                  }

                  uVar6 = uVar6 + 1;

                }

              }

              goto LAB_000bbdc0;

            }

LAB_000bbd5c:

            uVar12 = FUN_00293860(lVar9);

            uVar6 = uVar6 + 1;

            if (uVar12 <= uVar6) goto LAB_000bbdc0;

            uVar2 = FUN_000b11cc(param_1);

            FUN_000856e8(lVar7);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            if (((lVar11 == 0) || (uVar12 = FUN_00192180(lVar7), (uVar12 & 1) != 0)) ||

               (uVar12 = FUN_00192218(uVar2), (uVar12 & 1) != 0)) {

              bVar1 = false;

            }

            else {

              local_90 = 0;

              while( true ) {

                auVar17 = FUN_00293860(lVar9);

                if (auVar17._0_8_ <= uVar6) break;

                FUN_00299500(lVar9,auVar17._8_8_,uVar6);

                lVar13 = _objc_retainAutoreleasedReturnValue();

                if ((lVar13 == 0) || (uVar12 = FUN_000af458(lVar13), (uVar12 & 1) != 0)) {

LAB_000bc0b4:

                  _objc_release(lVar13);

                  break;

                }

                uVar12 = _objc_opt_respondsToSelector(lVar13,"isSender");

                if ((uVar12 & 1) == 0) {

                  local_78 = 0;

                }

                else {

                  local_78 = FUN_00297a80(lVar13);

                }

                FUN_000856e8(lVar13);

                lVar14 = _objc_retainAutoreleasedReturnValue();

                if ((lVar14 == 0) || (((uVar2 ^ local_78) & 1) != 0)) {

LAB_000bc0a8:

                  _objc_release(lVar14);

                  goto LAB_000bc0b4;

                }

                if (uVar2 != 0) {

                  FUN_002985c0(lVar11);

                  uVar10 = _objc_retainAutoreleasedReturnValue();

                  lVar15 = FUN_00297fa0();

                  if (lVar15 == 0) goto LAB_000bc0a0;

                  FUN_002985c0(lVar11);

                  uVar16 = _objc_retainAutoreleasedReturnValue();

                  FUN_002985c0(lVar14);

                  auVar17 = _objc_retainAutoreleasedReturnValue();

                  uVar12 = FUN_00297820(uVar16,auVar17._8_8_,auVar17._0_8_);

                  _objc_release(auVar17._0_8_);

                  _objc_release(uVar16);

                  _objc_release(uVar10);

                  if ((uVar12 & 1) != 0) goto LAB_000bc024;

                  goto LAB_000bc0a8;

                }

                iVar3 = FUN_000a8a64(lVar11);

                if (iVar3 != 0) {

                  FUN_00298640(lVar11);

                  uVar10 = _objc_retainAutoreleasedReturnValue();

                  FUN_00298640(lVar14);

                  uVar16 = _objc_retainAutoreleasedReturnValue();

                  lVar15 = FUN_00297fa0(uVar10);

                  if (lVar15 != 0) {

                    auVar17 = FUN_00297fa0(uVar16);

                    if (auVar17._0_8_ != 0) {

                      uVar12 = FUN_00297820(uVar10,auVar17._8_8_,uVar16);

                      _objc_release(uVar16);

                      _objc_release(uVar10);

                      if ((uVar12 & 1) == 0) goto LAB_000bc0a8;

                      goto LAB_000bc024;

                    }

                  }

                  _objc_release(uVar16);

LAB_000bc0a0:

                  _objc_release(uVar10);

                  goto LAB_000bc0a8;

                }

                FUN_002985c0(lVar11);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                lVar15 = FUN_00297fa0();

                if (lVar15 == 0) goto LAB_000bc0a0;

                FUN_002985c0(lVar11);

                uVar16 = _objc_retainAutoreleasedReturnValue();

                FUN_002985c0(lVar14);

                auVar17 = _objc_retainAutoreleasedReturnValue();

                iVar3 = FUN_00297820(uVar16,auVar17._8_8_,auVar17._0_8_);

                _objc_release(auVar17._0_8_);

                _objc_release(uVar16);

                _objc_release(uVar10);

                if (iVar3 == 0) goto LAB_000bc0a8;

LAB_000bc024:

                iVar3 = FUN_00004f4c(lVar13);

                if (((iVar3 != 0) && (uVar12 = FUN_00192180(lVar13), (uVar12 & 1) == 0)) &&

                   (uVar12 = FUN_00192218(local_78), (uVar12 & 1) == 0)) {

                  _objc_setAssociatedObject

                            (lVar13,PTR_LOOP_003e64a8,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

                  FUN_000acd80(lVar13,0);

                  local_90 = local_90 + 1;

                }

                _objc_release(lVar14);

                _objc_release(lVar13);

                uVar6 = uVar6 + 1;

              }

              bVar1 = local_90 != 0;

            }

            _objc_release(lVar11);

          }

          else {

            uVar2 = FUN_00297820(uVar5,auVar17._8_8_,DAT_003e7488);

            if (lVar8 == 0) {

              uVar2 = 1;

            }

            if ((uVar2 & 1) != 0) goto LAB_000bbcc0;

LAB_000bbc34:

            FUN_000ba260(param_1);

            auVar17 = _objc_opt_respondsToSelector(lVar8,"getArrMessageNodeData");

            uVar10 = auVar17._8_8_;

            if ((auVar17._0_8_ & 1) != 0) {

              FUN_002957a0(lVar8);

              lVar11 = _objc_retainAutoreleasedReturnValue();

              _objc_release(lVar9);

              uVar10 = extraout_x1;

              lVar9 = lVar11;

            }

            if (lVar9 == 0) {

              FUN_002a6080(lVar8,uVar10,&cf_m_arrMessageNodeData);

              lVar9 = _objc_retainAutoreleasedReturnValue();

            }

            uVar10 = _objc_opt_class(&_OBJC_CLASS___NSArray);

            uVar6 = _objc_opt_isKindOfClass(lVar9,uVar10);

            if ((uVar6 & 1) != 0) {

              auVar17 = FUN_00293860(lVar9);

              if (auVar17._0_8_ != 0) {

                uVar6 = FUN_00296720(lVar9,auVar17._8_8_,lVar7);

                goto LAB_000bbcc0;

              }

            }

LAB_000bbdc0:

            bVar1 = false;

          }

          _objc_release(uVar5);

        }

        _objc_release(lVar9);

        _objc_release(lVar8);

      }

      _objc_release(lVar7);

      goto LAB_000bbde4;

    }

  }

  bVar1 = false;

LAB_000bbde4:

  _objc_release(param_1);

  return bVar1;

}





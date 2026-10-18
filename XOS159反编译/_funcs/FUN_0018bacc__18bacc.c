// FUN_0018bacc @0x18bacc


undefined1  [16] FUN_0018bacc(long param_1)



{

  ulong uVar1;

  ulong uVar2;

  ulong uVar3;

  ulong uVar4;

  undefined *puVar5;

  uint uVar6;

  long lVar7;

  undefined8 uVar8;

  ulong uVar9;

  ulong uVar10;

  ulong uVar11;

  long lVar12;

  long lVar13;

  ulong uVar14;

  long lVar15;

  ulong uVar16;

  ulong uVar17;

  ulong uVar18;

  ulong uVar19;

  ulong uVar20;

  ulong uVar21;

  ulong uVar22;

  ulong uVar23;

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  double dVar26;

  undefined8 uVar27;

  double dVar28;

  double dVar29;

  double dVar30;

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_retainAutorelease(param_1);

    lVar7 = FUN_00290a40();

    if (lVar7 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6e60);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        dVar26 = *(double *)PTR__UIEdgeInsetsZero_003883f0;

        uVar27 = 0;

        dVar28 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 8);

        dVar29 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x10);

        dVar30 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x18);

        _objc_retainAutorelease(param_1);

        uVar8 = FUN_00290a40();

        uVar9 = _CGImageGetWidth();

        uVar10 = _CGImageGetHeight(uVar8);

        uVar11 = _CGImageGetBitsPerPixel(uVar8);

        puVar5 = PTR_LOOP_003e6e60;

        if ((((uVar9 == 0) || (uVar10 == 0)) || (uVar11 < 8)) || ((uVar11 & 7) != 0)) {

          FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

        }

        else {

          uVar6 = _CGImageGetAlphaInfo(uVar8);

          puVar5 = PTR_LOOP_003e6e60;

          uVar23 = 0;

          if (((uVar6 & 0x1f) != 2) && ((uVar6 & 0x1f) != 4)) {

            if ((uVar6 & 0x1d) != 1) {

              FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

              goto LAB_0018be1c;

            }

            uVar23 = (uVar11 >> 3) - 1;

          }

          _CGImageGetDataProvider(uVar8);

          lVar12 = _CGDataProviderCopyData();

          auVar24._8_8_ = uVar27;

          auVar24._0_8_ = dVar26;

          if (lVar12 == 0) goto LAB_0018be28;

          lVar13 = _CFDataGetBytePtr(lVar12);

          uVar14 = _CFDataGetLength(lVar12);

          lVar15 = _CGImageGetBytesPerRow(uVar8);

          uVar16 = 0;

          uVar22 = 0xffffffffffffffff;

          uVar21 = 0xffffffffffffffff;

          uVar19 = uVar9;

          uVar20 = uVar10;

          do {

            if (uVar14 <= uVar16 * lVar15) break;

            uVar17 = 0;

            uVar18 = uVar23;

            do {

              if (uVar14 <= uVar18) break;

              uVar1 = uVar17;

              if ((long)uVar19 <= (long)uVar17) {

                uVar1 = uVar19;

              }

              uVar2 = uVar16;

              if ((long)uVar20 <= (long)uVar16) {

                uVar2 = uVar20;

              }

              uVar3 = uVar17;

              if ((long)uVar17 <= (long)uVar22) {

                uVar3 = uVar22;

              }

              uVar4 = uVar16;

              if ((long)uVar16 <= (long)uVar21) {

                uVar4 = uVar21;

              }

              if (8 < *(byte *)(lVar13 + uVar18)) {

                uVar19 = uVar1;

                uVar20 = uVar2;

                uVar22 = uVar3;

                uVar21 = uVar4;

              }

              uVar17 = uVar17 + 1;

              uVar18 = uVar18 + (uVar11 >> 3);

            } while (uVar9 != uVar17);

            uVar16 = uVar16 + 1;

            uVar23 = uVar23 + lVar15;

          } while (uVar16 != uVar10);

          if (((long)uVar19 <= (long)uVar22) && ((long)uVar20 <= (long)uVar21)) {

            dVar30 = (double)FUN_0029bda0(param_1);

            if (dVar30 <= 0.0) {

              dVar30 = (double)FUN_0018ba50();

            }

            else {

              dVar30 = (double)FUN_0029bda0(param_1);

            }

            dVar26 = (double)(long)uVar20 / dVar30;

            uVar27 = 0;

            dVar28 = (double)(long)uVar19 / dVar30;

            dVar29 = (((double)uVar10 - (double)(long)uVar21) + -1.0) / dVar30;

            dVar30 = (((double)uVar9 - (double)(long)uVar22) + -1.0) / dVar30;

          }

          _CFRelease(lVar12);

          puVar5 = PTR_LOOP_003e6e60;

          FUN_002a61a0(dVar26,dVar28,dVar29,dVar30,&_OBJC_CLASS___NSValue);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar5,uVar8,1);

        }

LAB_0018be1c:

        _objc_release(uVar8);

        auVar24._8_8_ = uVar27;

        auVar24._0_8_ = dVar26;

      }

      else {

        auVar24 = FUN_00290b80(lVar7);

      }

LAB_0018be28:

      uVar27 = auVar24._8_8_;

      uVar8 = auVar24._0_8_;

      _objc_release(lVar7);

      goto LAB_0018be30;

    }

  }

  uVar8 = *(undefined8 *)PTR__UIEdgeInsetsZero_003883f0;

  uVar27 = 0;

LAB_0018be30:

  _objc_release(param_1);

  auVar25._8_8_ = uVar27;

  auVar25._0_8_ = uVar8;

  return auVar25;

}





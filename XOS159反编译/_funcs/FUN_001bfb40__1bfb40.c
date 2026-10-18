// FUN_001bfb40 @0x1bfb40


void FUN_001bfb40(float param_1,float param_2,float param_3,float param_4)



{

  bool bVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  float fVar9;

  float fVar10;

  float fVar11;

  float fVar12;

  float fVar13;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  float local_48;

  

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if ((DAT_003e97c2 & 1) != 0) {

    dVar5 = 1.0;

    if ((double)param_1 <= 1.0) {

      dVar5 = (double)param_1;

    }

    if (dVar5 <= 0.0) {

      dVar5 = 0.0;

    }

    fVar13 = (float)dVar5;

    dVar5 = 1.0;

    if ((double)param_2 <= 1.0) {

      dVar5 = (double)param_2;

    }

    if (dVar5 <= 0.0) {

      dVar5 = 0.0;

    }

    fVar12 = (float)dVar5;

    dVar5 = 1.0;

    if ((double)param_3 <= 1.0) {

      dVar5 = (double)param_3;

    }

    if (dVar5 <= 0.0) {

      dVar5 = 0.0;

    }

    fVar11 = (float)dVar5;

    dVar5 = 1.0;

    if ((double)param_4 <= 1.0) {

      dVar5 = (double)param_4;

    }

    if (dVar5 <= 0.0) {

      dVar5 = 0.0;

    }

    fVar10 = (float)dVar5;

    lVar2 = 4;

    if (fVar13 <= DAT_003e97d0) {

      lVar2 = 0;

    }

    DAT_003e97d0 = DAT_003e97d0 + *(float *)((long)&DAT_0030e9f8 + lVar2) * (fVar13 - DAT_003e97d0);

    DAT_003e97d4 = DAT_003e97d4 + (fVar12 - DAT_003e97d4) * 0.28;

    DAT_003e97d8 = DAT_003e97d8 + (fVar11 - DAT_003e97d8) * 0.22;

    DAT_003e97dc = DAT_003e97dc + (fVar10 - DAT_003e97dc) * 0.18;

    FUN_001bffdc(0x3ff4000000000000);

    uVar4 = FUN_001c0f98();

    if ((uVar4 & 1) != 0) {

      dVar5 = (double)_CACurrentMediaTime();

      if (0.041666666666666664 <= dVar5 - DAT_003e97e8) {

        dVar6 = (double)(fVar12 * 0.3 + fVar13 * 0.42 + fVar11 * 0.22 + fVar10 * 0.06);

        dVar7 = 1.0;

        if (dVar6 <= 1.0) {

          dVar7 = dVar6;

        }

        if (dVar7 <= 0.0) {

          dVar7 = 0.0;

        }

        fVar13 = (float)dVar7;

        bVar1 = DAT_003e97e0 <= 0.001;

        DAT_003e97e0 = fVar13 * 0.035 + DAT_003e97e0 * 0.965;

        if (bVar1) {

          DAT_003e97e0 = fVar13;

        }

        fVar9 = 0.06;

        if (0.06 <= DAT_003e97e0 * 1.45) {

          fVar9 = DAT_003e97e0 * 1.45;

        }

        dVar7 = 1.0;

        if ((double)(fVar13 / fVar9) <= 1.0) {

          dVar7 = (double)(fVar13 / fVar9);

        }

        if (dVar7 <= 0.0) {

          dVar7 = 0.0;

        }

        dVar8 = (double)(fVar13 * 0.26 + 0.2 + (float)dVar7 * 0.34 + fVar12 * 0.18 + fVar11 * 0.12);

        dVar6 = 1.0;

        if (dVar8 <= 1.0) {

          dVar6 = dVar8;

        }

        if (dVar6 <= 0.0) {

          dVar6 = 0.0;

        }

        local_48 = (float)dVar6;

        dVar6 = (double)((float)dVar7 * 0.18 + 0.18 + fVar12 * 0.22 + fVar11 * 0.12 + fVar10 * 0.16)

        ;

        dVar7 = 0.86;

        if (dVar6 <= 0.86) {

          dVar7 = dVar6;

        }

        if (dVar7 <= 0.12) {

          dVar7 = 0.12;

        }

        lVar2 = 4;

        if (local_48 <= DAT_003e97f0) {

          lVar2 = 0;

        }

        lVar3 = 4;

        if ((float)dVar7 <= DAT_003e97f4) {

          lVar3 = 0;

        }

        DAT_003e97f0 = DAT_003e97f0 +

                       *(float *)((long)&DAT_0030ea08 + lVar2) * (local_48 - DAT_003e97f0);

        DAT_003e97f4 = DAT_003e97f4 +

                       *(float *)((long)&DAT_0030ea10 + lVar3) * ((float)dVar7 - DAT_003e97f4);

        DAT_003e97e8 = dVar5;

        if (((DAT_003e70b0 < 0.0) || (0.015 <= ABS(DAT_003e97f0 - DAT_003e70b0))) ||

           (0.015 <= ABS(DAT_003e97f4 - DAT_003e70b4) || DAT_003e97a0 == 0)) {

          local_70 = PTR___NSConcreteStackBlock_003886f0;

          local_68 = 0xc0000000;

          local_60 = FUN_001c0fe4;

          puStack_58 = &DAT_0038e930;

          local_50 = DAT_003e97b8;

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_70);

        }

      }

      return;

    }

  }

  FUN_001bfa90();

  return;

}





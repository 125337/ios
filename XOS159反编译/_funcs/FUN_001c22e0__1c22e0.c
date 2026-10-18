// FUN_001c22e0 @0x1c22e0


void FUN_001c22e0(undefined1 param_1 [16],float param_2,float *param_3,float *param_4)



{

  bool bVar1;

  ulong uVar2;

  ulong uVar3;

  ulong uVar4;

  ulong uVar5;

  float *pfVar6;

  float *pfVar7;

  float *pfVar8;

  float *pfVar9;

  ulong uVar10;

  float fVar11;

  float fVar12;

  float fVar13;

  float fVar14;

  float fVar15;

  float fVar16;

  float fVar17;

  

  uVar2 = 0;

  uVar3 = 1;

  do {

    if ((uint)uVar2 >> 9 == 0) {

      uVar5 = 0x200;

    }

    else {

      uVar4 = 0x200;

      do {

        uVar2 = uVar2 ^ uVar4;

        uVar5 = uVar4 >> 1;

        uVar10 = uVar4 >> 1;

        uVar4 = uVar5;

      } while ((uVar2 & uVar10) != 0);

    }

    uVar2 = uVar2 ^ uVar5;

    if (uVar3 < uVar2) {

      fVar11 = param_3[uVar3];

      param_3[uVar3] = param_3[uVar2];

      param_3[uVar2] = fVar11;

      fVar11 = param_4[uVar3];

      param_2 = param_4[uVar2];

      param_4[uVar3] = param_2;

      param_4[uVar2] = fVar11;

    }

    uVar3 = uVar3 + 1;

  } while (uVar3 != 0x400);

  uVar3 = 2;

  do {

    fVar11 = (float)___sincosf_stret(-6.2831855 / (float)uVar3);

    uVar2 = 0;

    uVar4 = uVar3 >> 1;

    pfVar6 = param_4;

    pfVar7 = param_3;

    do {

      fVar12 = 0.0;

      fVar13 = 1.0;

      pfVar8 = pfVar6;

      pfVar9 = pfVar7;

      uVar10 = uVar4;

      do {

        fVar14 = *pfVar9;

        fVar16 = *pfVar8;

        fVar17 = -(fVar12 * pfVar8[uVar4]) + fVar13 * pfVar9[uVar4];

        fVar15 = fVar13 * pfVar8[uVar4] + fVar12 * pfVar9[uVar4];

        *pfVar9 = fVar14 + fVar17;

        *pfVar8 = fVar16 + fVar15;

        pfVar9[uVar4] = fVar14 - fVar17;

        pfVar8[uVar4] = fVar16 - fVar15;

        fVar14 = fVar12 * -fVar11;

        fVar12 = param_2 * fVar12 + fVar11 * fVar13;

        fVar13 = fVar14 + param_2 * fVar13;

        pfVar9 = pfVar9 + 1;

        pfVar8 = pfVar8 + 1;

        uVar10 = uVar10 - 1;

      } while (uVar10 != 0);

      uVar2 = uVar2 + uVar3;

      pfVar7 = pfVar7 + uVar3;

      pfVar6 = pfVar6 + uVar3;

    } while (uVar2 < 0x400);

    bVar1 = uVar3 < 0x201;

    uVar3 = uVar3 << 1;

  } while (bVar1);

  return;

}





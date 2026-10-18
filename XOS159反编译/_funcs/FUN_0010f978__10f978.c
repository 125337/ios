// FUN_0010f978 @0x10f978


void FUN_0010f978(void)



{

  undefined8 uVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  float fVar10;

  double dVar11;

  double dVar12;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  iVar2 = FUN_0010f81c();

  uVar1 = DAT_003e8290;

  if (iVar2 != 0) {

    DAT_003e8298 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    _objc_retain(DAT_003e8290);

    lVar3 = FUN_00293880(uVar1,extraout_x1,&local_140,auStack_f8,0x10);

    if (lVar3 != 0) {

      lVar8 = *local_130;

      do {

        lVar9 = 0;

        do {

          if (*local_130 != lVar8) {

            _objc_enumerationMutation(uVar1);

          }

          uVar7 = *(undefined8 *)(lStack_138 + lVar9 * 8);

          FUN_00297e40(uVar7);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_retain();

          fVar10 = (float)FUN_002a40a0(uVar4);

          if (fVar10 == 0.0) {

            FUN_00291880(uVar4,extraout_x1_00,&cf_xzy_bubble_pet_auto);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar5 == 0) {

              dVar11 = (double)FUN_002a5240(uVar4);

              FUN_002a18c0(0x3f800000,uVar4);

              FUN_002a1e60(0,uVar4);

              FUN_0029cfe0(0,uVar4);

              _CACurrentMediaTime();

              dVar12 = (double)FUN_00293760(uVar4,extraout_x1_01,0);

              FUN_0029cfe0(dVar12 - dVar11,uVar4);

            }

            else {

              FUN_002a18c0(0x3f800000,uVar4);

              FUN_002a1e60(0,uVar4);

              FUN_0029cfe0(0,uVar4);

            }

          }

          _objc_release(uVar4);

          _objc_release(uVar4);

          FUN_002918a0(uVar7);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          lVar5 = FUN_00293860();

          if (lVar5 == 0) {

            _objc_release(uVar4);

            uVar4 = extraout_x1_04;

          }

          else {

            uVar6 = FUN_002975e0(uVar7);

            _objc_release(uVar4);

            uVar4 = extraout_x1_02;

            if ((uVar6 & 1) == 0) {

              FUN_002a4160(uVar7);

              uVar4 = extraout_x1_03;

            }

          }

          lVar9 = lVar9 + 1;

        } while (lVar3 != lVar9);

        lVar3 = FUN_00293880(uVar1,uVar4,&local_140,auStack_f8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





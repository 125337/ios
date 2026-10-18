// FUN_00209b7c @0x209b7c


void FUN_00209b7c(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  uint uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar5;

  undefined8 uVar6;

  uint uVar7;

  bool bVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a5f80(param_2);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar10._0_8_,auVar10._8_8_,&cf_keys);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar3);

  auVar10 = FUN_00293880(uVar3,extraout_x1,&local_130,auStack_f0,0x10);

  if (auVar10._0_8_ == 0) {

    _objc_release(uVar3);

  }

  else {

    bVar8 = false;

    uVar7 = 0;

    lVar9 = *local_120;

    do {

      uVar4 = auVar10._8_8_;

      lVar5 = 0;

      do {

        if (*local_120 != lVar9) {

          _objc_enumerationMutation(uVar3);

          uVar4 = extraout_x1_00;

        }

        uVar6 = *(undefined8 *)(lStack_128 + lVar5 * 8);

        auVar11 = FUN_00297820(uVar6,uVar4,&cf_coversEnabled);

        uVar4 = auVar11._8_8_;

        if (((auVar11._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00295f60(uVar6,uVar4,&cf_xzyChatListGrouping), uVar4 = extraout_x1_01,

           iVar1 != 0)) {

          iVar1 = FUN_00293560(DAT_003eaa28,uVar4,uVar6);

          if (iVar1 == 0) {

            uVar2 = FUN_00297820(uVar6,extraout_x1_02,&cf_xzyChatListGroupingShowSticky);

            uVar7 = uVar2 | uVar7;

            bVar8 = true;

            uVar4 = extraout_x1_04;

          }

          else {

            FUN_0029b460(DAT_003eaa28,extraout_x1_02,uVar6);

            uVar4 = extraout_x1_03;

          }

        }

        lVar5 = lVar5 + 1;

      } while (auVar10._0_8_ != lVar5);

      auVar10 = FUN_00293880(uVar3,uVar4,&local_130,auStack_f0,0x10);

    } while (auVar10._0_8_ != 0);

    _objc_release(uVar3);

    if (bVar8) {

      FUN_001fcfe4();

      if ((uVar7 & 1) == 0) {

        FUN_001c93c0();

      }

      else {

        FUN_001eb7e0();

      }

    }

  }

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





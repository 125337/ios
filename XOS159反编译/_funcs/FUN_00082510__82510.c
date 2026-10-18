// FUN_00082510 @0x82510


void FUN_00082510(undefined8 param_1,undefined8 param_2)



{

  byte bVar1;

  byte bVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar7;

  byte bVar8;

  long lVar9;

  uint uVar10;

  undefined8 uVar11;

  bool bVar12;

  long lVar13;

  undefined1 auVar14 [16];

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

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar14._0_8_,auVar14._8_8_,&cf_keys);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar5);

  lVar6 = FUN_00293880(uVar5,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar6 == 0) {

    _objc_release(uVar5);

  }

  else {

    bVar12 = false;

    uVar10 = 0;

    lVar13 = *local_120;

    do {

      lVar9 = 0;

      do {

        if (*local_120 != lVar13) {

          _objc_enumerationMutation(uVar5);

        }

        uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);

        _objc_retain(uVar11);

        auVar14 = FUN_00297820(uVar11,extraout_x1_00,&cf_coversEnabled);

        if ((auVar14._0_8_ & 1) == 0) {

          iVar3 = FUN_00295f60(uVar11,auVar14._8_8_,&cf_mesMsgMerge);

          if (iVar3 != 0) {

            auVar14 = FUN_00297820(uVar11,extraout_x1_01,&cf_mesMsgMergeBubbleEnabled);

            if ((auVar14._0_8_ & 1) == 0) {

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergePayBubbleEnabled);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeDefaultBubblePosition);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeSelectedBubble);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              auVar14 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeSelectedSubPackage);

              if ((auVar14._0_8_ & 1) != 0) goto LAB_00082684;

              uVar4 = FUN_00297820(uVar11,auVar14._8_8_,&cf_mesMsgMergeCreatorPermission);

            }

            else {

LAB_00082684:

              uVar4 = 1;

            }

            uVar10 = uVar4 ^ 1 | uVar10;

          }

        }

        else {

          uVar10 = 1;

        }

        _objc_release(uVar11);

        auVar14 = FUN_00295f60(uVar11,extraout_x1_02,&cf_cover);

        uVar7 = auVar14._8_8_;

        if ((auVar14._0_8_ & 1) == 0) {

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_covers);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_selectedCover);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_personalCover_);

          uVar7 = auVar14._8_8_;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_0008270c;

          auVar14 = FUN_00295f60(uVar11,uVar7,&cf_peerCover_);

          uVar7 = auVar14._8_8_;

          if (((auVar14._0_8_ & 1) != 0) ||

             (iVar3 = FUN_00295f60(uVar11,uVar7,&cf_CoverSelectedCard), uVar7 = extraout_x1_03,

             iVar3 != 0)) goto LAB_0008270c;

        }

        else {

LAB_0008270c:

          bVar12 = true;

        }

        lVar9 = lVar9 + 1;

      } while (lVar6 != lVar9);

      lVar6 = FUN_00293880(uVar5,uVar7,&local_130,auStack_f0,0x10);

    } while (lVar6 != 0);

    _objc_release(uVar5);

    if ((uVar10 & 1) != 0) {

      DAT_003e7670 = 0;

      FUN_000828e0();

      DAT_003e7a2c = 0;

      FUN_0003dca8();

    }

    bVar2 = DAT_003e74d8;

    bVar1 = DAT_003e74b9;

    if (bVar12) {

      DAT_003e7671 = 0;

      FUN_00082ce4();

      DAT_003e7672 = 0;

      FUN_00082e7c();

      FUN_00007f9c();

      if (DAT_003e74b9 == 1) {

        if (DAT_003e7778 != -1) {

          FUN_0028ee60();

        }

        if (DAT_003e7bc8 != -1) {

          FUN_0028ee74();

        }

        if (DAT_003e7c50 != -1) {

          FUN_0028ee88();

        }

        bVar8 = DAT_003e74b9;

        if (DAT_003e7c68 != -1) {

          FUN_0028ee9c();

          bVar8 = DAT_003e74b9;

        }

      }

      else {

        bVar8 = 0;

      }

      if (((bVar1 & bVar2 & 1) != 0) && ((bVar8 & DAT_003e74d8 & 1) == 0)) {

        FUN_0000b684();

      }

    }

  }

  _objc_release(uVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}





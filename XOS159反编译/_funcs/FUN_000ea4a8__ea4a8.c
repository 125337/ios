// FUN_000ea4a8 @0xea4a8


void FUN_000ea4a8(undefined8 param_1)



{

  int iVar1;

  u_int32_t uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar12;

  undefined8 uVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6798);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) goto LAB_000ea9a8;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar15._0_8_;

  iVar1 = FUN_002924c0(uVar4,auVar15._8_8_,&cf_SHTM_RANDOM_IMAGE_ENABLED);

  if (iVar1 == 0) {

    FUN_002a45e0(uVar4,extraout_x1,&cf_SHTM_SELECTED_IMAGE_NAME);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002994e0(auVar15._0_8_,auVar15._8_8_,0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar16._0_8_,auVar16._8_8_,&cf_CoverRes_BannerImages);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00293660(auVar17._0_8_,auVar17._8_8_,uVar5,0);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    _objc_retain(uVar6);

    lVar8 = FUN_00293880(uVar6,extraout_x1_00,&local_140,auStack_100,0x10);

    if (lVar8 != 0) {

      lVar14 = *local_130;

      do {

        lVar12 = 0;

        do {

          if (*local_130 != lVar14) {

            _objc_enumerationMutation(uVar6);

          }

          uVar13 = *(undefined8 *)(lStack_138 + lVar12 * 8);

          FUN_00299b20(uVar13);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002984e0();

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar9);

          iVar1 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003bdfd8,extraout_x1_01,uVar10);

          if (iVar1 != 0) {

            FUN_00291240(uVar7,extraout_x1_02,uVar13);

          }

          _objc_release(uVar10);

          lVar12 = lVar12 + 1;

        } while (lVar8 != lVar12);

        lVar8 = FUN_00293880(uVar6,extraout_x1_03,&local_140,auStack_100,0x10);

      } while (lVar8 != 0);

    }

    _objc_release(uVar6);

    lVar8 = FUN_00293860(uVar7);

    if (lVar8 == 0) {

      lVar8 = 0;

    }

    else {

      uVar2 = FUN_00293860(uVar7);

      _arc4random_uniform(uVar2);

      FUN_00299500(uVar7);

      lVar8 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(auVar17._0_8_);

    _objc_release(uVar5);

    _objc_release(auVar16._0_8_);

    _objc_release(auVar15._0_8_);

  }

  if ((lVar8 != 0) && (lVar14 = FUN_00297fa0(lVar8), lVar14 != 0)) {

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002994e0(auVar15._0_8_,auVar15._8_8_,0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar16._0_8_,auVar16._8_8_,&cf_CoverRes_BannerImages);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar17._0_8_,auVar17._8_8_,lVar8);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar17._0_8_);

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    uVar11 = FUN_00295160(auVar17._0_8_,auVar17._8_8_,uVar5);

    _objc_release(auVar17._0_8_);

    if ((uVar11 & 1) != 0) {

      FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_04,uVar5);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_002965e0(&_OBJC_CLASS___UIImage,auVar17._8_8_,auVar17._0_8_);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      if (lVar14 != 0) {

        FUN_002987e0(&_OBJC_CLASS___UIScreen);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        uVar7 = FUN_0029bda0();

        _objc_release(uVar6);

        _objc_retainAutorelease(lVar14);

        uVar6 = FUN_00290a40(lVar14);

        auVar18 = FUN_00296500(lVar14);

        FUN_002965a0(uVar7,&_OBJC_CLASS___UIImage,auVar18._8_8_,uVar6,auVar18._0_8_);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar14);

        auVar18 = _objc_alloc(&_OBJC_CLASS___UIImageView);

        auVar18 = FUN_00296c40(auVar18._0_8_,auVar18._8_8_,uVar6);

        uVar7 = auVar18._0_8_;

        FUN_0029d6c0(uVar7,auVar18._8_8_,4);

        FUN_0029d4a0(uVar7,extraout_x1_05,0);

        FUN_002a1c80(uVar7,extraout_x1_06,0x15b38);

        FUN_002a6080(param_1,extraout_x1_07,&cf__msgPushNotifyView);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) {

LAB_000ea920:

          FUN_002a6220(param_1);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          uVar9 = auVar18._0_8_;

          FUN_00297100(uVar9,auVar18._8_8_,uVar7,0);

        }

        else {

          FUN_002a4880(lVar14);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar12 == 0) goto LAB_000ea920;

          FUN_002a4880(lVar14);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          uVar9 = auVar18._0_8_;

          FUN_00297120(uVar9,auVar18._8_8_,uVar7,lVar14);

        }

        _objc_release(uVar9);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6798,uVar7,1);

        _objc_release(lVar14);

        _objc_release(uVar7);

        _objc_release(uVar6);

      }

      _objc_release(auVar17._0_8_);

    }

    _objc_release(uVar5);

    _objc_release(auVar16._0_8_);

    _objc_release(auVar15._0_8_);

  }

  _objc_release(lVar8);

  _objc_release(uVar4);

LAB_000ea9a8:

  _objc_release(lVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





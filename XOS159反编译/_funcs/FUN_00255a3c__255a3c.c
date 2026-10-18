// FUN_00255a3c @0x255a3c


void FUN_00255a3c(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4,

                 long param_5,undefined8 param_6)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar8;

  long lVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  undefined8 local_230;

  long lStack_228;

  long *local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined1 auStack_1a8 [128];

  undefined8 local_128;

  undefined8 local_120;

  undefined8 local_118;

  undefined8 local_110;

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_5);

  _objc_retain(param_6);

  lStack_1e8 = 0;

  local_1f0 = 0;

  uStack_1d8 = 0;

  local_1e0 = (long *)0x0;

  uStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  uStack_1c0 = 0;

  FUN_002a4840(param_6);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002937a0();

  _objc_release(uVar2);

  lVar4 = FUN_00293880(uVar3,extraout_x1,&local_1f0,auStack_108,0x10);

  if (lVar4 != 0) {

    lVar8 = *local_1e0;

    do {

      lVar9 = 0;

      do {

        if (*local_1e0 != lVar8) {

          _objc_enumerationMutation(uVar3);

        }

        FUN_0029b340(*(undefined8 *)(lStack_1e8 + lVar9 * 8));

        lVar9 = lVar9 + 1;

      } while (lVar4 != lVar9);

      lVar4 = FUN_00293880(uVar3,extraout_x1_00,&local_1f0,auStack_108,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  if ((param_4 != 0) && (lVar4 = FUN_00297fa0(param_4), lVar4 != 0)) {

    if (param_5 == 0) {

      FUN_0024e210(param_4);

      param_5 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_002925a0(param_6);

    dVar10 = (double)_CGRectGetWidth();

    FUN_002925a0(param_6);

    dVar11 = (double)_CGRectGetHeight();

    uVar2 = extraout_x1_01;

    if (dVar10 <= 0.0) {

      FUN_002987e0(&_OBJC_CLASS___UIScreen);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      _objc_release(uVar2);

      uVar2 = extraout_x1_02;

      dVar10 = param_3;

    }

    if (dVar11 <= 0.0) {

      dVar11 = 80.0;

    }

    iVar1 = FUN_00297820(param_5,uVar2,&cf_html);

    if (iVar1 == 0) {

      FUN_00237f98(0);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      local_128 = uVar3;

      FUN_00237f98(1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_120 = uVar5;

      FUN_00237f98(2);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      local_118 = uVar6;

      FUN_00237f98(3);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      local_110 = auVar14._0_8_;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar14._8_8_,&local_128,4);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar14._0_8_);

      _objc_release(uVar6);

      _objc_release(uVar5);

      _objc_release(uVar3);

      FUN_00254690(dVar10,dVar11,param_4,4,0,0,uVar2,DAT_003eb428);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      dVar12 = (double)FUN_0024e370(param_4);

      uStack_208 = 0;

      local_210 = 0;

      uStack_1f8 = 0;

      uStack_200 = 0;

      lStack_228 = 0;

      local_230 = 0;

      uStack_218 = 0;

      local_220 = (long *)0x0;

      _objc_retain(uVar3);

      lVar4 = FUN_00293880(uVar3,extraout_x1_05,&local_230,auStack_1a8,0x10);

      if (lVar4 != 0) {

        lVar8 = *local_220;

        do {

          lVar9 = 0;

          do {

            if (*local_220 != lVar8) {

              _objc_enumerationMutation(uVar3);

            }

            dVar13 = dVar11;

            FUN_00255fa0(dVar10,dVar11,*(undefined8 *)(lStack_228 + lVar9 * 8),0);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar14._8_8_;

            lVar7 = auVar14._0_8_;

            if (lVar7 != 0) {

              if (0.0 < dVar12) {

                uVar5 = FUN_00295600(lVar7);

                FUN_0029e5e0(uVar5,dVar13 - dVar12,lVar7);

                uVar5 = extraout_x1_06;

              }

              FUN_00291380(param_6,uVar5,lVar7);

            }

            _objc_release(lVar7);

            lVar9 = lVar9 + 1;

          } while (lVar4 != lVar9);

          lVar4 = FUN_00293880(uVar3,extraout_x1_07,&local_230,auStack_1a8,0x10);

        } while (lVar4 != 0);

      }

      _objc_release(uVar3);

      _objc_release(uVar3);

    }

    else {

      uVar2 = FUN_0024e6c4(param_4);

      FUN_0024f700(dVar10,dVar11,uVar2,param_4,4,0,0,0);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      dVar10 = (double)FUN_0024e370(param_4);

      uVar3 = extraout_x1_03;

      if (0.0 < dVar10) {

        uVar3 = FUN_00295600(uVar2);

        FUN_0029e5e0(uVar3,dVar11 - dVar10,uVar2);

        uVar3 = extraout_x1_04;

      }

      FUN_00291380(param_6,uVar3,uVar2);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_6);

  _objc_release(param_5);

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





// FUN_0019e75c @0x19e75c


undefined1  [16] FUN_0019e75c(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar3;

  float fVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  double dVar8;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00299520(param_1,extraout_x1,param_2);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 == 0) {

    FUN_00299520(param_1,extraout_x1_00,&cf_mesMsgMergeAvatarOffset);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    FUN_00299520(param_1,extraout_x1_01,&cf_mesMsgMergeWholeOffset);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 == 0 && lVar2 == 0) {

      dVar6 = 46.0;

    }

    else {

      if (lVar1 == 0) {

        dVar5 = 46.0;

        uVar3 = extraout_x1_02;

      }

      else {

        fVar4 = (float)FUN_00295460(param_1,extraout_x1_02,&cf_mesMsgMergeAvatarOffset);

        dVar5 = (double)fVar4;

        uVar3 = extraout_x1_03;

      }

      if (ABS(dVar5) <= 0.001) {

        dVar5 = 46.0;

      }

      if (lVar2 == 0) {

        dVar6 = 0.0;

      }

      else {

        fVar4 = (float)FUN_00295460(param_1,uVar3,&cf_mesMsgMergeWholeOffset);

        dVar6 = (double)fVar4;

      }

      dVar5 = dVar5 + dVar6;

      dVar8 = 60.0;

      if (dVar5 <= 60.0) {

        dVar8 = dVar5;

      }

      dVar6 = -60.0;

      if (-60.0 <= dVar5) {

        dVar6 = dVar8;

      }

    }

  }

  else {

    fVar4 = (float)FUN_00295460(param_1,extraout_x1_00,param_2);

    dVar5 = 60.0;

    if ((double)fVar4 <= 60.0) {

      dVar5 = (double)fVar4;

    }

    dVar6 = -60.0;

    if (-60.0 <= fVar4) {

      dVar6 = dVar5;

    }

  }

  uVar3 = 0;

  _objc_release(param_2);

  _objc_release(param_1);

  auVar7._8_8_ = uVar3;

  auVar7._0_8_ = dVar6;

  return auVar7;

}





// FUN_0019f0a4 @0x19f0a4


void FUN_0019f0a4(void)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  float fVar5;

  undefined1 auVar6 [16];

  

  if ((DAT_003e9668 & 1) != 0) {

    return;

  }

  DAT_003e9668 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  FUN_00299520(uVar3,auVar6._8_8_,&cf_aabTextBaselineGapSelf);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 != 0) {

    fVar5 = (float)FUN_00295460(uVar3,extraout_x1,&cf_aabTextBaselineGapSelf);

    bVar1 = false;

    bVar2 = true;

    if (20.0 <= fVar5) {

      bVar1 = false;

      bVar2 = true;

      if (!NAN(fVar5)) {

        bVar1 = fVar5 == 100.0;

        bVar2 = 100.0 <= fVar5;

      }

    }

    if (!bVar2 || bVar1) {

      DAT_003e9660 = (double)fVar5;

      DAT_003e9658 = 1;

    }

  }

  _objc_release(uVar3);

  return;

}





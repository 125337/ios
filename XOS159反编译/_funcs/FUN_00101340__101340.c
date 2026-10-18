// FUN_00101340 @0x101340


void FUN_00101340(undefined8 param_1,long param_2,long param_3)



{

  undefined **ppuVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  int iVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  

  if ((DAT_003eb3b0 == '\x01') && ((DAT_003e7ed8 & 1) == 0)) {

    lVar7 = 0;

    goto LAB_00101634;

  }

  lVar7 = DAT_003e6868;

  if (0 < param_2) {

    lVar7 = param_2;

  }

  uVar2 = FUN_001017a8();

  iVar6 = (int)param_1;

  if (iVar6 == 0) {

    if (lVar7 < 3) {

      if (lVar7 == 1) {

        pcVar5 = &cf_left_top_png;

        pcVar8 = &cf_left_top_dark_png;

      }

      else {

        if (lVar7 != 2) goto LAB_00101420;

        pcVar5 = &cf_left_middle_png;

        pcVar8 = &cf_left_middle_dark_png;

      }

    }

    else if (lVar7 == 3) {

      pcVar5 = &cf_left_bottom_png;

      pcVar8 = &cf_left_bottom_dark_png;

    }

    else {

LAB_00101420:

      pcVar5 = &cf_left_single_png;

      pcVar8 = &cf_left_single_dark_png;

    }

  }

  else if (lVar7 < 3) {

    if (lVar7 == 1) {

      pcVar5 = &cf_right_top_png;

      pcVar8 = &cf_right_top_dark_png;

    }

    else {

      if (lVar7 != 2) goto LAB_00101400;

      pcVar5 = &cf_right_middle_png;

      pcVar8 = &cf_right_middle_dark_png;

    }

  }

  else if (lVar7 == 3) {

    pcVar5 = &cf_right_bottom_png;

    pcVar8 = &cf_right_bottom_dark_png;

  }

  else {

LAB_00101400:

    pcVar5 = &cf_right_single_png;

    pcVar8 = &cf_right_single_dark_png;

  }

  if (uVar2 == 0) {

    pcVar8 = pcVar5;

  }

  _objc_retain(pcVar8);

  FUN_00104784(pcVar8,param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 == 0 & uVar2) == 1) {

    _objc_release(pcVar8);

    pcVar8 = &cf_right_single_png;

    if (iVar6 == 0) {

      pcVar8 = &cf_left_single_png;

    }

    if (lVar7 - 1U < 3) {

      ppuVar1 = &PTR_cf_right_top_png_0038c6a0;

      if (iVar6 == 0) {

        ppuVar1 = &PTR_cf_left_top_png_0038c6b8;

      }

      pcVar8 = (cfstringStruct *)ppuVar1[lVar7 - 1U];

    }

    FUN_00104784(pcVar8,param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

  }

  if (lVar3 == 0) {

    if (uVar2 != 0) {

      pcVar5 = &cf_right_top_dark_png;

      if (iVar6 == 0) {

        pcVar5 = &cf_left_top_dark_png;

      }

      _objc_retain(pcVar5);

      _objc_release(pcVar8);

      FUN_00104784(pcVar5,param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      pcVar8 = pcVar5;

      if (lVar3 != 0) goto LAB_001015c0;

    }

    pcVar5 = &cf_right_top_png;

    if (iVar6 == 0) {

      pcVar5 = &cf_left_top_png;

    }

    _objc_retain(pcVar5);

    _objc_release(pcVar8);

    FUN_00104784(pcVar5,param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    pcVar8 = pcVar5;

  }

LAB_001015c0:

  if (param_3 - 1U < 3) {

    FUN_00102708(pcVar8);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

LAB_00101610:

      _objc_release(lVar4);

      goto LAB_00101618;

    }

    FUN_00102ba0(lVar4,param_1,param_3 - 1U);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) goto LAB_00101610;

    _objc_release(lVar4);

  }

  else {

LAB_00101618:

    _objc_retain(lVar3);

    lVar7 = lVar3;

  }

  _objc_release(lVar3);

  _objc_release(pcVar8);

LAB_00101634:

  _objc_autoreleaseReturnValue(lVar7);

  return;

}





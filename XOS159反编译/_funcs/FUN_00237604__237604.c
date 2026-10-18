// FUN_00237604 @0x237604


void FUN_00237604(void)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  lVar2 = FUN_00297fa0(DAT_003eb178);

  pcVar4 = DAT_003eb178;

  if (lVar2 == 0) {

    FUN_002376d0();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar5._0_8_;

    auVar5 = FUN_00297820(uVar3,auVar5._8_8_,&cf_en);

    if ((auVar5._0_8_ & 1) == 0) {

      auVar5 = FUN_00297820(uVar3,auVar5._8_8_,&cf_ko);

      if ((auVar5._0_8_ & 1) == 0) {

        iVar1 = FUN_00297820(uVar3,auVar5._8_8_,&cf_ja);

        pcVar4 = &cf_i__;

        if (iVar1 == 0) {

          pcVar4 = &cf_d__;

        }

      }

      else {

        pcVar4 = &cf__;

      }

    }

    else {

      pcVar4 = &cf_Search;

    }

    _objc_release(uVar3);

  }

  else {

    _objc_retain(DAT_003eb178);

  }

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}





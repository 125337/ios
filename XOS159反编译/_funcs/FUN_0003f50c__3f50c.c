// FUN_0003f50c @0x3f50c


void FUN_0003f50c(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_0029efa0(uVar2,auVar3._8_8_,param_2,&cf_mesMsgMergeWrapReferDividerLength);

  FUN_002a4a40(uVar2);

  DAT_003e74e0 = DAT_003e74e0 + 1;

  DAT_003e7510 = param_2;

  FUN_0003dcfc();

  if (*(long *)(param_1 + 0x20) != 0) {

    FUN_002944a0();

    auVar3 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_w__u;

    if (param_2 != 1) {

      pcVar1 = &cf__ll_Nz;

    }

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,pcVar1);

    _objc_release(auVar3._0_8_);

  }

  _objc_release(uVar2);

  return;

}





// FUN_0010ea8c @0x10ea8c


void FUN_0010ea8c(void)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  cfstringStruct *pcVar5;

  undefined1 auVar6 [16];

  

  auVar6 = _objc_alloc_init(&_OBJC_CLASS___NSDateComponents);

  uVar1 = auVar6._0_8_;

  FUN_002a2840(uVar1,auVar6._8_8_,2000);

  FUN_0029fe00(uVar1,extraout_x1,1);

  FUN_0029db80(uVar1,extraout_x1_00,1);

  FUN_0029eaa0(uVar1,extraout_x1_01,0x17);

  FUN_0029fd80(uVar1,extraout_x1_02,0x3b);

  FUN_002a10a0(uVar1,extraout_x1_03,0x3b);

  FUN_00293bc0(&_OBJC_CLASS___NSCalendar);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00294160(auVar6._0_8_,auVar6._8_8_,uVar1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    FUN_00294180(0,&_OBJC_CLASS___NSDate);

    lVar3 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar2);

    lVar3 = lVar2;

  }

  _objc_release(lVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar1);

  FUN_0010dce4(lVar3);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(lVar3);

  pcVar5 = &cf_23_59;

  if ((pcVar4 != (cfstringStruct *)0x0) && (lVar2 = FUN_00297fa0(pcVar4), lVar2 != 0)) {

    pcVar5 = pcVar4;

  }

  _objc_retain(pcVar5);

  _objc_release(pcVar4);

  _objc_autoreleaseReturnValue(pcVar5);

  return;

}





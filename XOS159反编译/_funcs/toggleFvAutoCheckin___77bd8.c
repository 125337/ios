// toggleFvAutoCheckin: @0x77bd8


/* Function Stack Size: 0x18 bytes */



void _0x016d26c7::toggleFvAutoCheckin_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar5;

  cfstringStruct *pcVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002979c0(param_3);

  if (iVar1 != 0) {

    FUN_00076fe0();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00297fa0();

    _objc_release(uVar3);

    if (lVar4 == 0) {

      FUN_0029d080(uVar2,extraout_x1,0,&cf_ttsFvAutoCheckinEnabled);

      FUN_002a4a40(uVar2);

      pcVar5 = &::cf_F;

      uVar3 = extraout_x1_01;

      pcVar6 = &cf_HQMn_;

      goto LAB_00077cc0;

    }

  }

  auVar7 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar7._8_8_,auVar7._0_8_,&cf_ttsFvAutoCheckinEnabled);

  FUN_002a4a40(uVar2);

  FUN_00077430();

  FUN_002a4dc0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  iVar1 = FUN_002979c0(param_3);

  pcVar5 = &::cf_F;

  if (iVar1 == 0) {

    pcVar5 = &::cf_F;

  }

  uVar3 = extraout_x1_00;

  pcVar6 = &cf_k_YSNe;

  if (iVar1 == 0) {

    pcVar6 = &cf__sQR__0R;

  }

LAB_00077cc0:

  FUN_002a3540(param_1,uVar3,pcVar5,pcVar6);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}





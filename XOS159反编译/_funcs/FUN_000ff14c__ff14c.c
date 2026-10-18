// FUN_000ff14c @0xff14c


void FUN_000ff14c(undefined8 param_1,undefined8 param_2,long param_3)



{

  int iVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  if ((DAT_003eb410 & 1) == 0) {

    (**(code **)(param_3 + 0x10))(param_3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    goto LAB_000ff294;

  }

  if ((DAT_003eb3b0 & 1) == 0) {

    (**(code **)(param_3 + 0x10))(param_3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    goto LAB_000ff294;

  }

  if ((DAT_003e7ed8 & 1) == 0) {

    (**(code **)(param_3 + 0x10))(param_3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    goto LAB_000ff294;

  }

  FUN_00292600(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar5._0_8_;

  if ((lVar3 == 0) || (iVar1 = FUN_00295f60(lVar3,auVar5._8_8_,&cf_ChatRoom_Bubble_), iVar1 == 0)) {

LAB_000ff228:

    (**(code **)(param_3 + 0x10))(param_3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    auVar5 = FUN_00293580(lVar3,extraout_x1,&cf_Sender);

    uVar2 = FUN_00293580(lVar3,auVar5._8_8_,&cf_Receiver);

    if (((auVar5._0_4_ | uVar2) & 1) == 0) goto LAB_000ff228;

    FUN_00101730();

    lVar4 = DAT_003e6868;

    if (0 < DAT_003eb3b8) {

      lVar4 = DAT_003eb3b8;

    }

    FUN_00101340(auVar5._0_8_,lVar4,0);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) goto LAB_000ff228;

  }

  _objc_release(lVar3);

LAB_000ff294:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(lVar4);

  return;

}





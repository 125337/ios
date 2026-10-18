// FUN_001505bc @0x1505bc


void FUN_001505bc(long param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  FUN_002990e0(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_002a5520(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == param_1) {

      uVar3 = FUN_002978a0(param_3);

      _objc_release(lVar2);

      if ((uVar3 & 1) != 0) goto LAB_00150670;

      auVar4 = _objc_alloc(&objc::class_t::CadisSettingsViewController);

      auVar4 = FUN_00296ea0(auVar4._0_8_,auVar4._8_8_,2);

      lVar2 = auVar4._0_8_;

      FUN_002a1f60(lVar2,auVar4._8_8_,&cf__NuaSGr);

      FUN_0029e8c0(lVar2,extraout_x1,1);

      FUN_0029aa80(lVar1,extraout_x1_00,lVar2,1);

    }

    _objc_release(lVar2);

  }

LAB_00150670:

  _objc_release(lVar1);

  _objc_release(param_3);

  return;

}





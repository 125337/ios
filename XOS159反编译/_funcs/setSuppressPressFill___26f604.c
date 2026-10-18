// setSuppressPressFill: @0x26f604


/* Function Stack Size: 0x14 bytes */



void XZYDockLiquidButton::setSuppressPressFill_(ID param_1,SEL param_2,bool param_3)



{

  long lVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  

  if ((*(byte *)(param_1 + (long)_suppressPressFill) != param_3) &&

     (*(char *)(param_1 + (long)_suppressPressFill) = (char)param_3, param_3 != 0)) {

    lVar1 = (long)_pressFill;

    if (*(long *)(param_1 + lVar1) != 0) {

      FUN_0029cb60(0);

      FUN_00297e40(*(undefined8 *)(param_1 + lVar1));

      auVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_002a44a0(&cf_xzy_liquid_motion_,auVar2._8_8_,&cf_opacity);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b260(auVar2._0_8_,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

      _objc_release(auVar2._0_8_);

      return;

    }

  }

  return;

}





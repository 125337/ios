// FUN_002239ac @0x2239ac


void FUN_002239ac(long param_1,int param_2,int param_3)



{

  long lVar1;

  undefined8 extraout_x1;

  

  _objc_retain();

  if ((((param_1 != 0) && ((DAT_003eaa30 & 1) != 0)) && ((DAT_003ead50 & 1) == 0)) &&

     ((param_2 != 0 && (param_2 == DAT_003ead58)))) {

    FUN_002a6080(param_1,extraout_x1,&cf_m_tableView);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      if (param_3 != 0) {

        FUN_00223934(param_1);

      }

      FUN_0021e588(param_1);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}





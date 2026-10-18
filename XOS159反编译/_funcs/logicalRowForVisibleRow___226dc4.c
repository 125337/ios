// logicalRowForVisibleRow: @0x226dc4


/* Function Stack Size: 0x18 bytes */



long_long XZYMesReferRoundedSettingsViewController::logicalRowForVisibleRow_

                    (ID param_1,SEL param_2,long_long param_3)



{

  long_long lVar1;

  long_long lVar2;

  

  if (param_3 < 2) {

    return param_3;

  }

  if (DAT_003eafc8 <= 0.0) {

    lVar2 = 2;

  }

  else {

    if (param_3 == 2) {

      return param_3;

    }

    lVar2 = 3;

  }

  if (param_3 == lVar2) {

    return 3;

  }

  lVar1 = lVar2 + 1;

  if (DAT_003eafd0 == '\x01') {

    if (param_3 == lVar1) {

      return 4;

    }

    lVar1 = lVar2 + 2;

  }

  if (param_3 != lVar1) {

    if (DAT_003eafd1 == '\x01') {

      if (param_3 == lVar1 + 1) {

        return 6;

      }

      if (param_3 == lVar1 + 2) {

        return 7;

      }

    }

    return 0;

  }

  return 5;

}





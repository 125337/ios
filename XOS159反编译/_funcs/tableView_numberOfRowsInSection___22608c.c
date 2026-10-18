// tableView:numberOfRowsInSection: @0x22608c


/* Function Stack Size: 0x20 bytes */



long_long XZYMesReferRoundedSettingsViewController::tableView_numberOfRowsInSection_

                    (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  long lVar1;

  long_long lVar2;

  

  lVar2 = 1;

  if ((param_4 != 0) && (param_4 != 2)) {

    if (param_4 == 1) {

      lVar1 = 5;

      if (DAT_003eafc8 <= 0.0) {

        lVar1 = 4;

      }

      return lVar1 + (ulong)DAT_003eafd0 + (ulong)DAT_003eafd1 * 2;

    }

    lVar2 = 0;

  }

  return lVar2;

}





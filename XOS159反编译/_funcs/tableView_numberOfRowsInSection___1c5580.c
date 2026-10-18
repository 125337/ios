// tableView:numberOfRowsInSection: @0x1c5580


/* Function Stack Size: 0x20 bytes */



long_long XZYDesktopLyricsSettingsViewController::tableView_numberOfRowsInSection_

                    (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  long_long lVar1;

  

  if ((long)param_4 < 2) {

    if (param_4 == 0) {

      return 1;

    }

    if (param_4 == 1) {

      return (ulong)DAT_003ea920 << 1;

    }

  }

  else {

    if (param_4 == 2) {

      lVar1 = 7;

      if (DAT_003ea920 == 0) {

        lVar1 = 0;

      }

      return lVar1;

    }

    if (param_4 == 3) {

      return (ulong)DAT_003ea920;

    }

  }

  return 0;

}





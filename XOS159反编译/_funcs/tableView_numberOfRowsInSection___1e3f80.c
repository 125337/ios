// tableView:numberOfRowsInSection: @0x1e3f80


/* Function Stack Size: 0x20 bytes */



long_long XZYChatListGroupingSettingsViewController::tableView_numberOfRowsInSection_

                    (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  long lVar1;

  long_long lVar2;

  

  _objc_retain(param_3);

  if (param_4 == 0) {

    lVar2 = 1;

    goto LAB_001e4054;

  }

  if (DAT_003eaa30 == '\x01') {

    if ((long)param_4 < 3) {

      if (param_4 == 1) {

        lVar2 = 6;

        goto LAB_001e4054;

      }

      if (param_4 == 2) {

        lVar2 = 5;

        if (DAT_003eaac8 - 1U < 6) {

          lVar2 = 6;

        }

        goto LAB_001e4054;

      }

    }

    else {

      if (param_4 == 3) {

        lVar1 = FUN_00293860(DAT_003eaa10);

        lVar2 = lVar1 + 1;

        goto LAB_001e4054;

      }

      if (param_4 == 4) {

        lVar1 = 3;

        if (DAT_003e70f0 != '\0') {

          lVar1 = 4;

        }

        lVar2 = lVar1 + (ulong)DAT_003eaabe;

        if (DAT_003eaac8 - 1U < 4) {

          lVar2 = lVar2 + (ulong)DAT_003eaabf + (ulong)DAT_003eaac0 + 2;

        }

        goto LAB_001e4054;

      }

    }

  }

  lVar2 = 0;

LAB_001e4054:

  _objc_release(param_3);

  return lVar2;

}





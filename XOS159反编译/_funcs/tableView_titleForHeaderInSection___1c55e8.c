// tableView:titleForHeaderInSection: @0x1c55e8


/* Function Stack Size: 0x20 bytes */



ID XZYDesktopLyricsSettingsViewController::tableView_titleForHeaderInSection_

             (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  ID IVar1;

  SEL extraout_x1;

  undefined *puVar2;

  

  if (param_4 - 1 < 3) {

    puVar2 = (&PTR_cf_MOn__0038ec58)[param_4 - 1];

    if (DAT_003ea920 == '\0') {

      puVar2 = (undefined *)0x0;

    }

    _objc_retain(puVar2);

    param_2 = extraout_x1;

  }

  else {

    puVar2 = (undefined *)0x0;

  }

  IVar1 = _objc_autoreleaseReturnValue(puVar2,param_2);

  return IVar1;

}





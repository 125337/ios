// tableView:didSelectRowAtIndexPath: @0x1c7150


/* Function Stack Size: 0x20 bytes */



void XZYDesktopLyricsSettingsViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  u_int32_t uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  lVar2 = FUN_0029c020(param_4);

  if ((lVar2 == 1) && (lVar2 = FUN_0029bae0(param_4), lVar2 == 0)) {

    FUN_00299da0(param_1);

  }

  else {

    lVar2 = FUN_0029c020(param_4);

    if ((lVar2 == 2) && (lVar2 = FUN_0029bae0(param_4), lVar2 == 1)) {

      FUN_00299d80(param_1);

    }

    else {

      lVar2 = FUN_0029c020(param_4);

      if ((lVar2 == 2) && (lVar2 = FUN_0029bae0(param_4), lVar2 == 6)) {

        FUN_0029b7e0(param_1);

      }

      else {

        lVar2 = FUN_0029c020(param_4);

        if (lVar2 == 3) {

          uVar1 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bec80);

          _arc4random_uniform(uVar1);

          FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bec80);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_001c3d54();

          _objc_release(uVar3);

        }

      }

    }

  }

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}





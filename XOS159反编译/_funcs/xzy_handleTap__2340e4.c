// xzy_handleTap @0x2340e4


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockButton::xzy_handleTap(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  FUN_002a6840();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    lVar2 = FUN_002a6860(param_1);

    if (lVar2 == -2) {

      FUN_00234210(lVar1);

    }

    else {

      lVar2 = FUN_002a6860(param_1);

      if (lVar2 < 0) {

        uVar3 = FUN_002a6860(param_1);

        FUN_002359e4(lVar1,uVar3);

      }

      else {

        if ((99 < DAT_003e7298) || (DAT_003e7298 == 3)) {

          FUN_00233ea8(param_1);

        }

        uVar3 = FUN_002a6860(param_1);

        FUN_00233b10(lVar1,uVar3);

        FUN_00235cf4(lVar1);

        FUN_0029ff40(lVar1);

        local_48 = PTR___NSConcreteStackBlock_003886f0;

        local_40 = 0xc2000000;

        local_38 = FUN_0023618c;

        puStack_30 = &DAT_00388e60;

        _objc_retain(lVar1);

        local_28 = lVar1;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_48);

        _objc_release(local_28);

      }

    }

  }

  _objc_release(lVar1);

  return;

}





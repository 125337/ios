// FUN_00152d84 @0x152d84


void FUN_00152d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain(param_3);

  (*DAT_003e8958)(param_1,param_2,param_3);

  FUN_002a5680(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00295f20(auVar4._0_8_,auVar4._8_8_,param_3);

  _objc_release(auVar4._0_8_);

  if (iVar1 != 0) {

    FUN_001331b8();

    FUN_0013fe6c();

    FUN_00136604();

    FUN_0011afd8();

    FUN_0011afb8();

    iVar1 = FUN_00297b80(param_1);

    if (iVar1 != 0) {

      FUN_002a6220(param_1);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar2);

      if (lVar3 != 0) {

        FUN_00298700(param_1);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          local_58 = PTR___NSConcreteStackBlock_003886f0;

          local_50 = 0xc2000000;

          local_48 = FUN_00165a70;

          puStack_40 = &DAT_00388e60;

          _objc_retain(lVar3);

          local_38 = lVar3;

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

          _objc_release(local_38);

        }

        _objc_release(lVar3);

        goto LAB_00152ec4;

      }

    }

    DAT_003e89e3 = 1;

  }

LAB_00152ec4:

  _objc_release(param_3);

  return;

}





// FUN_002731b0 @0x2731b0


void FUN_002731b0(undefined8 param_1,long param_2)



{

  long lVar1;

  long lVar2;

  undefined1 auVar3 [16];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  undefined8 uStack_48;

  

  lVar1 = _objc_loadWeakRetained(param_2 + 0x20);

  if (lVar1 != 0) {

    FUN_0029c3c0(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      uStack_58 = 0;

      local_60 = 0;

      uStack_48 = 0;

      local_50 = 0;

      uStack_68 = 0;

      local_70 = 0;

    }

    else {

      FUN_0029a680(&local_70,lVar2);

    }

    FUN_0029c3e0(lVar1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uStack_98 = uStack_68;

    local_a0 = local_70;

    uStack_88 = uStack_58;

    uStack_90 = local_60;

    uStack_78 = uStack_48;

    local_80 = local_50;

    FUN_002a21c0(auVar3._0_8_,auVar3._8_8_,&local_a0);

    _objc_release(auVar3._0_8_);

    _objc_release(lVar2);

    FUN_002a5de0(param_1,lVar1);

  }

  _objc_release(lVar1);

  return;

}





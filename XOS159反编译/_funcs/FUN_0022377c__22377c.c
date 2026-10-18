// FUN_0022377c @0x22377c


void FUN_0022377c(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined8 local_80;

  undefined8 uStack_78;

  undefined8 uStack_70;

  undefined8 uStack_68;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 uStack_40;

  undefined8 uStack_38;

  undefined8 local_30;

  undefined8 uStack_28;

  

  if (*(char *)(param_1 + 0x28) == '\x01') {

    uVar1 = 0x3ff199999999999a;

  }

  else {

    uVar1 = 0x3feccccccccccccd;

  }

  _CGAffineTransformMakeScale(&local_50,uVar1,uVar1);

  uStack_78 = uStack_48;

  local_80 = local_50;

  uStack_68 = uStack_38;

  uStack_70 = uStack_40;

  uStack_58 = uStack_28;

  local_60 = local_30;

  FUN_002963a0(*(undefined8 *)(param_1 + 0x20));

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a21c0(auVar2._0_8_,auVar2._8_8_,&local_80);

  _objc_release(auVar2._0_8_);

  return;

}





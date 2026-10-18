// FUN_00223684 @0x223684


void FUN_00223684(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined8 local_90;

  undefined8 uStack_88;

  undefined8 uStack_80;

  undefined8 uStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 uStack_50;

  undefined8 uStack_48;

  undefined8 local_40;

  undefined8 uStack_38;

  

  uVar2 = 0x3ff0000000000000;

  if (*(char *)(param_1 + 0x28) == '\0') {

    uVar2 = 0;

  }

  FUN_002a53a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(uVar2);

  _objc_release(uVar1);

  if (*(char *)(param_1 + 0x28) == '\x01') {

    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

    local_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

    local_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

  }

  else {

    _CGAffineTransformMakeScale(&local_60,0x3feb333333333333,0x3feb333333333333);

  }

  uStack_88 = uStack_58;

  local_90 = local_60;

  uStack_78 = uStack_48;

  uStack_80 = uStack_50;

  uStack_68 = uStack_38;

  local_70 = local_40;

  FUN_002a53a0(*(undefined8 *)(param_1 + 0x20));

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a21c0(auVar3._0_8_,auVar3._8_8_,&local_90);

  _objc_release(auVar3._0_8_);

  return;

}





// FUN_000fc658 @0xfc658


void FUN_000fc658(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar5._0_8_,auVar5._8_8_,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),

               &cf_SHTM_CONTENT_CHAR_LIMIT);

  _objc_release(auVar5._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__ld);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f80(uVar1,auVar5._8_8_,auVar5._0_8_,0);

  _objc_release(auVar5._0_8_);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}





// FUN_0006fb20 @0x6fb20


void FUN_0006fb20(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  long local_48;

  

  FUN_0029f0a0(*(undefined8 *)(param_1 + 0x20),param_2,0);

  if (((*(long *)(param_1 + 0x28) != 0) || (*(long *)(param_1 + 0x30) == 0)) ||

     (auVar6 = FUN_00297fa0(), auVar6._0_8_ == 0)) {

    FUN_00298120(*(undefined8 *)(param_1 + 0x20));

    return;

  }

  local_48 = 0;

  FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar6._8_8_,*(undefined8 *)(param_1 + 0x30),0,

               &local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_48;

  _objc_retain(local_48);

  if (lVar1 != 0) {

    FUN_00298120();

    goto LAB_0006fd90;

  }

  FUN_002a63c0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((uVar4 & 1) == 0) {

    uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((uVar4 & 1) != 0) {

      FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(auVar6._0_8_,auVar6._8_8_,uVar2,&cf__);

      _objc_release(auVar6._0_8_);

      FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar6._0_8_;

      FUN_00291240(uVar3,auVar6._8_8_,&cf__);

      goto LAB_0006fd38;

    }

  }

  else {

    _objc_retain(uVar2);

    FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00291120(auVar6._0_8_,auVar6._8_8_,uVar2);

    _objc_release(auVar6._0_8_);

    FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00291600(uVar2);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a3f40(auVar6._0_8_,auVar6._8_8_,"localizedCompare:");

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00291260(uVar3,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar3);

    uVar3 = uVar2;

LAB_0006fd38:

    _objc_release(uVar3);

  }

  FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00293860();

  _objc_release(uVar3);

  if (lVar5 == 0) {

    FUN_00298120(*(undefined8 *)(param_1 + 0x20));

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

LAB_0006fd90:

  _objc_release(uVar2);

  _objc_release(lVar1);

  return;

}





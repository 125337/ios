// FUN_00221d5c @0x221d5c


void FUN_00221d5c(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 uStack_40;

  undefined8 uStack_38;

  undefined8 local_30;

  undefined8 uStack_28;

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  if ((uVar2 & 1) != 0) {

    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

    local_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

    local_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

    FUN_001e38b0(param_1,&local_50);

  }

  _objc_release(param_1);

  return;

}





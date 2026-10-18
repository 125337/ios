// FUN_000c3470 @0xc3470


void FUN_000c3470(void)



{

  undefined8 uVar1;

  undefined4 local_438 [256];

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_000c361c,&DAT_003e7bd0);

  _MSHookMessageEx(uVar1,"initHeadImageView",FUN_000c3b4c,&DAT_003e7bd8);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000c3d20,&DAT_003e7be0);

  local_438[0] = 0x3a4076;

  _class_addMethod(uVar1,"applyAvatarCornerRadiusFromCell",FUN_000c4870,local_438);

  local_438[0] = 0x3a4076;

  _class_addMethod(uVar1,"setupAvatarCoverMask",FUN_000c4ee0,local_438);

  local_438[0] = 0x3a4040;

  _class_addMethod(uVar1,"getPersonalCoverPath",FUN_000c5a64,local_438);

  local_438[0] = 0x3a4040;

  _class_addMethod(uVar1,"getPeerCoverPath",FUN_000c5c1c,local_438);

  local_438[0] = 0x3a4040;

  _class_addMethod(uVar1,"getGlobalCoverPath",FUN_000c5dd4,local_438);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000c6014,&DAT_003e7be8);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





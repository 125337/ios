// FUN_00128140 @0x128140


void FUN_00128140(void)



{

  undefined8 uVar1;

  undefined4 local_428;

  undefined1 local_424;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("MMCPLabel");

  _MSHookMessageEx(uVar1,"setFrame:",FUN_001282a0,&DAT_003e84d8);

  uVar1 = _objc_getClass("MMImageView");

  _MSHookMessageEx(uVar1,"setFrame:",FUN_00128350,&DAT_003e84e0);

  uVar1 = _objc_getClass("MainFrameItemView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00128400,&DAT_003e84e8);

  _MSHookMessageEx(uVar1,"updateNameLabel",FUN_00128538,&DAT_003e84f0);

  _MSHookMessageEx(uVar1,"updateWithCellData:",FUN_001285ec,&DAT_003e84f8);

  uVar1 = _objc_getClass("NewMainFrameViewController");

  _MSHookMessageEx(uVar1,"tableView:willDisplayCell:forRowAtIndexPath:",FUN_001286ac,&DAT_003e8500);

  local_428 = 0x403a4076;

  local_424 = 0;

  _class_addMethod(uVar1,"xzy_homeNameplateLongPress:",FUN_001287e8,&local_428);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_28) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





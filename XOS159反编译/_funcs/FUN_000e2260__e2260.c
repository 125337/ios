// FUN_000e2260 @0xe2260


void FUN_000e2260(void)



{

  undefined8 uVar1;

  undefined4 local_438;

  undefined2 local_434;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("BaseMsgContentViewController");

  _MSHookMessageEx(uVar1,"viewDidLoad",FUN_000e2368,&DAT_003e7d80);

  local_438 = 0x403a4042;

  local_434 = 0x40;

  _class_addMethod(uVar1,"dropInteraction:canHandleSession:",FUN_000e2448,&local_438);

  local_438 = 0x403a4040;

  local_434 = 0x40;

  _class_addMethod(uVar1,"dropInteraction:sessionDidUpdate:",FUN_000e24b8,&local_438);

  local_438 = 0x403a4076;

  local_434 = 0x40;

  _class_addMethod(uVar1,"dropInteraction:performDrop:",FUN_000e24dc,&local_438);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





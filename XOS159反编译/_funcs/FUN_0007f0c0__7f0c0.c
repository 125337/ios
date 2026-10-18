// FUN_0007f0c0 @0x7f0c0


void FUN_0007f0c0(void)



{

  undefined8 uVar1;

  undefined4 local_428;

  undefined1 local_424;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("AppFileMessageCellView");

  _MSHookMessageEx(uVar1,"operationMenuItems",FUN_0007f2d4,&DAT_003e7640);

  uVar1 = _objc_getClass("MMMenuController");

  _MSHookMessageEx(uVar1,"setMenuItems:",FUN_0007f834,&DAT_003e7648);

  _MSHookMessageEx(uVar1,"setMenuVisible:responder:animated:",FUN_00080714,&DAT_003e7650);

  _MSHookMessageEx(uVar1,"setMenuVisible:animated:",FUN_000807cc,&DAT_003e7658);

  _MSHookMessageEx(uVar1,"onMenuItemSelected:itemView:",FUN_0008081c,&DAT_003e7660);

  local_428 = 0x3a4076;

  _class_addMethod(uVar1,"xos_handleConfigurationRestore",FUN_00080a40,&local_428);

  local_428 = 0x3a4076;

  _class_addMethod(uVar1,"tts_handleTextToVoice",FUN_00081254,&local_428);

  local_428 = 0x3a4040;

  _class_addMethod(uVar1,"tts_getSelectedText",FUN_000812ac,&local_428);

  local_428 = 0x3a4040;

  _class_addMethod(uVar1,"tts_getCurrentChatUser",FUN_00081974,&local_428);

  local_428 = 0x3a4040;

  _class_addMethod(uVar1,"tts_getTopViewController",FUN_00081e08,&local_428);

  local_428 = 0x403a4040;

  local_424 = 0;

  _class_addMethod(uVar1,"tts_getTopViewControllerFrom:",FUN_00082110,&local_428);

  local_428 = 0x3a4076;

  _class_addMethod(uVar1,"ai_handleAIChat",FUN_00082270,&local_428);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_28) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





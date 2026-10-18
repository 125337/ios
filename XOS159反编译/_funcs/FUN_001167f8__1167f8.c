// FUN_001167f8 @0x1167f8


void FUN_001167f8(void)



{

  undefined8 uVar1;

  undefined4 local_428;

  undefined2 local_424;

  undefined1 local_422;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("_0x2f19de29");

  local_428 = 0x403a4076;

  local_424._0_1_ = 0;

  _class_addMethod(uVar1,"bubblePetSwitchChanged:",FUN_001169a8,&local_428);

  local_428 = 0x403a4076;

  local_424._0_1_ = 0;

  _class_addMethod(uVar1,"bubblePetAutoAnimSwitchChanged:",FUN_00116a98,&local_428);

  local_428 = 0x403a4076;

  local_424 = (ushort)local_424._1_1_ << 8;

  _class_addMethod(uVar1,"bubblePetStartFromFrontSwitchChanged:",FUN_00116b30,&local_428);

  local_428 = 0x3a4076;

  _class_addMethod(uVar1,"showBubblePetSettingsPage",FUN_00116bd0,&local_428);

  local_428 = 0x423a4076;

  local_424 = 0x4071;

  local_422 = 0;

  _class_addMethod(uVar1,"showBubblePetConfigForSender:position:tableView:",FUN_00116dd4,&local_428)

  ;

  local_428 = 0x403a4076;

  local_424 = 0x40;

  _class_addMethod(uVar1,"showBubblePetPathCodeEditorForKey:tableView:",FUN_001178f4,&local_428);

  local_428 = 0x403a4076;

  local_424 = local_424 & 0xff00;

  _class_addMethod(uVar1,"savePathCode:",FUN_00118650,&local_428);

  local_428 = 0x403a4076;

  local_424 = local_424 & 0xff00;

  _class_addMethod(uVar1,"clearPathCode:",FUN_00118a4c,&local_428);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_28) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





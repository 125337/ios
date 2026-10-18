// FUN_0014f7d8 @0x14f7d8


void FUN_0014f7d8(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined4 local_438;

  undefined1 local_434;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  iVar1 = FUN_00147794();

  if (iVar1 != 0) {

    uVar2 = _objc_getClass("NewMainFrameViewController");

    _MSHookMessageEx(uVar2,"viewDidLoad",FUN_0014fd14,&DAT_003e8918);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"xzy_updateHomeTopTitle",FUN_0014ff20,&local_438);

    local_438 = 0x403a4076;

    local_434 = 0;

    _class_addMethod(uVar2,"xzy_homeTitleButtonTapped:",FUN_001505bc,&local_438);

    uVar3 = _sel_registerName("dealloc");

    _MSHookMessageEx(uVar2,uVar3,FUN_001506c8,&DAT_003e8920);

    _MSHookMessageEx(uVar2,"viewWillAppear:",FUN_0015073c,&DAT_003e8928);

    _MSHookMessageEx(uVar2,"viewDidAppear:",FUN_00150844,&DAT_003e8930);

    _MSHookMessageEx(uVar2,"viewWillDisappear:",FUN_00150d1c,&DAT_003e8938);

    _MSHookMessageEx(uVar2,"viewDidDisappear:",FUN_00150e6c,&DAT_003e8940);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_appDidEnterBackground",FUN_00150f7c,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_appDidBecomeActive",FUN_00150f94,&local_438);

    local_438 = 0x403a4076;

    local_434 = 0;

    _class_addMethod(uVar2,"cadis_htmlCalendarNeedsVisualCheck:",FUN_00151028,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_onlineStatusUpdated",FUN_001510f4,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_weatherUpdated",FUN_00151244,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_reloadHeaderSectionForHTMLRecovery",FUN_001512f4,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_recoverHTMLCalendarIfNeeded",FUN_001513c4,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_headerNeedsRebuild",FUN_00151468,&local_438);

    _MSHookMessageEx(uVar2,"tableView:viewForHeaderInSection:",FUN_00151594,&DAT_003e8948);

    _MSHookMessageEx(uVar2,"tableView:heightForHeaderInSection:",FUN_00152ce0,&DAT_003e8950);

    _MSHookMessageEx(uVar2,"traitCollectionDidChange:",FUN_00152d84,&DAT_003e8958);

    local_438 = 0x403a4076;

    local_434 = 0;

    _class_addMethod(uVar2,"cadis_contactTapped:",FUN_00152f0c,&local_438);

    local_438 = 0x403a4076;

    local_434 = 0;

    _class_addMethod(uVar2,"cadis_htmlCalendarTapped:",FUN_0015331c,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_calendarTapped",FUN_0015342c,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_showCalendarPopup",FUN_00153438,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_rebuildCalendarCard",FUN_00153830,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_calendarPrevMonth",FUN_00155054,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_calendarNextMonth",FUN_00155068,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_toggleCalendarHoliday",FUN_0015507c,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_toggleMondayFirst",FUN_00155138,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_toggleXiuBan",FUN_001551f4,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_refreshHomeHeaderAfterCalendarStyleChange",FUN_001552b0,&local_438

                    );

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_switchCalendarStyle",FUN_00155348,&local_438);

    local_438 = 0x403a4076;

    local_434 = 0;

    _class_addMethod(uVar2,"cadis_dismissCalendarPopup:",FUN_001556dc,&local_438);

    local_438 = 0x3a4076;

    _class_addMethod(uVar2,"cadis_weatherBadgeTapped",FUN_00155870,&local_438);

    uVar2 = _objc_getClass("BaseMsgContentViewController");

    _MSHookMessageEx(uVar2,"viewWillAppear:",FUN_00155c04,&DAT_003e8960);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}





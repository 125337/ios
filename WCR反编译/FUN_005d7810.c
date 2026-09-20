// FUN_005d7810 @ 005d7810

void FUN_005d7810(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCUploadTask";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_appInfo_026a5c50,FUN_005d7a30,&DAT_028cb790);
  pcVar1 = "WCNewCommitViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_init_026ca6a8,FUN_005d7d10,&DAT_028cb798);
  _MSHookMessageEx(pcVar1,PTR_s_initWithImages_contacts__026a4ce8,FUN_005d7df8,&DAT_028cb7a0);
  _MSHookMessageEx(pcVar1,PTR_s_initWithSightDraft__026a4ce0,FUN_005d7f44,&DAT_028cb7a8);
  _MSHookMessageEx(pcVar1,PTR_s_initWithTextType_026a4cf0,FUN_005d8060,&DAT_028cb7b0);
  _MSHookMessageEx(pcVar1,PTR_s_reloadData_0269e400,FUN_005d8148,&DAT_028cb7b8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_005d81a4,&DAT_028cb7c0);
  _class_addMethod(pcVar1,PTR_s_WCRefineOnMomentsTailCell_026a5c58,FUN_005d81ec);
  pcVar1 = "WCTableViewManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSection__0269e3d0,FUN_005d824c,&DAT_028cb7c8);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


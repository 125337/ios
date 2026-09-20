// FUN_00587e78 @ 00587e78

void FUN_00587e78(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCTableViewManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSection__0269e3d0,FUN_00588048,&DAT_028cb5c8);
  pcVar1 = "WCNewCommitViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_reloadData_0269e400,FUN_00588158,&DAT_028cb5d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_005881b4,&DAT_028cb5d8);
  _MSHookMessageEx(pcVar1,PTR_s_OnDone_026a4d10,FUN_005881fc,&DAT_028cb5e0);
  _MSHookMessageEx(pcVar1,PTR_s_beginAnimationStepOne_026a4cf8,FUN_00588890,&DAT_028cb5e8);
  _MSHookMessageEx(pcVar1,PTR_s_beginAnimationStepTwoWithCustomV_026a4d08,FUN_0058894c,&DAT_028cb5f0
                  );
  _class_addMethod(pcVar1,PTR_s_WCRefineOnMomentsScheduledCell_026a5490,FUN_00588a68);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


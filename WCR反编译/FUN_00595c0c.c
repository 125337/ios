// FUN_00595c0c @ 00595c0c

void FUN_00595c0c(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_resetRightBarItem_026a5568,FUN_00595d2c,&DAT_028cb630);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onMomentsSearchButtonTa_026a5570,FUN_00596490);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


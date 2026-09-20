// FUN_002ed9a8 @ 002ed9a8

void FUN_002ed9a8(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AddEmoticonMsg_MsgWrap__026a1e58,FUN_002edae8,&DAT_028c99c8);
  _class_addMethod(pcVar1,PTR_s_gameActionSelected__026a1e60,FUN_002ee438);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


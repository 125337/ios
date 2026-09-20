// FUN_0069ffe8 @ 0069ffe8

void FUN_0069ffe8(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "UILabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setText__026caa88,FUN_006a0288,&DAT_028cbdf0);
  _MSHookMessageEx(pcVar1,PTR_s_setAttributedText__026a0000,FUN_006a042c,&DAT_028cbdf8);
  pcVar1 = "WCPluginsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setTitle__0269cef0,FUN_006a07ec,&DAT_028cbe00);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_006a0990,&DAT_028cbe08);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_006a0b1c,&DAT_028cbe10);
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar1,PTR_s_replacePluginTopAvatar_026a6588,FUN_006a0cb8);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_findAndReplaceImageView__026a6590,FUN_006a0d48);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}


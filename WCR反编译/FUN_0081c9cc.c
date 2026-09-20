// FUN_0081c9cc @ 0081c9cc

void FUN_0081c9cc(ulong param_1)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if (((DAT_028cd489 & 1) == 0) && (FUN_00849e74(), (param_1 & 1) != 0)) {
    DAT_028cd489 = 1;
    pcVar1 = "TextStateProfileTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0084a058,&DAT_028cd490);
    _MSHookMessageEx(pcVar1,PTR_s_indexPathForRowAtPoint__026a13a8,FUN_0084b660,&DAT_028cd498);
    pcVar1 = "MMUIButton";
    _objc_getClass();
    auStack_428[0] = 0x76;
    auStack_428[1] = 0x40;
    auStack_428[2] = 0x3a;
    sVar2 = _strlen("@");
    _memcpy(auStack_428 + 3,"@",sVar2);
    sVar2 = _strlen("@");
    auStack_428[(int)sVar2 + 3] = 0;
    _class_addMethod(pcVar1,PTR_s_handleLongPress__026a48f8,FUN_0084b8d4);
    pcVar1 = "MoreViewController";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_0084b978,&DAT_028cd4a0);
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0084bb44,&DAT_028cd4a8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}


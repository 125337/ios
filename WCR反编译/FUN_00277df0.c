// FUN_00277df0 @ 00277df0

void FUN_00277df0(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),&cf__1s);
  pcVar1 = "WCFinderScrollActionSheet";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar1 = "WCFinderScrollActionSheet";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_setItemArrayConfig__026a1610,FUN_00278080,&DAT_028c95c0);
  }
  pcVar1 = "WCFinderShareFeedCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar1 = "WCFinderShareFeedCellView";
    _objc_getClass();
    _MSHookMessageEx(pcVar1,PTR_s_operationMenuItems_026a1618,FUN_0027810c,&DAT_028c95c8);
    _class_addMethod(pcVar1,PTR_s_WCRefine_onFinderChatDownload__026a1620,FUN_002781bc);
    _class_addMethod(pcVar1,PTR_s_WCRefine_onFinderChatToVoice__026a1628,FUN_0027822c);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


// FUN_002ec3e8 @ 002ec3e8

void FUN_002ec3e8(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_002ec890,&DAT_028c99a0);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressForwardToGro_026a1e10,FUN_002ec9b0);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressForwardToGro_026a1e10,FUN_002eca38);
  pcVar1 = "AppFileMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressForwardToGro_026a1e10,FUN_002ecac0);
  pcVar1 = "AppFileMessageCellViewV2";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressForwardToGro_026a1e10,FUN_002ecb48);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initMultiSelectToolView_026a1e18,FUN_002ecbd0,&DAT_028c99a8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onMultiSelectForwardToG_026a1e20,FUN_002ecc0c);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}


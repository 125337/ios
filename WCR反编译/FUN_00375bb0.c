// FUN_00375bb0 @ 00375bb0

void FUN_00375bb0(void)

{
  char *pcVar1;
  
  pcVar1 = "MainSessionEditingLogic";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_003c28dc(pcVar1,PTR_s_handleHideSession_atCell__026a3058,FUN_003cc114,&DAT_028ca2a0);
    FUN_003c28dc(pcVar1,PTR_s_hideSession__026a3060,FUN_003cc328,&DAT_028ca2a8);
    FUN_003c28dc(pcVar1,PTR_s_deleteSessionAtIndexPath__026a3068,FUN_003cc4dc,&DAT_028ca2b0);
    FUN_003c28dc(pcVar1,PTR_s_handleEditing_forTableView_atInd_026a3070,FUN_003cc620,&DAT_028ca2b8);
  }
  return;
}


// FUN_005089a4 @ 005089a4

void FUN_005089a4(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTimeLineCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showContactInfo_026a4660,FUN_00508a3c,&DAT_028cafd8);
  _MSHookMessageEx(pcVar1,PTR_s_showProfileForUser__026a4668,FUN_00508b68,&DAT_028cafe0);
  pcVar1 = "WCCommentDetailViewControllerFB";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onHeadImageClicked__0269e700,FUN_00508dc4,&DAT_028cafe8);
  return;
}


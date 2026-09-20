// FUN_00694fec @ 00694fec

void FUN_00694fec(void)

{
  char *pcVar1;
  
  pcVar1 = "WCActionSheet";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_00695084,&DAT_028cbd50);
  _MSHookMessageEx(pcVar1,PTR_s_onDismissCompletelyWithClickedBu_026a1138,FUN_00695110,&DAT_028cbd58
                  );
  pcVar1 = "MMPhoneNumberHandler";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleTotalActionSheet_clickedBu_026a6500,FUN_00695158,&DAT_028cbd60
                  );
  return;
}


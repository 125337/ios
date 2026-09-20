// FUN_005df428 @ 005df428

void FUN_005df428(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTableViewManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSection__0269e3d0,FUN_005df4e0,&DAT_028cb810);
  _MSHookMessageEx(pcVar1,PTR_s_insertSection_At__026a5cd8,FUN_005df580,&DAT_028cb818);
  _MSHookMessageEx(pcVar1,PTR_s_tableView_numberOfRowsInSection__0269e8d8,FUN_005df630,&DAT_028cb820
                  );
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addCell__0269e3f8,FUN_005df774,&DAT_028cb828);
  return;
}


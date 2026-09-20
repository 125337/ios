// FUN_0072f8f8 @ 0072f8f8

void FUN_0072f8f8(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTableViewManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addSection__0269e3d0,FUN_0072fa40,&DAT_028cc4c8);
  _MSHookMessageEx(pcVar1,PTR_s_insertSection_At__026a5cd8,FUN_0072fb80,&DAT_028cc4d0);
  _MSHookMessageEx(pcVar1,PTR_s_tableView_numberOfRowsInSection__0269e8d8,FUN_0072fcd0,&DAT_028cc4d8
                  );
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addCell__0269e3f8,FUN_0072fe84,&DAT_028cc4e0);
  pcVar1 = "NewSettingViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_reloadTableData_0269dca8,FUN_0072ffbc,&DAT_028cc4e8);
  _MSHookMessageEx(pcVar1,PTR_s_setupSearchBar_026a7af0,FUN_00730008,&DAT_028cc4f0);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00730044,&DAT_028cc4f8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_00730094,&DAT_028cc500);
  return;
}


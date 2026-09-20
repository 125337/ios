// FUN_01556850 @ 01556850

void FUN_01556850(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_01530bc4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    puVar2 = PTR_WCRCommonFriendListViewController_026ced80;
    _objc_alloc_init();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setEntries__026a2ba8,local_28);
    FUN_01556938(local_38);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feqQT_YS);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}


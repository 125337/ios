// FUN_0183cd74 @ 0183cd74

void FUN_0183cd74(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setPreviewAvatarLoading__026b6638,0),
     local_20 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPreviewAvatarImage__026b6630,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


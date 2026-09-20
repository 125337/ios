// FUN_007ff640 @ 007ff640

void FUN_007ff640(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_setAssociatedObject(lVar1,&DAT_028ccee9,0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefineToDo_reloadCardNow_026a8818);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


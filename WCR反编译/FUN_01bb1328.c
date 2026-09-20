// FUN_01bb1328 @ 01bb1328

void FUN_01bb1328(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_realIndexForMessageId__026c0410,*(undefined8 *)(param_1 + 0x20)),
     lVar1 != 0x7fffffffffffffff)) {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveMessages_026c03c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_updateNavigationTitle_026beaa0);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


// FUN_01bb1bc4 @ 01bb1bc4

/* WARNING: Type propagation algorithm not settling */

void FUN_01bb1bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_40;
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  lVar1 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 == 0) {
    (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_saveMessages_026c03c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_updateNavigationTitle_026beaa0);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}


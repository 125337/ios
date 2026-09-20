// wcrGrouping_handleTableTapToDismissSwipe: @ 00366b48

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_handleTableTapToDismissSwipe_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_00364b04();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}


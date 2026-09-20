// scrollViewWillBeginDragging: @ 0036ee68

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSessionListViewController::scrollViewWillBeginDragging_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  uint local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_28;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0;
  if (IVar2 == IVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_00364b04();
    local_38 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_38 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


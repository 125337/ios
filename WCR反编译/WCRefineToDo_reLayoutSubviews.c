// WCRefineToDo_reLayoutSubviews @ 007f3188

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_reLayoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_reLayoutSubviews_026a8618);
  FUN_007f309c();
  if ((param_1 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isDragging_0269ddf8);
    if ((((IVar2 & 1) == 0) &&
        (IVar2 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDecelerating_0269e888),
        (IVar2 & 1) == 0)) &&
       (IVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isTracking_0269ddf0),
       (IVar2 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,
                 PTR_s_scheduleSettleOnTableView_owner__026a2470,local_28,local_18);
      bVar1 = true;
    }
    _objc_storeStrong(&local_28,0);
    if (bVar1) {
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,&cf_reLayoutSubviews);
  return;
}


// WCRefineToDo_viewDidLayoutSubviews @ 007f3e98

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_viewDidLayoutSubvie_026a85d8);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar3;
    if ((IVar3 == 0) ||
       ((((*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isDragging_0269ddf8), (IVar3 & 1) == 0
         && (IVar3 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDecelerating_0269e888),
            (IVar3 & 1) == 0)) &&
        (IVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isTracking_0269ddf0)
        , (IVar3 & 1) == 0)))) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_headerReadyForLayou_026a87f0,local_28);
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,
                   &cf_viewDidLayoutSubviews);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_ensureCard_026a87d0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,
                   &cf_viewDidLayoutSubviews);
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}


// toDoCellDidTapCheck: @ 01eb7688

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListEditorViewController::toDoCellDidTapCheck_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
    puVar2 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_026ce280;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineToDoStore_026cf6a0;
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toggleDoneForEntry__026c71a0);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadEntries_026c2870);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


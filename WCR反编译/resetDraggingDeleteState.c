// resetDraggingDeleteState @ 01b137d4

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::resetDraggingDeleteState(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDraggingDeleteCell__026bebb0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDraggingDeleteIndexPath__026bebb8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDraggingDeleteRecord__026bebc0,0);
  puVar1 = PTR__CGPointZero_025782e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGPointZero_025782e0,*(undefined8 *)(PTR__CGPointZero_025782e0 + 8)
             ,param_1,PTR_s_setDraggingDeleteStartCenter__026bebc8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),param_1,
             PTR_s_setDraggingDeleteStartPoint__026bebd0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDraggingDeleteArmed__026bebd8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}


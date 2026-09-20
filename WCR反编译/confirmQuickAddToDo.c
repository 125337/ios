// confirmQuickAddToDo @ 01e8696c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::confirmQuickAddToDo(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_quickAddAlert_026c7220);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingQuickAddMode_026c7238);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_confirmQuickAddToDoWithAlert_mod_026c7240,IVar1,IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}


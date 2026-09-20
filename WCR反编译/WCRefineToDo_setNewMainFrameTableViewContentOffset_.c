// WCRefineToDo_setNewMainFrameTableViewContentOffset: @ 007f4a1c

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHook::WCRefineToDo_setNewMainFrameTableViewContentOffset_
               (ID param_1,SEL param_2,CGPoint param_3)

{
  byte bVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_WCRefineToDo_findMainTableView_026a87e8,param_3.field0_0x0,
             param_3.field1_0x8);
  bVar1 = (byte)IVar2;
  _objc_retainAutoreleasedReturnValue();
  FUN_007f4ad4();
  (*(code *)PTR__objc_release_02578630)();
  FUN_007f4cb4();
  FUN_007f4d8c(1);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,param_1,PTR_s_WCRefineToDo_setNewMainFrameTabl_026a8850);
  FUN_007f4d8c(bVar1 & 1);
  return;
}


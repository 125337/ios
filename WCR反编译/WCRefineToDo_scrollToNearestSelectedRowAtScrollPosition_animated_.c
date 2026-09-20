// WCRefineToDo_scrollToNearestSelectedRowAtScrollPosition:animated: @ 007fbc88

/* Function Stack Size: 0x1c bytes */

void WCRefineToDoHook::WCRefineToDo_scrollToNearestSelectedRowAtScrollPosition_animated_
               (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = param_1;
  FUN_007fb9b4();
  FUN_007fba8c(1);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_WCRefineToDo_scrollToNearestSele_026a8928,param_3,param_4 & 1);
  FUN_007fba8c((byte)IVar1 & 1);
  return;
}


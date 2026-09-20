// WCRefineToDo_scrollToRowAtIndexPath:atScrollPosition:animated: @ 007fb77c

/* Function Stack Size: 0x24 bytes */

void WCRefineToDoHook::WCRefineToDo_scrollToRowAtIndexPath_atScrollPosition_animated_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,bool param_5)

{
  byte bVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  ID IVar3;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  FUN_007fb85c(local_18,local_28,&cf_scrollToRow);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)();
  bVar1 = (byte)IVar3;
  FUN_007fb9b4();
  FUN_007fba8c(1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_scrollToRowAtIndexP_026a8918,local_28,param_4,param_5 & 1);
  FUN_007fba8c(bVar1 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}


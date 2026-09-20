// WCRefineToDo_insertSections:withRowAnimation: @ 007fb298

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHook::WCRefineToDo_insertSections_withRowAnimation_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  IVar2 = local_18;
  local_30 = param_4;
  FUN_007fa7d0(local_18,&local_38);
  if ((IVar2 & 1) != 0) {
    uVar3 = local_28;
    FUN_007fb354(local_28,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_insertSections_with_026a88f8,local_28,local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


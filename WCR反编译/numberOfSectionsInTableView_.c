// numberOfSectionsInTableView: @ 01eb5ed4

/* Function Stack Size: 0x18 bytes */

long_long WCRefineToDoListEditorViewController::numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  int iVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasDoneSection_026c77a8);
  iVar2 = 2;
  if ((IVar1 & 1) == 0) {
    iVar2 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return (long)iVar2;
}


// WCRefineToDo_removeItemWithMessage: @ 007f94d8

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoHook::WCRefineToDo_removeItemWithMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_removeItemWithMessa_026a8668,local_28);
  FUN_007f9358();
  _objc_storeStrong(&local_28,0);
  return (byte)IVar1 & 1;
}


// forceCallKitClassBool:sel: @ 01f4e038

/* Function Stack Size: 0x20 bytes */

bool WCRefineVersionController::forceCallKitClassBool_sel_
               (ID param_1,SEL param_2,CLASS param_3,SEL param_4)

{
  CLASS CVar1;
  byte local_11;
  
  if ((param_3 == 0) ||
     (CVar1 = param_3,
     (*(code *)PTR__objc_msgSend_02578628)(param_3,PTR_s_respondsToSelector__026ca818,param_4),
     (CVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_3,param_4);
    local_11 = (byte)param_3 & 1;
  }
  return (uint)local_11;
}


// applyLocalChange: @ 01b783fc

/* Function Stack Size: 0x18 bytes */

void WCRefineLongPressMenuViewController::applyLocalChange_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSuppressExternalReload__026bfb98,1);
    (**(code **)(local_28 + 0x10))();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSuppressExternalReload__026bfb98,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


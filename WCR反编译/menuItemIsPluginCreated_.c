// menuItemIsPluginCreated: @ 01103ba0

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginIconCatalog::menuItemIsPluginCreated_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_menuType_026ad408),
     (uVar1 & 1) == 0)) {
    local_11 = false;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_menuType_026ad408);
    local_11 = uVar1 == 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}


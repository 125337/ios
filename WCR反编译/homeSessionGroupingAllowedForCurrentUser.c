// homeSessionGroupingAllowedForCurrentUser @ 01ac6eb4

/* Function Stack Size: 0x10 bytes */

bool WCRefineGroupManagementViewController::homeSessionGroupingAllowedForCurrentUser
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  _WCRefineHomeGroupingRegularGateAllowed();
  return bVar1;
}


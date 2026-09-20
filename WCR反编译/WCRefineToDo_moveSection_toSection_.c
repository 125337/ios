// WCRefineToDo_moveSection:toSection: @ 007fb6a8

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHook::WCRefineToDo_moveSection_toSection_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  long_long local_48;
  long_long local_40;
  long local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_007fa7d0(param_1,&local_38);
  if ((param_1 & 1) != 0) {
    if ((long)local_28 < local_38) {
      local_40 = local_28;
    }
    else {
      local_40 = local_28 + 1;
    }
    local_28 = local_40;
    if ((long)local_30 < local_38) {
      local_48 = local_30;
    }
    else {
      local_48 = local_30 + 1;
    }
    local_30 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_moveSection_toSecti_026a8910,local_28,local_30);
  return;
}


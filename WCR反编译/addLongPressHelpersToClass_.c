// addLongPressHelpersToClass: @ 00375f48

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::addLongPressHelpersToClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong local_50;
  undefined *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30[0] = PTR_s_wcrGrouping_active_026a2a40;
  local_30[1] = PTR_s_wcrGrouping_findMainTableView_026a2848;
  local_30[2] = PTR_s_wcrGrouping_handleHomeItemLongPr_026a2a48;
  for (local_50 = 0; local_50 < 3; local_50 = local_50 + 1) {
    IVar1 = param_1;
    _class_getInstanceMethod(param_1,local_30[local_50]);
    if (IVar1 != 0) {
      puVar3 = local_30[local_50];
      IVar2 = IVar1;
      _method_getImplementation();
      _method_getTypeEncoding(IVar1);
      _class_addMethod(param_3,puVar3,IVar2,IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}


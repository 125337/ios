// addHelpersToClass: @ 007f2ce0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::addHelpersToClass_(ID param_1,SEL param_2,CLASS param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong local_90;
  undefined *local_70 [11];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70[0] = PTR_s_WCRefineToDo_ensureCard_026a87d0;
  local_70[1] = PTR_s_WCRefineToDo_removeCard_026a87d8;
  local_70[2] = PTR_s_WCRefineToDo_layoutCard_026a87e0;
  local_70[3] = PTR_s_WCRefineToDo_findMainTableView_026a87e8;
  local_70[4] = PTR_s_WCRefineToDo_headerReadyForLayou_026a87f0;
  local_70[5] = PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8;
  local_70[6] = PTR_s_WCRefineToDo_markHeaderReadyAndS_026a8800;
  local_70[7] = PTR_s_WCRefineToDo_onCardTapped__026a8808;
  local_70[8] = PTR_s_WCRefineToDo_reloadCard_026a8810;
  local_70[9] = PTR_s_WCRefineToDo_reloadCardNow_026a8818;
  local_70[10] = PTR_s_WCRefineToDo_restoreInsetIfNeede_026a8820;
  for (local_90 = 0; local_90 < 0xb; local_90 = local_90 + 1) {
    IVar1 = param_1;
    _class_getInstanceMethod(param_1,local_70[local_90]);
    if (IVar1 != 0) {
      puVar3 = local_70[local_90];
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


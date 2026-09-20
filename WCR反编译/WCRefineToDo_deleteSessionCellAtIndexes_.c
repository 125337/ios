// WCRefineToDo_deleteSessionCellAtIndexes: @ 007f9df0

/* WARNING: Removing unreachable block (ram,0x007fa094) */
/* WARNING: Removing unreachable block (ram,0x007fa074) */
/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_deleteSessionCellAtIndexes_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  byte local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  FUN_007fa0e4();
  if ((IVar1 & 1) == 0) {
    uStack_48 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_50 = *(undefined8 *)PTR__CGPointZero_025782e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentOffset_0269dd18);
    local_50 = in_d0;
    uStack_48 = in_d1;
  }
  local_51 = 0;
  pcVar2 = &cf_disableTableAnimation;
  _NSSelectorFromString();
  pcVar3 = &cf_setDisableTableAnimation_;
  _NSSelectorFromString();
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,PTR_WCRefineHomeHeaderUnstick_026ce568,
               PTR_s_beginHoldAtViewportTopForDuratio_026a88d0);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((IVar4 & 1) != 0) &&
       (IVar4 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar3),
       (IVar4 & 1) != 0)) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2);
      local_51 = (byte)IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3,1);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_deleteSessionCellAt_026a8630,local_28);
  if ((IVar1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3,local_51 & 1);
    }
    FUN_007fa220(local_50,uStack_48,local_18,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}


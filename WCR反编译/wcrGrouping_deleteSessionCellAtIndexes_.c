// wcrGrouping_deleteSessionCellAtIndexes: @ 00380660

/* WARNING: Removing unreachable block (ram,0x003807c8) */
/* WARNING: Removing unreachable block (ram,0x003807a8) */
/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_deleteSessionCellAtIndexes_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_deleteSessionCellAtI_026a2a20,local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0,&cf_deleteSessionCell);
    IVar2 = local_18;
    pcVar3 = &cf_disableTableAnimation;
    _NSSelectorFromString(&cf_disableTableAnimation);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,pcVar3);
    IVar1 = local_18;
    pcVar3 = &cf_setDisableTableAnimation_;
    _NSSelectorFromString(&cf_setDisableTableAnimation_);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,pcVar3,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_deleteSessionCellAtI_026a2a20,local_28);
    IVar1 = local_18;
    pcVar3 = &cf_setDisableTableAnimation_;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,pcVar3,(byte)IVar2 & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


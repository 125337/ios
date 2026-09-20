// promptEditAtIndex: @ 01c84760

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubCustomEntriesViewController::promptEditAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  bVar1 = true;
  if (-1 < (long)param_3) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)IVar3 <= (long)param_3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingEditIndex__026c2860,param_3);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_inputStringForEntry__026c28a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_showEntryAlertWithTitle_defaultT_026c2898,&cf__cNeQS);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}


// reloadSelectedMembersSection @ 01aa7ab8

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::reloadSelectedMembersSection(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_captureInputDrafts_026bdb78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_invalidateMemberLookupCaches_026bdc38);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((long)IVar2 < 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_026ce378;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSIndexSet_026ce378,PTR_s_indexSetWithIndex__026bdc40,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_reloadSections_withRowAnimation__026bdc48,puVar3,5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}


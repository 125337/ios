// savePluginPageSheet @ 01e694b4

/* Function Stack Size: 0x10 bytes */

void WCRefineTextReplaceViewController::savePluginPageSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,"pluginPageTextView");
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPluginPageReplacement__026c6b08);
    (*(code *)PTR__objc_release_02578630)(param_1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_changedKeys_026c6c70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveAllChangesImmediately_026c6ac0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closePluginPageSheet_026c6d28);
  _objc_storeStrong(&local_28,0);
  return;
}


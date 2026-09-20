// applyHTMLCardDefaultLayout @ 01ef306c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::applyHTMLCardDefaultLayout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setToDoCardSourceMode__026b2dc0,2);
  _objc_storeStrong(&local_28,0);
  return;
}


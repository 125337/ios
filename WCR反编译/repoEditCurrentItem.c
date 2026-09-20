// repoEditCurrentItem @ 01eeffbc

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::repoEditCurrentItem(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentRepositoryActionItem_026c7ee0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editRepositoryItem__026c7ef8,param_1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}


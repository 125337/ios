// isDueToday @ 01f10b4c

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoEntry::isDueToday(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineToDoStore_026cf6a0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dueDate_026c74b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isToday__026c81b0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)puVar1;
}


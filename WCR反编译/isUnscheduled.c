// isUnscheduled @ 01f10af0

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoEntry::isUnscheduled(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dueDate_026c74b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  return (uint)(param_1 == 0);
}


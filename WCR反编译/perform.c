// perform @ 01de72c0

/* Function Stack Size: 0x10 bytes */

void WCRSpecialTextAction::perform(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_owner_026a2580);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}


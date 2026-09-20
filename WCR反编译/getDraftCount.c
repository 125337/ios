// getDraftCount @ 010b3844

/* Function Stack Size: 0x10 bytes */

long_long WCRefineMomentsDraftManager::getDraftCount(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drafts_026ae608);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return IVar1;
}


// FUN_01bc067c @ 01bc067c

void FUN_01bc067c(long param_1)

{
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}


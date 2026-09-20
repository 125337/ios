// FUN_01854120 @ 01854120

void FUN_01854120(long param_1)

{
  long local_48;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (local_20 == 0) {
    local_48 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_48 = local_20;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_loadCandidatesFromUserNames_sour_026b69c8,local_48,&cf_uJ_YRh,&cf__);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}


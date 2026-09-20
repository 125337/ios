// FUN_01854f2c @ 01854f2c

void FUN_01854f2c(long param_1)

{
  long lVar1;
  long local_58;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    if (local_20 == 0) {
      local_58 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_58 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_loadCandidatesFromUserNames_sour_026b69c8,local_58,&cf_8_b,&cf__);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


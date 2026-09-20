// FUN_008bdb58 @ 008bdb58

int FUN_008bdb58(float param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int local_28;
  ulong local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_14 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_008b7f4c(local_20,PTR_s_duration_0269dd70);
    local_28 = (int)uVar1;
    if (local_28 == 0) {
      uVar1 = local_20;
      FUN_008ba2e0(local_20,&cf_duration);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_008be984();
      local_28 = (int)uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_28 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getVoiceDuration_026a9b08);
      if (((uVar1 & 1) == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getVoiceDuration_026a9b08),
         param_1 <= 0.0)) {
        local_14 = 0;
      }
      else {
        local_14 = (int)param_1;
      }
    }
    else {
      local_14 = local_28;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}


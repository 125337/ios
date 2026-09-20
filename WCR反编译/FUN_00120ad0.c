// FUN_00120ad0 @ 00120ad0

void FUN_00120ad0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineAuthNameHelper_026ce2e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_maskedAuthNameForUser__0269ef78,local_18);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}


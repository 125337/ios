// FUN_0184d09c @ 0184d09c

long FUN_0184d09c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double in_d3;
  double local_30;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_20;
  dVar3 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_maximumDetentValue_026af2e0);
  local_30 = in_d3;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maximumDetentValue_026af2e0);
    local_30 = dVar3;
  }
  local_30 = local_30 * DAT_02323d60;
  _objc_storeStrong(&local_20,0);
  return (long)local_30;
}


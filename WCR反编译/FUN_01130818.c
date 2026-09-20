// FUN_01130818 @ 01130818

long FUN_01130818(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double in_d3;
  double local_30;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  dVar3 = 0.0;
  local_30 = 0.0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_maximumDetentValue_026af2e0);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maximumDetentValue_026af2e0);
    local_30 = dVar3;
  }
  if (local_30 <= 0.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_30 = in_d3;
  }
  local_30 = local_30 * DAT_02323d00;
  _objc_storeStrong(&local_20,0);
  return (long)local_30;
}


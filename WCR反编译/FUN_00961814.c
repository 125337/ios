// FUN_00961814 @ 00961814

double FUN_00961814(double param_1)

{
  undefined *puVar1;
  double local_30;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_30 = param_1;
  if (param_1 <= 0.5) {
    local_30 = 2.0;
  }
  return local_30;
}


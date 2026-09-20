// FUN_01e74e64 @ 01e74e64

double FUN_01e74e64(double param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  double local_18;
  
  local_18 = param_1;
  if (param_1 <= 1.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_18 = param_3;
  }
  return local_18;
}


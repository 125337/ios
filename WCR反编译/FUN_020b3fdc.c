// FUN_020b3fdc @ 020b3fdc

double FUN_020b3fdc(double param_1)

{
  undefined *puVar1;
  double local_30;
  undefined *local_20;
  double local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doubleValue_026ca608);
  local_30 = param_1;
  if (param_1 == 0.0) {
    local_30 = 0.0;
  }
  _objc_storeStrong(&local_20,0);
  return local_30;
}


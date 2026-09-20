// FUN_01bc8a60 @ 01bc8a60

double FUN_01bc8a60(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double local_80;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
  local_80 = param_3;
  if (param_3 < param_4) {
    local_80 = param_4;
  }
  dVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scale_026ca830);
  _objc_storeStrong(&local_18,0);
  return local_80 * dVar2;
}


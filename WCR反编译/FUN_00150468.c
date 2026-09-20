// FUN_00150468 @ 00150468

double FUN_00150468(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_c0;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (DAT_028c87e8 <= 0.0) {
    local_c0 = 0.0;
  }
  else {
    local_c0 = DAT_028c87e8;
  }
  local_38 = local_c0;
  dVar2 = 1.0;
  dVar4 = param_3;
  if (local_c0 < 1.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    dVar4 = dVar2;
    local_38 = param_3;
  }
  dVar3 = 1.0;
  dVar2 = dVar4;
  if (local_38 < 1.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    dVar2 = dVar3;
    local_38 = dVar4;
  }
  if (local_38 < 1.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_38 = dVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38;
}


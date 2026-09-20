// FUN_00213b6c @ 00213b6c

void FUN_00213b6c(double param_1,double param_2)

{
  undefined *puVar1;
  undefined *local_28;
  double local_20;
  double local_18;
  
  if ((1.0 <= param_1) && (1.0 <= param_2)) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    local_20 = param_1;
    local_18 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRefine_msgBanner_lastW);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,local_28,PTR_s_setDouble_forKey__026a0790,&cf_WCRefine_msgBanner_lastH);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_synchronize_026a0798);
    _objc_storeStrong(&local_28,0);
  }
  return;
}


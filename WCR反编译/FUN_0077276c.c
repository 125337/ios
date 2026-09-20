// FUN_0077276c @ 0077276c

double FUN_0077276c(double param_1)

{
  undefined *puVar1;
  ulong uVar2;
  double local_18;
  
  uVar2 = DAT_028cc8b0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    uVar2 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pendingTimestamp);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_18 = param_1;
    if (param_1 <= 0.0) {
      uVar2 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_timestamp);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_18 = param_1;
    }
  }
  return local_18;
}


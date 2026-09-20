// FUN_0076c92c @ 0076c92c

bool FUN_0076c92c(double param_1,double *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  bool local_11;
  
  uVar2 = DAT_028cc8b0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    if (param_2 != (double *)0x0) {
      *param_2 = 1.7976931348623157e+308;
    }
    local_11 = false;
  }
  else {
    uVar2 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_hasRewardAction);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      if (param_2 != (double *)0x0) {
        *param_2 = 1.7976931348623157e+308;
      }
      local_11 = false;
    }
    else {
      uVar2 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pendingTimestamp);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (0.0 < param_1) {
        puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
        dVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar4 = dVar4 - param_1;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (param_2 != (double *)0x0) {
          *param_2 = dVar4;
        }
        local_11 = false;
        if (0.0 <= dVar4) {
          local_11 = dVar4 <= 180.0;
        }
      }
      else {
        if (param_2 != (double *)0x0) {
          *param_2 = 1.7976931348623157e+308;
        }
        local_11 = false;
      }
    }
  }
  return local_11;
}


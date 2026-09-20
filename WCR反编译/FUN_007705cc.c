// FUN_007705cc @ 007705cc

bool FUN_007705cc(double param_1)

{
  undefined *puVar1;
  ulong uVar2;
  double local_28;
  bool local_11;
  
  uVar2 = DAT_028cc8b0;
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_11 = true;
    }
    else {
      uVar2 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_tapAmountInYuan);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_28 <= 0.0) {
        uVar2 = DAT_028cc8b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (0.0 < local_28) {
        local_11 = ABS(local_28 - param_1) < DAT_023242a8;
      }
      else {
        local_11 = true;
      }
    }
  }
  else {
    local_11 = false;
  }
  return local_11;
}


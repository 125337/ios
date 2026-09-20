// FUN_0003530c @ 0003530c

double FUN_0003530c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = -1.0;
    local_30 = 1;
  }
  else {
    FUN_00036174();
    _objc_retainAutoreleasedReturnValue();
    local_40 = 0;
    local_38 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((uVar2 & 1) == 0) {
      local_18 = -1.0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
      local_18 = param_1 - dVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}


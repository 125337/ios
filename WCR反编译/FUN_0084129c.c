// FUN_0084129c @ 0084129c

void FUN_0084129c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_unknown;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_30,&cf_memory_warn);
        }
      }
      else {
        _objc_storeStrong(&local_30,&cf_terminate);
      }
    }
    else {
      _objc_storeStrong(&local_30,&cf_background);
    }
  }
  else {
    _objc_storeStrong(&local_30,&cf_active);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_state___);
  _objc_retainAutoreleasedReturnValue();
  FUN_00840570(&cf_lifecycle);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}


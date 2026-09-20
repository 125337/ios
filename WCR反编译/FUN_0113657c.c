// FUN_0113657c @ 0113657c

void FUN_0113657c(undefined8 param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_a8;
  long local_a0;
  long local_70;
  long local_60;
  long local_50;
  long local_40;
  long local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar2 = local_30;
  if (lVar3 == 0) {
    bVar1 = (local_21 & 1) == 0;
    local_a0 = local_20;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_a0;
    }
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = local_a0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_60;
      FUN_01130f58();
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_a8;
    }
    else {
      local_a8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
    if (lVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


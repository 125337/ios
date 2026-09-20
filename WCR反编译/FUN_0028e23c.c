// FUN_0028e23c @ 0028e23c

long FUN_0028e23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_score);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_score);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  local_28 = lVar3;
  if (lVar3 == 0) {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_bitRate);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_bitRate);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_28 = lVar3;
    if (lVar3 == 0) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_h265);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_h265);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_28 = lVar3;
      if (lVar3 == 0) {
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_level);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_level);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
        local_28 = lVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}


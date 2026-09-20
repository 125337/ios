// FUN_00f2aeb0 @ 00f2aeb0

long FUN_00f2aeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_order);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == lVar3) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_compare_options__026a2e98,lVar4,1);
    local_18 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    local_18 = 1;
    if (lVar2 < lVar3) {
      local_18 = -1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}


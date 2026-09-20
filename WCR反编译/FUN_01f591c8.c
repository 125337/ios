// FUN_01f591c8 @ 01f591c8

double FUN_01f591c8(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_a0;
  ulong local_90;
  ulong local_80;
  ulong local_60;
  ulong local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  double local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
  _objc_retainAutoreleasedReturnValue();
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_80 = uVar4;
  if (uVar4 == 0) {
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_created_at);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_90 = local_40;
    if (local_40 == 0) {
      local_50 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_updatedAt);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_50 == 0;
      local_a0 = local_50;
      if (bVar1) {
        local_60 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_updated_at);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_60;
      }
      local_90 = local_a0;
    }
    local_80 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  uVar6 = local_38;
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((uVar6 & 1) == 0) ||
       (uVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      local_28 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
      local_28 = param_1;
      if (param_1 <= 100000000.0) {
        local_18 = &DAT_028e48d0;
        local_20 = 0;
        _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258ce30);
        if (*local_18 + 1 != 0) {
          _dispatch_once(*local_18 + 1,local_18,local_20);
        }
        _objc_storeStrong(&local_20,0);
        uVar7 = DAT_028e48c8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e48c8,PTR_s_dateFromString__026aa6a8,local_38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_28 = param_1;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    local_28 = param_1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}


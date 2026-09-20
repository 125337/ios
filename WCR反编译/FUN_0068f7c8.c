// FUN_0068f7c8 @ 0068f7c8

void FUN_0068f7c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_28 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_18,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_28 = (uint)(puVar1 == (undefined *)0x0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}


// FUN_015d96d0 @ 015d96d0

void FUN_015d96d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_c0;
  double local_b8;
  undefined *local_a0;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_40 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_b8 = *(double *)(param_1 + 0x28);
  if (local_b8 <= 0.0) {
    local_b8 = 0.0;
  }
  if (local_b8 <= 1.0) {
    local_c0 = local_b8;
  }
  else {
    local_c0 = 1.0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_blur);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,
             *(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}


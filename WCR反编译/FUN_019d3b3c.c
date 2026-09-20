// FUN_019d3b3c @ 019d3b3c

void FUN_019d3b3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_familyName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_styleName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_019e0d10();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_019e0d10();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) ||
     (puVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    puVar1 = local_30;
    if (puVar2 == (undefined *)0x0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_019e0bec();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_48 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_48;
        FUN_019e0bec();
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_a0;
      }
      else {
        local_a0 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_34 = 1;
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


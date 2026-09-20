// FUN_0219d408 @ 0219d408

void FUN_0219d408(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_58 = param_1;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasPrefix__0269d320,&cf_set);
  if (((ulong)param_1 & 1) != 0) {
    local_28 = 3;
    local_30 = 1;
    local_20 = 3;
    local_18 = 1;
    local_78 = 3;
    local_70 = 1;
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringWithRange__0269d138,3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_60;
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_50 = puVar2 + -5;
    local_48 = 4;
    local_40 = 4;
    local_38 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringWithRange__0269d138,4,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_68,0);
  }
  puVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}


// FUN_007c8b6c @ 007c8b6c

void FUN_007c8b6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **local_c0;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_1);
  puVar1 = local_40;
  FUN_007c9cf4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  puVar3 = local_48;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar3;
    local_58 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    puVar2 = local_48;
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_30 = puVar2;
    local_18 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringByReplacingMatchesInString_0269ef30,puVar3,0,0,puVar2,&cf___);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      local_c0 = &local_48;
    }
    else {
      local_c0 = &local_68;
    }
    puVar3 = *local_c0;
    local_68 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = 1;
    local_38 = puVar3;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}


// FUN_00735e48 @ 00735e48

void FUN_00735e48(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_100;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  long local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar1 = local_50;
  FUN_00735c10();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_48 = (undefined *)0x0;
    local_68 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    lVar3 = local_58;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = lVar3;
    local_28 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,lVar1,0,0,lVar3,&cf___);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_78;
    local_78 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (puVar5 == (undefined *)0x0) {
      local_100 = (undefined *)0x0;
    }
    else {
      local_100 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_100;
    local_68 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}


// FUN_0027e8f4 @ 0027e8f4

void FUN_0027e8f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_58;
  undefined *local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0027a410();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_38 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((lVar2 == 0) || (local_38 == 0)) {
      lVar1 = local_20;
      FUN_0027e5a0(0,local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = lVar1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_50[0] = puVar3;
      FUN_0027a1c0(local_38,&cf_fileFormat);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_fileFormat);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_28,&cf_codingFormat);
      lVar1 = local_20;
      FUN_0027e5a0(local_20,local_50[0]);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = lVar1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


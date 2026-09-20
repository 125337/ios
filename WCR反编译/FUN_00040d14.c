// FUN_00040d14 @ 00040d14

void FUN_00040d14(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_38;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_0_00;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawAmount);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    FUN_00041d24();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((long)local_38 < 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar3;
      FUN_00041d24();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((long)local_38 < 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_0_00;
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}


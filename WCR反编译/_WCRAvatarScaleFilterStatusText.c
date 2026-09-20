// _WCRAvatarScaleFilterStatusText @ 0093ac88

void _WCRAvatarScaleFilterStatusText(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  bool local_49;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _WCRAvatarScaleFilterModeFromString();
  lVar2 = local_20;
  _WCRAvatarScaleFilterTokenSet();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar1 == 1) {
    if (lVar3 == 0) {
      local_68 = &cf__vTUS;
    }
    else {
      local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__vTUS);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_68;
    }
    local_39 = lVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  else if (lVar1 == 2) {
    if (lVar3 == 0) {
      local_78 = &cf_TUS;
    }
    else {
      local_78 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_TUS);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    local_49 = lVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

